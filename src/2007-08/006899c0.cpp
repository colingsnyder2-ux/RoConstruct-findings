// from server: 64% by colin
// roc 2007-08 006899c0  unit: CXTPControlTabWorkspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006899c0
//
// 006899c0  8b4994               mov ecx, dword ptr [ecx - 0x6c]
// 006899c3  8b01                 mov eax, dword ptr [ecx]
// 006899c5  8b809c010000         mov eax, dword ptr [eax + 0x19c]
// 006899cb  ffe0                 jmp eax

struct Inner;

struct InnerVtbl
{
    char pad[0x19c];
    void (__stdcall *fn)(Inner *);
};

struct Inner
{
    InnerVtbl *vtbl;
};

struct Outer
{
    char pad[0x6c];
    Inner *inner;
    void method();
};

void Outer::method()
{
    Inner *p = *(Inner **)((char *)this - 0x6c);
    p->vtbl->fn(p);
}
