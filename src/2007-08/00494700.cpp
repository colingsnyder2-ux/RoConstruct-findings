// from server: 22% by colin
struct ICreator {
    virtual void v0();
    virtual void v1();
};

struct VClient {
    void sub_494650(void* a, void* b);
};

struct FactoryProductCreator : ICreator {
    void construct();
};

extern "C" void* __stdcall malloc(unsigned int size);

void FactoryProductCreator::construct()
{
    void* mem = malloc(0x128);
    if (mem == 0) {
        void* obj = 0;
        ((void (__thiscall*)(void*))0x49f6a0)(mem);
        obj = mem;
        ((void (__thiscall*)(VClient*, void*, void*))0x494650)((VClient*)this, obj, 0);
    } else {
        ((void (__thiscall*)(VClient*, void*, void*))0x494650)((VClient*)this, 0, 0);
    }
}
