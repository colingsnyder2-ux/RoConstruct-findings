// from server: 78% by king_originala
extern void (__thiscall *string_construct)(void*);
extern void (__thiscall *string_copy)(void*, const void*);
extern void (__thiscall *string_destroy)(void*);
extern const char* (__thiscall *string_c_str)(const void*);
extern int (__cdecl *convert_integer)(const char*);

struct String
{
    char storage[28];

    String();
    String(const String&);
    ~String();
    const char* c_str() const;
};

__forceinline String::String()
{
    string_construct(this);
}

__forceinline String::String(const String& other)
{
    string_copy(this, &other);
}

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline const char* String::c_str() const
{
    return string_c_str(this);
}

struct Parser
{
    String first;
    String second;

    Parser(const String&);
    ~Parser();
    void parse(String&);
};

__forceinline Parser::Parser(const String& input)
    : first(input), second()
{
}

__forceinline Parser::~Parser()
{
}

int __cdecl function_00427480(String input)
{
    int result = 5;
    try
    {
        String output;
        {
            Parser parser(input);
            parser.parse(output);
        }
        return result = convert_integer(output.c_str());
    }
    catch (String error)
    {
        return result;
    }
}
