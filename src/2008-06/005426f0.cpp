// from server: 21% by atomic.potato
struct WeakReferenceCountedPointer
{
    void f(void*, void*);
    void g(void*, void*);
};

void WeakReferenceCountedPointer::f(void* a, void* b)
{
    this->g(a, b);
}
