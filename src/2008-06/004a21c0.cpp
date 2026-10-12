// from server: 80% by king_originala
extern "C" void *(__cdecl *allocate)(unsigned int);

inline void *__cdecl operator new(unsigned int, void *p)
{
    return p;
}

void __cdecl operator delete(void *, void *);

struct Object {
    char storage[0x2d78];
    Object(int, int, int);
};

struct Deleter {};

struct Result {
    void *object;
    void *control;
    Result(Object *, Deleter);
};

Result __cdecl f(int a, int b, int c)
{
    return Result(new (allocate(sizeof(Object))) Object(a, b, c), Deleter());
}
