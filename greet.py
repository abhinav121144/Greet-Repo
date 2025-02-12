def greet(language):
    greetings = {
        "english": "Hello!",
        "spanish": "Hola!",
        "french": "Bonjour!",
        "german": "Hallo!",
        "italian": "Ciao!",
        "chinese": "你好!",
        "japanese": "こんにちは!",
        "hindi": "नमस्ते!"
    }
    
    return greetings.get(language.lower(), "Sorry, language not supported.")

def main():
    print("Multilingual Greeting Program")
    print("Supported languages: English, Spanish, French, German, Italian, Chinese, Japanese, Hindi")
    
    lang = input("Enter a language: ")
    print(greet(lang))

if __name__ == "__main__":
    main()
