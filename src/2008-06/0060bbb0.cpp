// from server: 94% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Joint {
    char storage[0x98];
    Joint();
};

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const char* text) {
    stringConstruct(this, text);
}

__forceinline String::~String() {
    stringDestroy(this);
}

extern const unsigned int table0[];
extern const unsigned int table10[];
extern const unsigned int table14[];
extern const unsigned int table20[];
extern const unsigned int table24[];
extern const unsigned int table44[];
extern const unsigned int table64[];
extern const unsigned int table84[];
extern const unsigned int tableA4[];
extern const unsigned int tableC4[];
extern const unsigned int table130[];

struct Reference {
    void* object;
    void* control;
    Reference(int = 0);
    ~Reference();
};

__forceinline Reference::Reference(int) : control(0) {}

struct Base {
    unsigned int slots[0x154 / 4];
    Base(Joint*);
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    Reference first;
    float unused;
    Reference second;
    volatile bool flag;
    char padding[3];
    volatile bool enabled;
    S();
};

S::S()
    : Base(new Joint),
      first((
          slots[0] = (unsigned int)table0,
          slots[0x10 / 4] = (unsigned int)table10,
          slots[0x14 / 4] = (unsigned int)table14,
          slots[0x20 / 4] = (unsigned int)table20,
          slots[0x24 / 4] = (unsigned int)table24,
          slots[0x44 / 4] = (unsigned int)table44,
          slots[0x64 / 4] = (unsigned int)table64,
          slots[0x84 / 4] = (unsigned int)table84,
          slots[0xa4 / 4] = (unsigned int)tableA4,
          slots[0xc4 / 4] = (unsigned int)tableC4,
          slots[0x130 / 4] = (unsigned int)table130,
          first.object = 0,
          0)),
      second((second.object = 0, 0)),
      flag(false),
      enabled(false)
{
    setValue(String("VelocityMotor"));
}
