#include "Director.h"
#include "SuperComputerBuilder.h"
#include "TabletComputerBuilder.h"

int main(void) {
    Director director;
    director.setComputerBuilder(new SuperComputerBuilder());
    director.buildComputer();

    director.setComputerBuilder(new TabletComputerBuilder());
    director.buildComputer();

    auto result = director.getResult();
    std::cout << *result << std::endl;

	std::cin.get();

    delete result;
}