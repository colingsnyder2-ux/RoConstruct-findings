// from server: 76% by king_originala
extern "C" void *(__cdecl *malloc)(unsigned int);

struct Product
{
    unsigned char storage[0x154];

    Product(int);
    static void *__cdecl operator new(unsigned int size) throw()
    {
        return malloc(size);
    }
    static void __cdecl operator delete(void *);
};

struct Result
{
    void *object;
    void *control;

    Result(Product *, int);
    ~Result();
};

Result __cdecl createProduct(int argument)
{
    volatile int flags = 0;
    reinterpret_cast<volatile char *>(&flags)[0] = 0;
    return Result(new Product(argument), flags);
}
