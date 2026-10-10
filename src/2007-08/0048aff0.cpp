// from server: 33% by colin
struct Creator {
    void* field0;
    void construct(void* p, void* q);
    void init(void* a, void* b);
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __stdcall sub_59EF20(void* p);

void Creator::init(void* a, void* b) {
    void* mem = malloc(0x120);
    void* obj;
    if (mem) {
        sub_59EF20(mem);
        obj = mem;
    } else {
        obj = 0;
    }
    this->construct(obj, a);
}

void Creator::construct(void* p, void* q) {
    field0 = q;
    init(p, q);
}
