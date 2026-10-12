// from server: 76% by king_originala
extern "C" void* __cdecl malloc(unsigned int);

struct Empty {};

struct Object {
    char storage[0x178];

    Object(const char*);
    static void* operator new(unsigned int);
    static void operator delete(void*);
};

inline void* Object::operator new(unsigned int size)
{
    return malloc(size);
}

struct Result {
    void* pointer;
    void* count;

    Result(Object*, Empty);
};

Result create(const char* name)
{
    return Result(new Object(name), Empty());
}
