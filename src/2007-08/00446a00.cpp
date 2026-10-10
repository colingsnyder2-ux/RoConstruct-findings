// from server: 30% by colin
struct CRenderSettings_W4AASamples_EnumDesc {
    void* vtable;
    void* items_begin;
    void* items_end;
    void* extra;
    void* construct(int, int, int, int, int, int, int);
};

extern "C" void* __cdecl sub_445420(void*, int, int, int, int, int);
extern "C" void __cdecl sub_62fc62(void*);
extern "C" void* __cdecl sub_446820(int, int);

void* CRenderSettings_W4AASamples_EnumDesc::construct(int a, int b, int c, int d, int e, int f, int g)
{
    void* tmp;
    void* result;
    void* local;
    void* p;

    tmp = sub_445420(&local, a, b, c, d, e);
    result = *(void**)tmp;
    *(void**)tmp = 0;
    local = 0;
    *(void**)((char*)this + 0x18) = 0;
    *(void**)((char*)this + 0x18) = result;
    p = sub_446820(f, g);
    ((void (__thiscall*)(void*, void*))0x4452e0)(this, p);
    sub_62fc62(*(void**)((char*)this + 0x18));
    *(void**)this = (void*)0x78fda0;
    return this;
}
