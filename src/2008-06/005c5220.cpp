// from server: 98% by king_originala
struct String;
extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *s) {
    stringConstruct(this, s);
}

inline String::~String() {
    stringDestroy(this);
}

struct Base {
    unsigned long storage[76];
    Base();
    ~Base();
    void setName(const String &);
};

struct Pointer {
    void *value;
    Pointer();
    ~Pointer();
};

inline Pointer::Pointer() : value(0) {
}

struct S : Base {
    String name;
    Pointer pointer;
    S();
};

S::S()
    : Base(),
      name((storage[0] = 0x00838db4,
            storage[4] = 0x00838da8,
            storage[5] = 0x00838da0,
            storage[8] = 0x00838d98,
            storage[9] = 0x00838d88,
            storage[17] = 0x00838d78,
            storage[25] = 0x00838d68,
            storage[33] = 0x00838d58,
            storage[41] = 0x00838d48,
            storage[49] = 0x00838d38,
            "NoVisit")),
      pointer() {
    setName(String("Visit"));
}
