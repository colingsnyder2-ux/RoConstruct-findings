// from server: 100% by colin
// roc 2008-06 00407d90  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407d90
//
// 00407d90  8b442404             mov eax, dword ptr [esp + 4]
// 00407d94  834018ff             add dword ptr [eax + 0x18], -1
// 00407d98  56                   push esi
// 00407d99  8b7018               mov esi, dword ptr [eax + 0x18]
// 00407d9c  7510                 jne 0x407dae
// 00407d9e  85c0                 test eax, eax
// 00407da0  740c                 je 0x407dae
// 00407da2  8d480c               lea ecx, [eax + 0xc]
// 00407da5  8b01                 mov eax, dword ptr [ecx]
// 00407da7  8b5014               mov edx, dword ptr [eax + 0x14]
// 00407daa  6a01                 push 1
// 00407dac  ffd2                 call edx
// 00407dae  8bc6                 mov eax, esi
// 00407db0  5e                   pop esi
// 00407db1  c20400               ret 4

struct Base {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void destroy(unsigned int);
};

extern "C" unsigned int __stdcall release(char *object)
{
    unsigned int *refs = reinterpret_cast<unsigned int*>(object + 0x18);
    unsigned int result = --*refs;
    if (result == 0 && object != 0)
        reinterpret_cast<Base*>(object + 0xc)->destroy(1);
    return result;
}
