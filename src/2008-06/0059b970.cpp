// from server: 99% by king_originala
extern "C" void __cdecl release(void*);

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
    words[0] = 0x00832d4c;
    words[4] = 0x00832d3c;
    words[5] = 0x00832d34;
    words[8] = 0x00832d2c;
    words[9] = 0x00832d1c;
    words[17] = 0x00832d0c;
    words[25] = 0x00832cfc;
    words[33] = 0x00832cec;
    words[41] = 0x00832cdc;
    words[49] = 0x00832ccc;
    words[76] = 0x00832cc0;
    buffer.vtable = 0x00832cb0;
    secondary = 0x00832ca4;
    *reinterpret_cast<unsigned int*>(part.data) = 0x00832c8c;

    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + t[1] + 0x134) = 0x00832c80;
    t = table;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + t[2] + 0x134) = 0x00832c78;
    t = table;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + t[3] + 0x134) = 0x00832c5c;

    t = table;
    int offset = t[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2b8;
    offset = table[2];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2c0;
    offset = table[3];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2c8;
}
