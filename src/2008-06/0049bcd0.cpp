// from server: 95% by king_originala
void __cdecl operator delete(void*) throw();

extern void (__thiscall *destroy_string)(void*);

struct String {
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct Base {
    void* allocation;
    ~Base();
};

__forceinline Base::~Base()
{
    operator delete(allocation);
}

struct Container : Base {
    unsigned char padding[16];
    void* map;

    void clear();
    ~Container();
};

__forceinline Container::~Container()
{
    clear();
    operator delete(map);
    map = 0;
}

struct Element {
    unsigned char padding[8];
    String name;
    Container values;
    ~Element();
};

__forceinline Element::~Element()
{
}

struct S {
    unsigned char padding[16];
    Element** map;
    unsigned int capacity;
    unsigned int first;
    unsigned int count;

    void clear();
};

void S::clear()
{
    while (count != 0) {
        if (count != 0) {
            unsigned int slot = first + count - 1;
            if (capacity <= slot)
                slot -= capacity;

            map[slot]->~Element();

            if (--count == 0)
                first = 0;
        }
    }

    unsigned int i = capacity;
    while (i > 0) {
        --i;
        if (map[i] != 0)
            operator delete(map[i]);
    }

    if (map != 0)
        operator delete(map);

    map = 0;
    capacity = 0;
}
