// from server: 92% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct String {
    char data[28];
    String(const String&);
};

struct S {
    unsigned int first;
    unsigned int second;
    String text;
};

void __cdecl construct(S* destination, const S& source)
{
    new (destination) S(source);
}
