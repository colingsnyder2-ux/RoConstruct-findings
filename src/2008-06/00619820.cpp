// from server: 87% by king_originala
extern unsigned int table8440d0[];
extern unsigned int table843eb4[];
extern unsigned int table843ea4[];
extern unsigned int table843e9c[];
extern unsigned int table843e94[];
extern unsigned int table843e84[];
extern unsigned int table843e74[];
extern unsigned int table843e64[];
extern unsigned int table843e54[];
extern unsigned int table843e44[];
extern unsigned int table843e34[];
extern unsigned int table843e2c[];
extern unsigned int table843e24[];
extern unsigned int table843e0c[];
extern unsigned int table843e04[];
extern const char flagName[];

struct String;
extern String& (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text) {
    stringConstruct(this, text);
}
inline String::~String() {
    stringDestroy(this);
}

struct Pair {
    unsigned int first;
    unsigned int second;
    Pair(int = 0);
    ~Pair();
};

inline Pair::Pair(int) : first(0), second(0) {}

struct Base {
    char storage[0x268];
    Base(int);
    ~Base();
};

struct S : Base {
    Pair field268;
    char padding270[8];
    Pair field278;
    unsigned char field280;
    char padding281[3];
    unsigned char field284;
    char padding285[3];
    unsigned int field288;
    unsigned int field28c;

    S(int);
    void setValue(const String&);
};

S::S(int initializeVirtualBase)
    : Base(initializeVirtualBase
               ? (*(unsigned int**)((char*)this + 0x1c0) = table8440d0, 0)
               : 0),
      field268((
          *(unsigned int**)((char*)this + 0x000) = table843eb4,
          *(unsigned int**)((char*)this + 0x010) = table843ea4,
          *(unsigned int**)((char*)this + 0x014) = table843e9c,
          *(unsigned int**)((char*)this + 0x020) = table843e94,
          *(unsigned int**)((char*)this + 0x024) = table843e84,
          *(unsigned int**)((char*)this + 0x044) = table843e74,
          *(unsigned int**)((char*)this + 0x064) = table843e64,
          *(unsigned int**)((char*)this + 0x084) = table843e54,
          *(unsigned int**)((char*)this + 0x0a4) = table843e44,
          *(unsigned int**)((char*)this + 0x0c4) = table843e34,
          *(unsigned int**)((char*)this + 0x130) = table843e2c,
          *(unsigned int**)((char*)this + 0x1a0) = table843e24,
          *(unsigned int**)((char*)this + 0x1b0) = table843e0c,
          *(unsigned int**)((char*)this + 0x1c0 +
              (*(unsigned int**)((char*)this + 0x1c0))[1]) = table843e04,
          *(unsigned int*)((char*)this + 0x1bc +
              (*(unsigned int**)((char*)this + 0x1c0))[1]) =
              (*(unsigned int**)((char*)this + 0x1c0))[1] - 0xd4,
          0)),
      field278()
{
    field280 = 0;
    field284 = 0;
    field288 = 0;
    field28c = 0xc2;

    String name(flagName);
    setValue(name);
}
