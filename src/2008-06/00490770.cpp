// from server: 77% by king_originala
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct Deleter {};

struct T {
    char storage[0x22c];

    T(bool);
    static void* operator new(unsigned int);
    static void operator delete(void*);
};

inline void* T::operator new(unsigned int size)
{
    return malloc(size);
}

inline void T::operator delete(void* p)
{
    free(p);
}

struct S {
    S(T*, Deleter);
};

S __cdecl create()
{
    return S(new T(true), Deleter());
}
