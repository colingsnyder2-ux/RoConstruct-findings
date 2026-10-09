// roc 2009-06 00445d60  unit: CBrowserDocManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00445d60
//
// 00445d60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00445d63  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00445d66  8b11                 mov edx, dword ptr [ecx]
// 00445d68  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00445d6e  6a01                 push 1
// 00445d70  6a00                 push 0
// 00445d72  ffd0                 call eax
// 00445d74  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000009@@QAEXXZ)

namespace ns_ROCX000009 {
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
