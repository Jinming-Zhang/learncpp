The following function will be good enough for most cases with  
- absEpsilon = 1e-12
- relEpsilon = 1e-8
```cpp
bool approximatelyEqual(float a, float b, float absEpsilon, float relEpsilon){
	float diff {std::abs(a-b)};

	if(diff <= absEpsilon){
		return true;
	}

	float upperbound = std::max(std::abs(a),std::max(b);
	return diff <= upperbound * relEpsilon;
}
```