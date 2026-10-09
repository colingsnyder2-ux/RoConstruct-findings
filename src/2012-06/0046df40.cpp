// roc 2012-06 0046df40  unit: CBrowserDocManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046df40
//
// 0046df40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046df43  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0046df46  8b11                 mov edx, dword ptr [ecx]
// 0046df48  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0046df4e  6a01                 push 1
// 0046df50  6a00                 push 0
// 0046df52  ffd0                 call eax
// 0046df54  c3                   ret 
// copied from an identical function in another client (function ?f@CRbxDocTemplate@ns_ROCX00000a@@QAEXXZ)

namespace ns_ROCX00000a {
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
