// roc 2007-03 00448150  unit: seg_00440000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00448150
//
// 00448150  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00448153  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00448156  8b11                 mov edx, dword ptr [ecx]
// 00448158  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044815e  6a01                 push 1
// 00448160  6a00                 push 0
// 00448162  ffd0                 call eax
// 00448164  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX00000c@@QAEXXZ)

namespace ns_ROCX00000c {
struct Inner;

struct InnerVtbl {
    void* pad[34];
    void (__stdcall *fn)(int, int);
};

struct Inner {
    InnerVtbl* vtbl;
};

struct Mid {
    char pad[0x20];
    Inner* inner;
};

struct Outer {
    char pad[0x58];
    Mid* mid;
};

struct CRbxDocTemplate {
    char pad[0x58];
    Mid* mid;
    void f();
};

void CRbxDocTemplate::f()
{
    Mid* m = this->mid;
    Inner* in = m->inner;
    InnerVtbl* vt = in->vtbl;
    vt->fn(0, 1);
}
}
