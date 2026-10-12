// from server: 83% by king_originala
extern "C" void * (__cdecl *allocate)(unsigned int);

struct AllocationTag {
    char value;
    AllocationTag() : value(0) {}
};

inline void *operator new(unsigned int size, const AllocationTag &) throw()
{
    return allocate(size);
}

void operator delete(void *, const AllocationTag &) throw();

struct Product {
    char storage[0x154];
    Product(int);
};

struct ConstructorTag {
    int value;
    ConstructorTag() : value(0) {}
};

struct Result {
    void *object;
    void *control;
    Result(Product *, ConstructorTag);
};

Result __cdecl create(int argument)
{
    return Result(new ((AllocationTag())) Product(argument), ConstructorTag());
}
