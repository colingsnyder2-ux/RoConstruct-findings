// from server: 85% by king_originala
struct String;

typedef String* (__thiscall *StringConstructor)(String*, const char*);
extern StringConstructor constructString;

struct S {
    char padding0[0x1c];
    int active;
    char padding1[4];
    unsigned char anchored;

    String* f(String* result);
};

String* S::f(String* result)
{
    volatile int temporary = 0;
    if (active && anchored) {
        constructString(result, "UnAnchorCursor");
        return result;
    }
    constructString(result, "AnchorCursor");
    return result;
}
