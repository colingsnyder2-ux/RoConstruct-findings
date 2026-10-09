// roc 2010-06 0044d580  unit: CRbxPlayDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044d580
//
// 0044d580  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044d583  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0044d586  8b11                 mov edx, dword ptr [ecx]
// 0044d588  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044d58e  6a01                 push 1
// 0044d590  6a00                 push 0
// 0044d592  ffd0                 call eax
// 0044d594  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX000012@@QAEXXZ)

namespace ns_ROCX000012 {
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
