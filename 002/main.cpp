#include <iostream>

std::size_t fibonacci(std::size_t n_2, std::size_t n_1)
{
	return n_2 + n_1;
}

int main()
{
	std::size_t n_1 = 1;
	std::size_t n = 1;
	const std::size_t max = 4000000;
	std::size_t somme = 0;
	while(n < max)
	{
		const auto old_n = n;
		n = fibonacci(n, n_1);
		if(n % 2 == 0) somme += n;
		n_1 = old_n;
	}
	std::cout << somme << std::endl;
}