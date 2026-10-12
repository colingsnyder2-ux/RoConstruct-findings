// from server: 99% by king_originala
struct String;

extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringCopy)(String*, const String*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char data[28];
    String();
    String(const String&);
    ~String();
};

__forceinline String::String()
{
    stringConstruct(this);
}

__forceinline String::String(const String& other)
{
    stringCopy(this, &other);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Input;

extern "C" void __cdecl readCount(Input*, unsigned int*);
extern "C" void __cdecl readValue(Input*, unsigned int*);
extern "C" void __cdecl readString(Input*, String*);

struct S {
    char padding[12];
    unsigned int* begin;
    unsigned int* end;
    unsigned int* capacity;
    unsigned int bits;

    void initialize(unsigned int, unsigned int);
    void insert(String, unsigned int);
    void load(Input*);
};

void S::load(Input* input)
{
    unsigned int count;
    readCount(input, &count);
    initialize(count, 0);

    for (unsigned int i = 0; i < count; ++i) {
        unsigned int value;
        readValue(input, &value);
        String text;
        readString(input, &text);
        insert(text, value);
    }

    unsigned int size = end - begin;
    unsigned int result = ~0u;
    while (size > 0) {
        size >>= 1;
        ++result;
    }
    bits = result + 1;
}
