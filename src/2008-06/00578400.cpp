// from server: 77% by king_originala
extern "C" void* __cdecl malloc(unsigned int);

struct Object {
    char storage[0x270];

    Object(bool);
    static void* operator new(unsigned int size) {
        return malloc(size);
    }
    static void operator delete(void*);
};

struct Deleter {};

struct Shared {
    Object* pointer;
    void* control;

    Shared(Object*, Deleter);
};

Shared __cdecl create()
{
    return Shared(new Object(true), Deleter());
}
