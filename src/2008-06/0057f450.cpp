// from server: 98% by king_originala
struct String;

extern void (__thiscall *StringCopy)(String*, const String&);
extern void (__thiscall *StringDestroy)(String*);

struct String {
    char storage[28];
    String(const String& other) { StringCopy(this, other); }
    ~String() { StringDestroy(this); }
};

struct Base {
    Base(String, int);
    virtual ~Base();
};

struct S : Base {
    S(String, int);
    virtual ~S();
};

S::S(String text, int value) : Base(text, value) {}
