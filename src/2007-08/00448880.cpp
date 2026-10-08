// from server: 100% by colin
// roc 2007-08 00448880  unit: CRbxDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00448880
//
// 00448880  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00448883  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00448886  8b11                 mov edx, dword ptr [ecx]
// 00448888  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044888e  6a01                 push 1
// 00448890  6a00                 push 0
// 00448892  ffd0                 call eax
// 00448894  c3                   ret 

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
