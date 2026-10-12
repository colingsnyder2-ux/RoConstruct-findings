// from server: 80% by king_originala
struct String;
extern void (__thiscall *destroyString)(String *);
extern void __cdecl operator delete(void *);

struct String {
    char storage[28];
    __forceinline ~String();
};

struct Pair {
    void *data;
    char storage[8];
    String *first;
    String *last;
    String *limit;
};

struct BufferGuard {
    Pair *pair;
    __forceinline ~BufferGuard();
};

__forceinline String::~String()
{
    destroyString(this);
}

__forceinline BufferGuard::~BufferGuard()
{
    operator delete(pair->data);
}

void __cdecl destroyRange(Pair *first, Pair *last)
{
    for (; first != last; ++first) {
        BufferGuard guard = { first };
        if (first->first) {
            String *end = first->last;
            for (String *p = first->first; p != end; ++p)
                p->~String();
            operator delete(first->first);
        }
        first->first = 0;
        first->last = 0;
        first->limit = 0;
    }
}
