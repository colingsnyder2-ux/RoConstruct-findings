// from server: 92% by king_originala
struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* s)
{
    stringConstruct(this, s);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Base {
    unsigned char data[0x130];
    Base(int);
    ~Base();
    void base();
};

__forceinline Base::Base(int initialize)
{
    volatile int state = 0;
    unsigned char* p = reinterpret_cast<unsigned char*>(this);
    if (initialize) {
        *reinterpret_cast<unsigned long*>(p + 0x150) = 0x834eb4;
        *reinterpret_cast<unsigned long*>(p + 0x1d4) = 0x846144;
    }
    base();
}

struct Vector {
    char storage[16];
    Vector();
    ~Vector();
};

struct Handle {
    unsigned long table;
    int first;
    int second;
    int third;
    Handle();
};

__forceinline Handle::Handle()
{
    first = -1;
    second = -1;
    third = 0;
}

struct Setup {
    unsigned long table;
    int value;
    Setup(Vector*);
};

__forceinline Setup::Setup(Vector* vector)
{
    unsigned char* p = reinterpret_cast<unsigned char*>(this) - 0x150;
    int* t = *reinterpret_cast<int**>(p + 0x150);

    *reinterpret_cast<unsigned long*>(p) = 0x834bf4;
    *reinterpret_cast<unsigned long*>(p + 0x10) = 0x834be8;
    *reinterpret_cast<unsigned long*>(p + 0x14) = 0x834be0;
    *reinterpret_cast<unsigned long*>(p + 0x20) = 0x834bd8;
    *reinterpret_cast<unsigned long*>(p + 0x24) = 0x834bc8;
    *reinterpret_cast<unsigned long*>(p + 0x44) = 0x834bb8;
    *reinterpret_cast<unsigned long*>(p + 0x64) = 0x834ba8;
    *reinterpret_cast<unsigned long*>(p + 0x84) = 0x834b98;
    *reinterpret_cast<unsigned long*>(p + 0xa4) = 0x834b88;
    *reinterpret_cast<unsigned long*>(p + 0xc4) = 0x834b78;
    *reinterpret_cast<unsigned long*>(vector) = 0x834b70;
    *reinterpret_cast<unsigned long*>(p + 0x140) = 0x834b58;

    *reinterpret_cast<unsigned long*>(p + 0x150 + t[1]) = 0x834b50;
    t = *reinterpret_cast<int**>(p + 0x150);
    *reinterpret_cast<unsigned long*>(p + 0x150 + t[2]) = 0x834b34;

    t = *reinterpret_cast<int**>(p + 0x150);
    int offset = t[1];
    *reinterpret_cast<int*>(p + 0x14c + offset) = offset - 0x78;

    t = *reinterpret_cast<int**>(p + 0x150);
    offset = t[2];
    *reinterpret_cast<int*>(p + 0x14c + offset) = offset - 0x80;
    value = 0;
}

struct NameItem {
    char storage[0x34];
    NameItem();
    ~NameItem();
};

struct Record {
    int first;
    int second;
    unsigned char flag;
    unsigned char padding1[3];
    unsigned char otherFlag;
    unsigned char padding2[3];
    int last;
    Record();
    ~Record();
};

__forceinline Record::Record()
{
    first = 0;
    second = 0;
    flag = 0;
    otherFlag = 0;
}

struct S : Base {
    Vector vector;
    Handle handle;
    Setup setup;
    NameItem name;
    Record record1;
    Record record2;
    Record record3;
    unsigned char tail[8];

    S(int);
    void setValue(const String&);
};

S::S(int initialize) : Base(initialize), setup(&vector)
{
    String value(reinterpret_cast<const char*>(0x8349f8));
    setValue(value);
}
