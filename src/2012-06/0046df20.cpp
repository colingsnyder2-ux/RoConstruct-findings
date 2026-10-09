// roc 2012-06 0046df20  unit: CBrowserDocManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046df20
//
// 0046df20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046df23  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0046df26  8b11                 mov edx, dword ptr [ecx]
// 0046df28  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0046df2e  6a01                 push 1
// 0046df30  6a00                 push 0
// 0046df32  ffd0                 call eax
// 0046df34  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000009@@QAEXXZ)

namespace ns_ROCX000009 {
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
