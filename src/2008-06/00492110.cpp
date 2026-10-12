// from server: 98% by king_originala
struct String {
    char data[32];
    String(const String&);
    ~String();
};

struct Value {
    String text;
    void* pointer;
    Value(String, void*);
};

Value __cdecl f(String text, void* pointer)
{
    return Value(text, pointer);
}
