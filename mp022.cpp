#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>



class Main {

	int insert, counts = 0;
	std::vector<int> intrecord;
public:
	void low();
	void input();
	void high();
	void mid();
	void descending();
	void ascending();
	void odd();
	void even();
};



int main() {

	char reset;
	do {
		system("cls");
		Main Function;
		Function.input();
		Function.low();
		Function.mid();
		Function.high();
		Function.ascending();
		Function.descending();
		Function.odd();
		Function.even();
		std::cin >> reset;

	} while (reset == 'Y' || reset == 'y');
	return 0;
};

void Main::input() {
	std::cout << "Enter positive integers: ";
	while ((std::cin >> insert) && insert >= 0) {
		intrecord.push_back(insert);
		counts++;
	}
};
void Main::low() {
	int min = *min_element(intrecord.begin(), intrecord.end());
	std::cout << "\nLow:\t" << min;

};
void Main::high() {
	int max = *max_element(intrecord.begin(), intrecord.end());
	std::cout << "\n\nHigh:\t" << max;
};

void Main::mid() {
	float var_1, var_2, var_3, var_4;
	var_4 = counts;
	sort(intrecord.begin(), intrecord.end());
	if (counts % 2 == 0) {
		var_1 = (var_4 / 2) - 1;
		var_2 = var_1 + 1;
		std::cout << "\n\nMid : \t" << intrecord[var_1] << " " << intrecord[var_2];
	}
	else {
		var_3 = ((var_4 / 2) + 0.5) - 1;
		std::cout << "\n\nMid : \t" << intrecord[var_3];
	}
}

void Main::descending() {
	std::cout << "\n\nDescending: ";
	sort(intrecord.begin(), intrecord.end(), std::greater<int>());
	for (int desc = 0; desc < intrecord.size(); desc++) {
		std::cout << intrecord[desc] << " ";
	}
}

void Main::ascending() {
	std::cout << "\n\nAscending: ";
	sort(intrecord.begin(), intrecord.end());
	for (auto ascen = intrecord.begin(); ascen < intrecord.end(); ascen++) {
		std::cout << *ascen << " ";
	}
}

void Main::odd() {
	std::cout << "\n\nOdd Numbers(AS): ";
	for (int var = 0; var < intrecord.size(); var++) {
		if (intrecord[var] % 2 != 0)
			std::cout << intrecord[var] << " ";
	}
}

void Main::even() {
	std::cout << "\n\nEven Numbers(AS): ";
	for (int num = 0; num < intrecord.size(); num++) {
		if (intrecord[num] % 2 == 0)
			std::cout << intrecord[num] << " ";
	}std::cout << "\n\nTry another[y/n] : ";
}