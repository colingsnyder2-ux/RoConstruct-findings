// from server: 91% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct S {
    unsigned char storage[24];
    S(const S&);
    ~S();
};

S* __cdecl fill_n(S* first, unsigned int count, const S& value)
{
    S* begin = first;
    try {
        for (; count > 0; --count, ++first)
            new (first) S(value);
    }
    catch (...) {
        for (; begin != first; ++begin)
            begin->~S();
        throw;
    }
    return first;
}
