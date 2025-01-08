std::vector<int> vec = {1, 2, 3};
for (int i = 0; i <= vec.size(); ++i) { //Error: Accessing vec[vec.size()] causes undefined behavior.
    std::cout << vec[i] << " ";
}
std::cout << std::endl;  //Output: 1 2 3 0
//The loop condition should be i < vec.size() to avoid out-of-bounds access.