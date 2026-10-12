// from server: 89% by king_originala
struct String
{
    char data[32];
    String(const String&);
    ~String();
};

struct Pair
{
    void* first;
    void* second;

    Pair(void* a, void* b) : first(a), second(b) {}
    Pair(const Pair&);
};

extern void* __cdecl helper(void*, void*, String);

Pair __cdecl function(void* first, void* argument, void* unused,
                      void* value, String text)
{
    void* second = helper(argument, value, text);
    Pair result(first, second);
    return result;
}
