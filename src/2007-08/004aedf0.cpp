// from server: 27% by colin
struct ICreator {
    virtual void v0();
    virtual void v1();
};

struct Creator : ICreator {
    void construct(void* a, void* b);
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __stdcall sub_5B2350(void* p);
extern "C" void __stdcall sub_4AED40(void* self, void* a, void* b);

void Creator::construct(void* a, void* b) {
    void* mem = malloc(0x10c);
    if (mem) {
        sub_5B2350(mem);
    } else {
        mem = 0;
    }
    sub_4AED40(this, mem, a);
}
