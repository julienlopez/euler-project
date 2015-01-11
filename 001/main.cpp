#include <iostream>

int main()
{
	std::size_t somme = 0;
	const size_t max = 1000;
	for(std::size_t n = 3; n < max; n++)
	{
		if(n % 3 == 0 || n % 5 == 0) somme += n;
	}
	std::cout << somme << std::endl;
}