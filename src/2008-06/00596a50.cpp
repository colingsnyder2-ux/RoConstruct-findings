// from server: 93% by king_originala
inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

inline void __cdecl operator delete(void*, void*)
{
}

struct __declspec(align(8)) Inner {
    char data[64];
    Inner(const Inner&);
};

struct Value {
    Inner inner;
    int last;
};

struct S {
    int first;
    Value value;
};

void __cdecl construct(S* destination, const S& source)
{
    new (destination) S(source);
}
