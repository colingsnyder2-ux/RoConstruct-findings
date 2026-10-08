// from server: 93% by colin
// roc 2007-08 0055e580  unit: RBX::CameraTiltDownCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e580
//
// 0055e580  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055e583  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055e589  8b5004               mov edx, dword ptr [eax + 4]
// 0055e58c  81c128020000         add ecx, 0x228
// 0055e592  ffd2                 call edx
// 0055e594  6a01                 push 1
// 0055e596  8bc8                 mov ecx, eax
// 0055e598  e8d3af0300           call 0x599570
// 0055e59d  c3                   ret 

struct Inner {
    virtual void vfunc0();
    virtual void vfunc1();
};

struct Mid {
    char pad[0x228];
    Inner inner;
};

struct Outer {
    char pad[0xc];
    Mid* mid;

    void doIt();
};

extern void __stdcall func_00599570(void*, int);

void Outer::doIt()
{
    Inner* p = &mid->inner;
    p->vfunc1();
    func_00599570((void*)0, 1);
}
