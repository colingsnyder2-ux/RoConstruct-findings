// from server: 95% by king_originala
struct String {
    unsigned int storage[7];
    String(const String&);
    ~String();
};

extern String* (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

inline String::String(const String& other) {
    string_copy(this, other);
}

inline String::~String() {
    string_destroy(this);
}

struct Value {
    String text;
    int value;
};

struct Base {
    Base(int, int, int, Value);
};

struct S : Base {
    S(int, int, int, Value);
};

S::S(int a, int b, int c, Value value)
    : Base(a, b, c, value) {
}
