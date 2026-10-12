// from server: 99% by king_originala
struct String;
extern void (__thiscall *string_default)(String *);
extern void (__thiscall *string_copy)(String *, const String &);
extern void (__thiscall *string_destroy)(String *);

struct String {
    unsigned char data[28];
    String();
    String(const String &);
    ~String();
};

__forceinline String::String()
{
    string_default(this);
}

__forceinline String::String(const String &other)
{
    string_copy(this, other);
}

__forceinline String::~String()
{
    string_destroy(this);
}

extern void __cdecl read_count(unsigned int, unsigned int *);
extern void __cdecl read_key(unsigned int, unsigned int *);
extern void __cdecl read_string(unsigned int, String *);

struct S {
    unsigned char padding[12];
    unsigned int *begin;
    unsigned int *end;
    unsigned int *capacity;
    unsigned int bits;

    void reserve(unsigned int, unsigned int);
    void insert(String, unsigned int);
    void func_004b17f0(unsigned int);
};

void S::func_004b17f0(unsigned int count)
{
    unsigned int source = count;
    read_count(source, &count);
    reserve(count, 0);

    for (unsigned int i = 0; i < count; ++i) {
        unsigned int key;
        read_key(source, &key);
        String text;
        read_string(source, &text);
        insert(text, key);
    }

    unsigned int size = end - begin;
    unsigned int result = ~0u;
    while (size > 0) {
        size >>= 1;
        ++result;
    }
    bits = result + 1;
}
