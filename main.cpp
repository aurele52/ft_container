#include "main.hpp"

int	main()
{
	{
		std::vector<int>	mvector;

		mvector.push_back(5);
		mvector.push_back(12);

		
		std::cout << mvector.size() << std::endl;

		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(12);
		mvector.push_back(12);
		mvector.push_back(12);
		mvector.push_back(12);
		mvector.push_back(12);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::vector<int>::iterator ite = mvector.end();
		std::vector<int>::iterator it = mvector.begin();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{

		ft::vector<int>	mvector;

		mvector.push_back(5);
/*
		mvector.push_back(12);

		
		std::cout << mvector.size() << std::endl;

		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(5);
		mvector.push_back(12);
		mvector.push_back(12);
		mvector.push_back(12);
		mvector.push_back(12);
		mvector.push_back(12);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::vector<int>::iterator ite = mvector.end();
		std::vector<int>::iterator it = mvector.begin();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
*/
	}
}
