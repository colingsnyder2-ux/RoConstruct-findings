// from server: 28% by colin
struct ICreator {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct Creator : ICreator {
    Creator();
};

extern "C" void* __stdcall malloc(unsigned int size);

void __stdcall sub_59B940(void* p);

void __stdcall sub_45A000(Creator* self, void* a, void* b);

Creator::Creator()
{
    void* mem = malloc(0x1a0);
    void* obj;
    if (mem == 0) {
        sub_59B940(mem);
        obj = mem;
    } else {
        obj = 0;
    }
    sub_45A000(this, obj, 0);
}
