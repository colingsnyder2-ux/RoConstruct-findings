// from server: 69% by colin
// roc 2007-08 007176d0  unit: CXTPRibbonControlTab  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007176d0
//
// 007176d0  8b4984               mov ecx, dword ptr [ecx - 0x7c]
// 007176d3  8b01                 mov eax, dword ptr [ecx]
// 007176d5  8b809c010000         mov eax, dword ptr [eax + 0x19c]
// 007176db  ffe0                 jmp eax

struct Inner;

struct Vtbl {
    char pad[0x19c];
    void (*fn)();
};

struct Inner {
    Vtbl* vtbl;
};

struct Outer {
    char pad[0x7c];
    Inner* inner;
    void method();
};

void Outer::method()
{
    Inner* p = *(Inner**)((char*)this - 0x7c);
    p->vtbl->fn();
}
