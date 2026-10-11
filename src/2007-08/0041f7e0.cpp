// from server: 100% by colin
// roc 2007-08 0041f7e0  unit: CSelectionTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f7e0
//
// 0041f7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0041f7e4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0041f7e7  8b11                 mov edx, dword ptr [ecx]
// 0041f7e9  8b400c               mov eax, dword ptr [eax + 0xc]
// 0041f7ec  8b5210               mov edx, dword ptr [edx + 0x10]
// 0041f7ef  50                   push eax
// 0041f7f0  ffd2                 call edx
// 0041f7f2  8b442408             mov eax, dword ptr [esp + 8]
// 0041f7f6  c70000000000         mov dword ptr [eax], 0
// 0041f7fc  c20800               ret 8

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
