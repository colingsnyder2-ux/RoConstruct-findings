// from server: 78% by king_originala
extern "C" void* (__cdecl *allocate)(unsigned int);

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Deleter {};

struct Object {
    unsigned char storage[0x404];
    Object(bool);
};

struct S {
    Object* object;
    void* control;
    S(Object*, Deleter);
};

S __cdecl create()
{
    return S(new Object(true), Deleter());
}
