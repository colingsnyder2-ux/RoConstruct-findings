// roc 2008-06 0044a2e0  unit: CRbxPlayDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a2e0
//
// 0044a2e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044a2e3  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0044a2e6  8b11                 mov edx, dword ptr [ecx]
// 0044a2e8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044a2ee  6a01                 push 1
// 0044a2f0  6a00                 push 0
// 0044a2f2  ffd0                 call eax
// 0044a2f4  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000022@@QAEXXZ)

namespace ns_ROCX000022 {
struct Inner;

struct InnerVtbl {
    char pad[0x88];
    void (__stdcall *fn)(int, int);
};

struct Inner {
    InnerVtbl* vtbl;
};

struct InnerHolder {
    char pad[0x2c];
    Inner* inner;
};

struct CRbxDocTemplate {
    char pad[0x58];
    InnerHolder* holder;
    void f();
};

void CRbxDocTemplate::f()
{
    InnerHolder* h = this->holder;
    Inner* in = h->inner;
    InnerVtbl* vt = in->vtbl;
    vt->fn(0, 1);
}
}
