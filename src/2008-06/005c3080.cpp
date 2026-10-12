// from server: 78% by king_originala
extern "C" void* (__cdecl* allocate)(unsigned int);

struct Object {
    char storage[0x43c];

    Object(bool);
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
};

inline void* Object::operator new(unsigned int size)
{
    return allocate(size);
}

struct Deleter {
};

struct Shared {
    Object* object;
    void* control;

    Shared(Object*, Deleter);
};

Shared __cdecl create()
{
    return Shared(new Object(true), Deleter());
}
