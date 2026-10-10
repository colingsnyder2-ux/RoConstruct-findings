// from server: 30% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Creator {
    void construct(void* p);
    void init(void* p);
};

struct FactoryProduct {
    void* creator;
    void FactoryProduct_ctor();
};

void FactoryProduct::FactoryProduct_ctor()
{
    void* mem = malloc(0xf4);
    if (mem) {
        ((Creator*)mem)->construct(mem);
    } else {
        mem = 0;
    }
    this->creator = mem;
    ((Creator*)this)->init(this->creator);
}
