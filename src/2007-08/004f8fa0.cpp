// from server: 41% by colin
struct Lighting {
    void* field0;
    void construct(void*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl Lighting_ctor(void*, void*);
extern "C" void __cdecl Lighting_assign(void*, void*);

void Lighting::construct(void* other)
{
    void* mem = operator_new(0x58);
    void* obj;
    if (mem) {
        Lighting_ctor(mem, 0);
        obj = mem;
    } else {
        obj = 0;
    }
    field0 = 0;
    Lighting_assign(this, obj);
}
