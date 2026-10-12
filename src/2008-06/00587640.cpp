// from server: 100% by king_originala
typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

inline void * __cdecl operator new(size_t, void *p)
{
    return p;
}

inline void __cdecl operator delete(void *, void *)
{
}

struct Object {
    virtual void first() = 0;
    virtual void second() = 0;
    virtual Object *clone() = 0;
};

struct Source {
    int first;
    int second;
    Object *object;
};

struct S {
    int first;
    unsigned char remaining[24];

    S(int, int, int, int, int);
};

S * __stdcall create(int a, int b, int c, int d, int e)
{
    S *p = static_cast<S *>(operator new(sizeof(S)));
    try {
        new (p) S(a, b, c, d, e);
        return p;
    }
    catch (...) {
        operator delete(p);
        throw;
    }
}
