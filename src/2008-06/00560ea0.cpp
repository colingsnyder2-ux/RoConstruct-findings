// from server: 96% by king_originala
struct String;
extern void (__thiscall* string_copy_ctor)(String*, const String&);

struct String {
    unsigned char storage[28];

    String(const String&);
    ~String();
};

inline String::String(const String& other) {
    string_copy_ctor(this, other);
}

struct Tail {
    Tail(const Tail&);
};

struct S {
    String text;
    unsigned int value;
    Tail tail;

    S(const S&);
};

S::S(const S& other)
    : text(other.text), value(other.value), tail(other.tail) {
}
