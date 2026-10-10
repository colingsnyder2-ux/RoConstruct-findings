// from server: 83% by colin
struct CXTColorBase
{
    void method_0070cad0(int a1, int a2, int a3);
};

extern "C" void __stdcall sub_0063023e();
extern "C" void* __stdcall sub_006301c0(void*);
extern "C" void __stdcall sub_00738ce8(void*, int);
extern "C" void* __stdcall GetParent(void*);

void CXTColorBase::method_0070cad0(int a1, int a2, int a3)
{
    sub_0063023e();
    void** vtbl = *(void***)this;
    void (__thiscall* fn)(void*, int, int, int) = (void (__thiscall*)(void*, int, int, int))vtbl[0x14c / 4];
    fn(this, a1, a2, 1);
    void* p = *(void**)((char*)this + 0x20);
    void* parent = GetParent(p);
    void* r1 = sub_006301c0(parent);
    void* p2 = *(void**)((char*)r1 + 0x20);
    void* parent2 = GetParent(p2);
    void* r2 = sub_006301c0(parent2);
    sub_00738ce8(r2, 1);
}
