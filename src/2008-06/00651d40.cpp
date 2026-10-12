// from server: 65% by king_originala
struct String;
extern void (__thiscall *destroyString)(String *);
extern void __cdecl operator delete(void *);

struct String {
    char storage[28];
    __forceinline ~String();
};

struct Buffer {
    void *data;
    char storage[8];
    __forceinline ~Buffer();
};

struct Strings {
    String *first;
    String *last;
    String *limit;
    __forceinline ~Strings();
};

struct Pair {
    Buffer first;
    Strings second;
    __forceinline ~Pair();
};

__forceinline String::~String()
{
    destroyString(this);
}

__forceinline Buffer::~Buffer()
{
    operator delete(data);
}

__forceinline Strings::~Strings()
{
    if (first) {
        String *end = last;
        for (String *p = first; p != end; ++p)
            p->~String();
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline Pair::~Pair()
{
}

void __cdecl destroyRange(Pair *first, Pair *last)
{
    for (; first != last; ++first)
        first->~Pair();
}
