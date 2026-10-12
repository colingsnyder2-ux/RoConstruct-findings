// from server: 96% by king_originala
struct String {
    char storage[28];
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct TemporaryString : String {
    TemporaryString(const char*);
    ~TemporaryString();
};

inline TemporaryString::TemporaryString(const char* text)
{
    stringConstruct(this, text);
}

inline TemporaryString::~TemporaryString()
{
    stringDestroy(this);
}

struct Base {
    unsigned long words[81];
    Base();
    ~Base();
    void setValue(const String&);
};

struct PointerPair {
    void* pointer;
    void* owner;
    PointerPair(int);
    ~PointerPair();
};

inline PointerPair::PointerPair(int) : pointer(0), owner(0)
{
}

struct Pointer {
    void* pointer;
    Pointer();
    ~Pointer();
};

inline Pointer::Pointer() : pointer(0)
{
}

struct Tag {
    Tag();
};

inline Tag::Tag()
{
}

struct Table {
    unsigned long storage[4];
    Table(const Tag&, const Tag&);
    ~Table();
};

struct Interface {
    void** functions;
};

struct S : Base {
    PointerPair first;
    Pointer second;
    unsigned long unused;
    unsigned long low;
    unsigned long high;
    bool flag1;
    char padding1[3];
    bool flag2;
    char padding2[3];
    Table table;
    S();
};

S::S()
    : Base(),
      first((
          words[0] = 0x82367c,
          words[4] = 0x823670,
          words[5] = 0x823668,
          words[8] = 0x823660,
          words[9] = 0x823650,
          words[17] = 0x823640,
          words[25] = 0x823630,
          words[33] = 0x823620,
          words[41] = 0x823610,
          words[49] = 0x823600,
          words[76] = 0x8235d0,
          words[77] = 0x8235c4,
          0)),
      second(), low(0), high(0),
      flag1(false), flag2(false), table(Tag(), Tag())
{
    setValue(TemporaryString("NetworkServer"));

    Interface* object = reinterpret_cast<Interface*>(words[80]);
    typedef void (__thiscall *SetCapacity)(Interface*, unsigned int);
    reinterpret_cast<SetCapacity>(object->functions[4])(object, 64);

    object = reinterpret_cast<Interface*>(words[80]);
    const char* text = *reinterpret_cast<const char* const*>(0x970b8c);
    if (*reinterpret_cast<const unsigned int*>(0x970ba0) < 16)
        text = reinterpret_cast<const char*>(0x970b8c);
    unsigned int length = *reinterpret_cast<const unsigned int*>(0x970b9c);

    typedef void (__thiscall *SetText)(Interface*, const char*, unsigned int);
    reinterpret_cast<SetText>(object->functions[7])(object, text, length);
}
