// from server: 36% by colin
extern "C" void* __cdecl malloc(unsigned int);

struct Creator {
    void construct();
};

struct FactoryProduct {
    void* creator;
    void init(void* a, int b);
};

void FactoryProduct::init(void* a, int b) {
    void* mem = malloc(0x2b4);
    if (mem) {
        Creator* c = (Creator*)mem;
        c->construct();
        creator = c;
    } else {
        creator = 0;
    }
    ((FactoryProduct*)a)->init(creator, b);
}
