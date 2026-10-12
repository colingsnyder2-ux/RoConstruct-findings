// from server: 77% by king_originala
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct Deleter {};

struct Texture {
    unsigned char storage[0x404];

    Texture(int);

    static void* operator new(unsigned int size);
    static void operator delete(void* p);
};

inline void* Texture::operator new(unsigned int size)
{
    return malloc(size);
}

inline void Texture::operator delete(void* p)
{
    free(p);
}

struct Product {
    void* object;
    void* control;

    Product(Texture*, Deleter);
};

Product __cdecl create()
{
    return Product(new Texture(1), Deleter());
}
