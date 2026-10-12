// from server: 80% by king_originala
void __cdecl operator delete(void *);

struct Base {
    unsigned char storage[0x134];
    ~Base();
};

struct Owned {
    ~Owned();
};

struct Ref {
    unsigned char storage[0x14];
    ~Ref();
};

struct List {
    void *allocation;
    unsigned char storage[0x2c];
    void clear();
    ~List();
};

__forceinline List::~List()
{
    clear();
    operator delete(allocation);
}

struct S : Base {
    Owned *owned;
    List list;
    Ref first;
    Ref second;
    Ref third;
    ~S();
};

S::~S()
{
    *reinterpret_cast<unsigned long *>(storage) = 0x8318bc;
    *reinterpret_cast<unsigned long *>(storage + 0x10) = 0x8318b0;
    *reinterpret_cast<unsigned long *>(storage + 0x14) = 0x8318a8;
    *reinterpret_cast<unsigned long *>(storage + 0x20) = 0x8318a0;
    *reinterpret_cast<unsigned long *>(storage + 0x24) = 0x831890;
    *reinterpret_cast<unsigned long *>(storage + 0x44) = 0x831880;
    *reinterpret_cast<unsigned long *>(storage + 0x64) = 0x831870;
    *reinterpret_cast<unsigned long *>(storage + 0x84) = 0x831860;
    *reinterpret_cast<unsigned long *>(storage + 0xa4) = 0x831850;
    *reinterpret_cast<unsigned long *>(storage + 0xc4) = 0x831840;
    delete owned;
}
