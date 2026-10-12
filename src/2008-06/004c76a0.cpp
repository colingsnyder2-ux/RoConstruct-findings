// from server: 71% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct Name {
    char storage[48];
    Name();
    ~Name();
};

struct Links;

struct Owner {
    Links* value;
    Owner(Links*);
};

struct Links {
    Owner* owner;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* end;
    Links();
    ~Links();
};

struct Item {
    unsigned int reserved;
    Name name;
    Links links;
    Item();
};

__forceinline Owner::Owner(Links* p)
    : value(p)
{
}

__forceinline Links::Links()
{
    owner = new Owner(this);
    first = 0;
    last = 0;
    end = 0;
}

Item::Item()
{
}
