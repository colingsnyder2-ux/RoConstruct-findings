// from server: 89% by king_originala
struct String;
extern void __cdecl construct_string(String *, unsigned int, char);
extern String &(__thiscall *append_string)(String *, const char *);

struct String
{
    char storage[20];
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
};

inline String::String()
{
    construct_string(this, 1, 0);
}

String func_00568460()
{
    String result;
    if (result.length > 0)
        append_string(&result, "\\GlobalSettings7.xml");
    return result;
}
