// from server: 79% by king_originala
extern "C" void* (__cdecl *allocate)(unsigned int);

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product
{
    char storage[0x154];
    Product(void*);
};

struct Deleter
{
};

struct Result
{
    void* object;
    void* control;
    Result(Product*, Deleter);
};

Result __cdecl create(void* argument)
{
    return Result(new Product(argument), Deleter());
}
