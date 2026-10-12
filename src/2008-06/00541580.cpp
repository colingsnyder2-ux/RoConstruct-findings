// from server: 75% by king_originala
#pragma optimize("", off)

struct T;

struct Allocator {
    void deallocate(T** p, unsigned int count);
};

struct Base {
    ~Base();
};

struct S : Base {
    T** pointer;
    Allocator allocator;
    ~S();
};

S::~S()
{
    allocator.deallocate(pointer, 1);
}
