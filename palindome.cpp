#include <iostream>
#include <string>
#include <cctype>


bool isPalindrome(const std::string & text)
{
	std::string smartText;
	smartText.reserve(text.size());

	for (const auto & sign : text)
	{
		if (sign != ' ')
		{
			smartText += sign;
		}
	}

	size_t count = smartText.size() - 1;

	for(size_t k = 0; k < smartText.size() / 2; ++k)
	{
		if (std::tolower(smartText[k]) != std::tolower(smartText[count - k]))
		{
			return false;
		}
	}

	return true;
}

int main()
{
	std::string testData[8] =
	{
		"agata",
		"kajak",
		"neveroddoreven",
		"sekwenwkes",
		"nowoczesny",
		"Ma tarapaty ta para tam",
		"Race fast safe car",
		"Si nummi immunis"
	};

	for (const auto & entry : testData)
	{
		std::cout << entry << " is"
			<< (isPalindrome(entry) ? "" : " not")
			<< " a palindome.\n";
	}

	return 0;
}
