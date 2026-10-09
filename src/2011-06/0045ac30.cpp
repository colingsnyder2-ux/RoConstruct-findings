// roc 2011-06 0045ac30  unit: CBrowserDocManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045ac30
//
// 0045ac30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045ac33  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0045ac36  8b11                 mov edx, dword ptr [ecx]
// 0045ac38  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0045ac3e  6a01                 push 1
// 0045ac40  6a00                 push 0
// 0045ac42  ffd0                 call eax
// 0045ac44  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000015@@QAEXXZ)

namespace ns_ROCX000015 {
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
