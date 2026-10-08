// from server: 100% by colin
// roc 2007-08 004488a0  unit: CRbxDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004488a0
//
// 004488a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004488a3  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 004488a6  8b11                 mov edx, dword ptr [ecx]
// 004488a8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 004488ae  6a01                 push 1
// 004488b0  6a00                 push 0
// 004488b2  ffd0                 call eax
// 004488b4  c3                   ret 

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
