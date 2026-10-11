// from server: 20% by atomic.potato




extern "C" void* __cdecl func_006a0920(unsigned int size);
extern "C" void __cdecl func_0047d410();

struct Inner {
    void ctor(void* p);
    void assign(void* p);
};

struct Outer {
    void* field0;
    Inner inner;
    void construct(void* a, void* b);
};

void Inner::ctor(void* p) {}
void Inner::assign(void* p) {}

void Outer::construct(void* a, void* b)
{
    void* mem = func_006a0920(0x28);
    void* obj = 0;
    if (mem != 0)
        obj = ((void* (__thiscall*)(void*, void*, void*))0x5f3020)(mem, a, b);
    this->field0 = obj;
    this->inner.ctor(obj);
    this->inner.assign(obj);
    func_0047d410();
}
