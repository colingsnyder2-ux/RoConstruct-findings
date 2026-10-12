// from server: 80% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t, void*) throw();
void __cdecl operator delete(void*, void*) throw();

struct Allocator {
    void* acquire(int);
};

struct Node {
    unsigned char data[24];
    Node(int, int, int, int, bool);
};

struct S {
    unsigned char prefix[12];
    Allocator allocator;
    Node* create(int, int, int, int, bool);
};

#pragma strict_gs_check(push, on)
#pragma optimize("", off)
Node* S::create(int a, int b, int c, int d, bool e)
{
    void* storage = allocator.acquire(1);
    try {
        return new (storage) Node(a, b, c, d, e);
    } catch (...) {
        throw;
    }
}
#pragma optimize("", on)
#pragma strict_gs_check(pop)
