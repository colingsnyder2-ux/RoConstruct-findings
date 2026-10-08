// from server: 100% by colin
// roc 2007-08 0066aca0  unit: CRobloxControlColorSelector  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066aca0
//
// 0066aca0  8b01                 mov eax, dword ptr [ecx]
// 0066aca2  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0066aca8  ffd2                 call edx
// 0066acaa  85c0                 test eax, eax
// 0066acac  740c                 je 0x66acba
// 0066acae  8b10                 mov edx, dword ptr [eax]
// 0066acb0  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 0066acb6  8bc8                 mov ecx, eax
// 0066acb8  ffe2                 jmp edx
// 0066acba  c20c00               ret 0xc

struct Inner;

struct Vtbl1 {
    char pad[0x8c];
    Inner* (__thiscall *getInner)(void*);
};

struct Vtbl2 {
    char pad[0x1d4];
    void (__thiscall *doThing)(Inner*, int, int, int);
};

struct Inner {
    Vtbl2* vtbl;
};

struct Outer {
    Vtbl1* vtbl;
    void method(int a, int b, int c);
};

void Outer::method(int a, int b, int c)
{
    Inner* p = this->vtbl->getInner(this);
    if (p)
    {
        p->vtbl->doThing(p, a, b, c);
    }
}
