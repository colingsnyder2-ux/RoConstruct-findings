// from server: 69% by colin
// roc 2007-08 0069b480  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b480
//
// 0069b480  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0069b486  8b542404             mov edx, dword ptr [esp + 4]
// 0069b48a  56                   push esi
// 0069b48b  894210               mov dword ptr [edx + 0x10], eax
// 0069b48e  e89df6ffff           call 0x69ab30
// 0069b493  8b30                 mov esi, dword ptr [eax]
// 0069b495  52                   push edx
// 0069b496  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0069b499  8bc8                 mov ecx, eax
// 0069b49b  ffd2                 call edx
// 0069b49d  5e                   pop esi
// 0069b49e  c20400               ret 4

struct CXTPPropertyGridView
{
    char pad[0x14c];
    int field_14c;
    void func_0069b480(int* param);
};

struct Inner
{
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11(int* param);
};

extern Inner* func_0069ab30();

void CXTPPropertyGridView::func_0069b480(int* param)
{
    param[4] = field_14c;
    Inner* p = func_0069ab30();
    p->vfunc11(param);
}
