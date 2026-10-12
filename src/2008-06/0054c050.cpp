// from server: 79% by king_originala
struct Element {
    unsigned char data[12];
};

struct Allocator {
    unsigned int reserved;
    Allocator();
    Allocator(const Allocator&);
};

struct Base {
    Base(Allocator);
    ~Base();
    Element* allocate(unsigned int count);
};

struct S : Base {
    S();
};

#pragma optimize("", off)
S::S() : Base(Allocator())
{
    allocate(0);
}
