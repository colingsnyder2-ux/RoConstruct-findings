// from server: 85% by colin
// roc 2007-08 00651ee0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651ee0
//
// 00651ee0  8b01                 mov eax, dword ptr [ecx]
// 00651ee2  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00651ee8  ffd2                 call edx
// 00651eea  8b10                 mov edx, dword ptr [eax]
// 00651eec  8bc8                 mov ecx, eax
// 00651eee  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 00651ef4  ffe0                 jmp eax

struct Inner;

struct InnerVtbl {
    char pad[0x16c];
    void* (__stdcall *fn16c)();
};

struct Inner {
    InnerVtbl* vtbl;
};

struct OuterVtbl {
    char pad[0x18c];
    Inner* (__stdcall *fn18c)();
};

struct Outer {
    OuterVtbl* vtbl;
    void tail();
};

void Outer::tail()
{
    Inner* p = vtbl->fn18c();
    p->vtbl->fn16c();
}
