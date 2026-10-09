// roc 2009-06 00445d40  unit: CBrowserDocManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00445d40
//
// 00445d40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00445d43  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00445d46  8b11                 mov edx, dword ptr [ecx]
// 00445d48  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00445d4e  6a01                 push 1
// 00445d50  6a00                 push 0
// 00445d52  ffd0                 call eax
// 00445d54  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
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
