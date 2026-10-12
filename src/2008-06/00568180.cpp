// from server: 85% by king_originala
typedef unsigned int Word;

void* __cdecl operator new(unsigned int);

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    __forceinline String(const char* text) { stringConstruct(this, text); }
    __forceinline ~String() { stringDestroy(this); }
};

struct Base {
    char storage[0x130];
    Base();
    ~Base();
    void setValue(const String&);
};

struct Part {
    char storage[0x20];
    Part();
    ~Part();
};

struct List {
    struct Proxy {
        List* owner;
        __forceinline Proxy(List* p) : owner(p) {}
    };

    struct ProxySlot {
        Proxy* value;
        __forceinline ProxySlot(List* owner) : value(new Proxy(owner)) {}
        ~ProxySlot();
    };

    ProxySlot proxy;
    Word reserved[2];
    Word first;
    Word last;
    Word count;

    __forceinline List() : proxy(this), first(0), last(0), count(0) {}
    ~List();
};

struct Holder {
    char storage[8];
    Holder(const List&);
    ~Holder();
};

struct S : Base {
    Part part;
    Word table150;
    Holder holder;
    List list;

    S();
    void initializeTables();
};

__forceinline void S::initializeTables()
{
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x000) = 0x82edc4;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x010) = 0x82edb4;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x014) = 0x82edac;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x020) = 0x82eda4;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x024) = 0x82ed94;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x044) = 0x82ed84;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x064) = 0x82ed74;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x084) = 0x82ed64;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x0a4) = 0x82ed54;
    *reinterpret_cast<Word*>(reinterpret_cast<char*>(this) + 0x0c4) = 0x82ed44;
    *reinterpret_cast<Word*>(&part) = 0x82ed34;
    table150 = 0x82ed28;
}

S::S()
    : Base(), part(), holder((initializeTables(), List())), list()
{
    setValue(String("Selection"));
}
