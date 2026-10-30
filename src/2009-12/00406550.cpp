// roc 2009-12 00406550  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406550
//
// 00406550  8b442404             mov eax, dword ptr [esp + 4]
// 00406554  834018ff             add dword ptr [eax + 0x18], -1
// 00406558  56                   push esi
// 00406559  8b7018               mov esi, dword ptr [eax + 0x18]
// 0040655c  7510                 jne 0x40656e
// 0040655e  85c0                 test eax, eax
// 00406560  740c                 je 0x40656e
// 00406562  8d480c               lea ecx, [eax + 0xc]
// 00406565  8b01                 mov eax, dword ptr [ecx]
// 00406567  8b5014               mov edx, dword ptr [eax + 0x14]
// 0040656a  6a01                 push 1
// 0040656c  ffd2                 call edx
// 0040656e  8bc6                 mov eax, esi
// 00406570  5e                   pop esi
// 00406571  c20400               ret 4
// copied from an identical function in another client (function _release@4)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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