// from server: 22% by colin
struct EnumDescriptor {
    void* vtable;
    void* items_begin;
    void* items_end;
};

struct EnumDesc {
    void* vtable;
    void* items_begin;
    void* items_end;
};

extern "C" void* __stdcall sub_445360(void*, void*, void*, void*, void*, void*, void*);
extern "C" void* __stdcall sub_446820(void*, void*);
extern "C" void __stdcall sub_445260(void*, void*);
extern "C" void __cdecl sub_62FC62(void*);

struct CRenderSettings_W4AASamples_EnumDesc : EnumDescriptor {
    void construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g);
};

void CRenderSettings_W4AASamples_EnumDesc::construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g)
{
    void* local;
    void* tmp;
    void* p;

    p = sub_445360(a, b, c, d, e, f, &local);
    tmp = *(void**)p;
    *(void**)p = 0;
    local = 0;
    *(void**)&local = tmp;

    void* r = sub_446820(d, e);
    sub_445260(this, r);
    sub_62FC62(local);
    this->vtable = (void*)0x78fd78;
}
