#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "Chatbot: Hi, how can I help you today?" << std::endl;
    while (true)
    {
        std::getline(std::cin, input);
        std::cout << "You: " << input << std::endl;
        if (input == "bye" || input == "Goodbye" || input == "exit")
        {
            std::cout << "Chatbot: Goodbye! Have a nice day." << std::endl;
            break;
        }
        else if (input == "hello" || input == "hi")
        {
            std::cout << "Chatbot: Hello! How can I help you today?" << std::endl;
        }
        else
        {
            std::cout << "Chatbot: I'm sorry, I didn't understand what you said. Can you please rephrase it?" << std::endl;
        }
    }
    return 0;
}
