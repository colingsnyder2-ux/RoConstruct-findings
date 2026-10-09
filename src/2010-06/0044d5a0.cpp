// roc 2010-06 0044d5a0  unit: CRbxPlayDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044d5a0
//
// 0044d5a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044d5a3  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0044d5a6  8b11                 mov edx, dword ptr [ecx]
// 0044d5a8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044d5ae  6a01                 push 1
// 0044d5b0  6a00                 push 0
// 0044d5b2  ffd0                 call eax
// 0044d5b4  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000013@@QAEXXZ)

namespace ns_ROCX000013 {
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
