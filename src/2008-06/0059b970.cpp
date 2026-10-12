// from server: 88% by king_originala
extern "C" void __cdecl release(void*);

extern unsigned int vtable0[];
extern unsigned int vtable10[];
extern unsigned int vtable14[];
extern unsigned int vtable20[];
extern unsigned int vtable24[];
extern unsigned int vtable44[];
extern unsigned int vtable64[];
extern unsigned int vtable84[];
extern unsigned int vtableA4[];
extern unsigned int vtableC4[];
extern unsigned int vtable130[];
extern unsigned int vtable1A0[];
extern unsigned int vtable1C0[];
extern unsigned int vtable1CC[];
extern unsigned int virtualTable1[];
extern unsigned int virtualTable2[];
extern unsigned int virtualTable3[];

struct Base
{
    unsigned int words[77];
    int* table;
    char tail[0x68];
    ~Base();
};

struct Buffer
{
    unsigned int vtable;
    void* allocation;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* limit;
    unsigned int padding;
    ~Buffer();
};

inline Buffer::~Buffer()
{
    if (first)
        release(first);
    void* p = allocation;
    first = 0;
    last = 0;
    limit = 0;
    release(p);
}

struct Part
{
    char data[0x5c];
    ~Part();
};

struct Storage
{
    char data[0x1a0];
    ~Storage();
};

struct String
{
    char data[28];
    ~String();
};

extern void (__thiscall* destroyString)(String*);

inline String::~String()
{
    destroyString(this);
}

struct S : Base
{
    Buffer buffer;
    unsigned int secondary;
    unsigned int padding[2];
    Part part;
    Storage storage;
    String text;
    ~S();
};

S::~S()
{
    int* t = table;
    words[0] = reinterpret_cast<unsigned int>(vtable0);
    words[4] = reinterpret_cast<unsigned int>(vtable10);
    words[5] = reinterpret_cast<unsigned int>(vtable14);
    words[8] = reinterpret_cast<unsigned int>(vtable20);
    words[9] = reinterpret_cast<unsigned int>(vtable24);
    words[17] = reinterpret_cast<unsigned int>(vtable44);
    words[25] = reinterpret_cast<unsigned int>(vtable64);
    words[33] = reinterpret_cast<unsigned int>(vtable84);
    words[41] = reinterpret_cast<unsigned int>(vtableA4);
    words[49] = reinterpret_cast<unsigned int>(vtableC4);
    words[76] = reinterpret_cast<unsigned int>(vtable130);
    buffer.vtable = reinterpret_cast<unsigned int>(vtable1A0);
    secondary = reinterpret_cast<unsigned int>(vtable1C0);
    *reinterpret_cast<unsigned int*>(part.data) =
        reinterpret_cast<unsigned int>(vtable1CC);

    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + t[1]) =
        reinterpret_cast<unsigned int>(virtualTable1);
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + table[2]) =
        reinterpret_cast<unsigned int>(virtualTable2);
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x134 + table[3]) =
        reinterpret_cast<unsigned int>(virtualTable3);

    int offset = table[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2b8;
    offset = table[2];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2c0;
    offset = table[3];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2c8;
}
