// roc 2007-03 00448170  unit: seg_00440000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00448170
//
// 00448170  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00448173  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00448176  8b11                 mov edx, dword ptr [ecx]
// 00448178  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044817e  6a01                 push 1
// 00448180  6a00                 push 0
// 00448182  ffd0                 call eax
// 00448184  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
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
