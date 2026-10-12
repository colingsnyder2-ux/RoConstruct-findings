// from server: 84% by king_originala
struct String;
extern void (__thiscall *G1_func_0080245c)(String *, const String *);

struct String {
    char data[28];
    String(const String &other);
};

inline String::String(const String &other)
{
    G1_func_0080245c(this, &other);
}

struct Entry {
    void (__cdecl *callback)(String);
    String value;
};

void __cdecl f(Entry **p)
{
    Entry *q = *p;
    q->callback(q->value);
}
