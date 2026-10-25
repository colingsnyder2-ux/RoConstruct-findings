// from server: 100% by tester
// roc 2008-06 004226a0  unit: CSelectionTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004226a0
//
// 004226a0  8b442404             mov eax, dword ptr [esp + 4]
// 004226a4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 004226a7  8b11                 mov edx, dword ptr [ecx]
// 004226a9  8b400c               mov eax, dword ptr [eax + 0xc]
// 004226ac  8b5210               mov edx, dword ptr [edx + 0x10]
// 004226af  50                   push eax
// 004226b0  ffd2                 call edx
// 004226b2  8b442408             mov eax, dword ptr [esp + 8]
// 004226b6  c70000000000         mov dword ptr [eax], 0
// 004226bc  c20800               ret 8

struct CSelectionTreeCtrl
{
    char pad[0x5c];
    void* field_5c;
};

struct Inner
{
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4(void*);
};

void __stdcall func_0041f7e0(CSelectionTreeCtrl* self, int* arg2)
{
    Inner* p = (Inner*)self->field_5c;
    p->vfunc4(*(void**)((char*)self + 0xc));
    *arg2 = 0;
}
