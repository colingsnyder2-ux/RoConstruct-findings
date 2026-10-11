// from server: 35% by atomic.potato
extern "C" void* __stdcall malloc(unsigned int size);

struct Inner {
    void ctor();
};

struct Creator {
    void __cdecl make(void* a, int b);
    void make2(void* a, int b, Inner* p);
};

void Creator::make(void* a, int b)
{
    void* mem = malloc(0x148);
    Inner* p = 0;
    if (mem) {
        p = (Inner*)mem;
        p->ctor();
    }
    make2(a, b, p);
}
