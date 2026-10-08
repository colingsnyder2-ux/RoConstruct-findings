// from server: 100% by colin
// roc 2007-08 0057abf0  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057abf0
//
// 0057abf0  8b09                 mov ecx, dword ptr [ecx]
// 0057abf2  85c9                 test ecx, ecx
// 0057abf4  7409                 je 0x57abff
// 0057abf6  8b01                 mov eax, dword ptr [ecx]
// 0057abf8  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0057abfb  6a01                 push 1
// 0057abfd  ffd2                 call edx
// 0057abff  c3                   ret 

struct Inner {
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
    virtual void vfunc11();
    virtual void vfunc12(int);
};

struct Outer {
    Inner* ptr;
    void func();
};

void Outer::func() {
    Inner* p = ptr;
    if (p) {
        p->vfunc12(1);
    }
}
