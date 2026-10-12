// from server: 84% by king_originala
typedef unsigned long DWORD;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
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

struct Base {
    char storage[0x130];
    Base();
    ~Base();
};

struct Selection;

struct Reference {
    void* object;
    void* count;
    Reference(Selection*);
    ~Reference();
};

struct Proxy {
    void* owner;
};

struct ContainerBase {
    Proxy* proxy;
    DWORD reserved[2];
    ContainerBase();
    ~ContainerBase();
};

struct Container : ContainerBase {
    void* first;
    void* last;
    void* limit;
    Container();
    ~Container();
};

struct Selection : Base {
    DWORD table;
    Reference reference;
    Container items;

    Selection();
    void setName(const String&);
};

__forceinline Reference::Reference(Selection* owner) {
    DWORD* words = reinterpret_cast<DWORD*>(owner);
    words[0x00 / 4] = 0x843b0c;
    words[0x10 / 4] = 0x843afc;
    words[0x14 / 4] = 0x843af4;
    words[0x20 / 4] = 0x843aec;
    words[0x24 / 4] = 0x843adc;
    words[0x44 / 4] = 0x843acc;
    words[0x64 / 4] = 0x843abc;
    words[0x84 / 4] = 0x843aac;
    words[0xa4 / 4] = 0x843a9c;
    words[0xc4 / 4] = 0x843a8c;
    words[0x130 / 4] = 0x843a84;
    object = 0;
    count = 0;
}

inline ContainerBase::ContainerBase() {
    Proxy* p = static_cast<Proxy*>(operator new(4));
    if (p)
        p->owner = this;
    else
        p = 0;
    proxy = p;
}

inline Container::Container() : ContainerBase() {
    first = 0;
    last = 0;
    limit = 0;
}

Selection::Selection()
    : Base(), reference(this), items() {
    String name("FilteredSelection");
    setName(name);
}
