// from server: 80% by king_originala
typedef unsigned long DWORD;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void (__thiscall *stringDefault)(void*);
extern void (__thiscall *stringFromText)(void*, const char*);
extern void (__thiscall *stringDestroy)(void*);

struct String {
    unsigned char storage[28];
    String();
    String(const char*);
    ~String();
};

__forceinline String::String()
{
    stringDefault(this);
}

__forceinline String::String(const char* p)
{
    stringFromText(this, p);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Base {
    unsigned char storage[0x1c8];
    Base();
    ~Base();
};

struct Secondary {
    unsigned char storage[0x28];
    Secondary(int);
    ~Secondary();
};

struct Tables {
    DWORD a, b, c;
    Tables();
    ~Tables();
};

__forceinline Tables::Tables()
{
    DWORD* w = reinterpret_cast<DWORD*>(
        reinterpret_cast<char*>(this) - 0x1f0);
    w[0] = 0x8303cc;
    w[0x10 / 4] = 0x8303c0;
    w[0x14 / 4] = 0x8303b8;
    w[0x20 / 4] = 0x8303b0;
    w[0x24 / 4] = 0x8303a0;
    w[0x44 / 4] = 0x830390;
    w[0x64 / 4] = 0x830380;
    w[0x84 / 4] = 0x830370;
    w[0xa4 / 4] = 0x830360;
    w[0xc4 / 4] = 0x830350;
    w[0x130 / 4] = 0x830340;
    w[0x150 / 4] = 0x830330;
    w[0x170 / 4] = 0x830320;
    w[0x1c8 / 4] = 0x830318;
    a = 0x83030c;
    b = 0x830304;
    c = 0x8302f8;
}

extern void __cdecl constructOwner(void*, void*);
extern void __cdecl constructPair(void*);
extern void __cdecl func_0047d410();

struct Owner {
    DWORD first, second;
    Owner(void*);
    ~Owner();
};

__forceinline Owner::Owner(void* p)
{
    constructOwner(this, p);
}

struct ZeroPair {
    DWORD first, second;
    ZeroPair();
    ~ZeroPair();
};

__forceinline ZeroPair::ZeroPair() : first(0), second(0) {}

struct Pair {
    DWORD first, second;
    Pair();
    ~Pair();
};

__forceinline Pair::Pair()
{
    constructPair(this);
}

struct Item {
    DWORD value;
    unsigned char enabled;
    unsigned char padding[3];
    DWORD other;
    Item();
    ~Item();
};

struct Count {
    DWORD value;
    Count(Item*);
    ~Count();
    void initialize(Item*);
};

__forceinline Count::Count(Item* p)
{
    initialize(p);
    typedef void (__cdecl *Notify)(Count*, Item*, Item*);
    reinterpret_cast<Notify>(&func_0047d410)(this, p, p);
}

struct S : Base, Secondary {
    Tables tables;
    DWORD empty1;
    DWORD empty2;
    Owner owner;
    ZeroPair pair1;
    ZeroPair pair2;
    Pair pair3;
    Pair pair4;
    DWORD empty3;
    unsigned char enabled;
    unsigned char padding[3];
    String text;
    DWORD empty4;
    DWORD untouched;
    unsigned char flag1;
    unsigned char flag2;
    unsigned char padding2[2];
    Item* item;
    Count count;

    S();
    void setName(const String&);
};

S::S()
    : Base(),
      Secondary(0),
      tables(),
      empty1(0),
      empty2(0),
      owner(this),
      pair1(),
      pair2(),
      pair3(),
      pair4(),
      empty3(0),
      enabled(1),
      text(),
      empty4(0),
      flag1(0),
      flag2(0),
      item(new Item),
      count(item)
{
    String name("Level");
    setName(name);
}
