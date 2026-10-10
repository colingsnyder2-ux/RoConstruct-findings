// from server: 31% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Creator {
    void construct(void* arg);
};

struct FactoryProduct {
    void init(void* arg0, void* arg1, void* arg2);
};

void __fastcall sub_5EAEF0(void* self, void* unused, unsigned int size);

void FactoryProduct::init(void* arg0, void* arg1, void* arg2) {
    void* mem = malloc(0xf4);
    void* obj = 0;
    if (mem == 0) {
        sub_5EAEF0(mem, 0, 0xf4);
        obj = mem;
    }
    Creator* creator = (Creator*)arg0;
    creator->construct(obj);
}
