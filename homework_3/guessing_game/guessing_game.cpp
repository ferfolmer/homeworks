#include <iostream>
#include <random>

int main() {
  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  float min, max;
  int attempt;
  int i = 1;
  std::cout << "Welcome to the GUESSING GAME!" << std::endl
            << "I will generate a number and you will guess it !" << std::endl;
  std::cout << "Please provide the smallest number: " << std::endl;
  std::cin >> min;
  std::cout << "Please provide the largest number: " << std::endl;
  std::cin >> max;
  std::cout << "I've generated a number. Try to guess it!" << std::endl;
  std::uniform_real_distribution distribution{min, max};
  int random_int = static_cast<int>(distribution(random_engine));
  do {
    std::cout << "Please provide the next guess: ";
    std::cin >> attempt;
    if (attempt < random_int) {
      std::cout << "Your number is too small. Try again!" << std::endl;
      i++;
    }
    if (attempt > random_int) {
      std::cout << "Your number is too big. Try again!" << std::endl;
      i++;
    }
  } while (attempt != random_int);

  std::cout << "You've done it! You guessed the number " << random_int << " in "
            << i << " guesses" << std::endl;
  return 0;
}