// roc 2009-12 0044bf50  unit: CRbxPlayDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044bf50
//
// 0044bf50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044bf53  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0044bf56  8b11                 mov edx, dword ptr [ecx]
// 0044bf58  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044bf5e  6a01                 push 1
// 0044bf60  6a00                 push 0
// 0044bf62  ffd0                 call eax
// 0044bf64  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000016@@QAEXXZ)

namespace ns_ROCX000016 {
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
