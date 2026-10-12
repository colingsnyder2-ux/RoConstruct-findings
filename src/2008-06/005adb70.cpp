// from server: 76% by king_originala
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Empty
{
};

struct Object
{
    char storage[0x158];
    Object(void *);
};

struct Result
{
    void *object;
    void *control;
    Result(Object *, Empty);
};

Result f(void *argument)
{
    return Result(new Object(argument), Empty());
}
