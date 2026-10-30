// roc 2010-06 004064a0  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004064a0
//
// 004064a0  8b442404             mov eax, dword ptr [esp + 4]
// 004064a4  834018ff             add dword ptr [eax + 0x18], -1
// 004064a8  56                   push esi
// 004064a9  8b7018               mov esi, dword ptr [eax + 0x18]
// 004064ac  7510                 jne 0x4064be
// 004064ae  85c0                 test eax, eax
// 004064b0  740c                 je 0x4064be
// 004064b2  8d480c               lea ecx, [eax + 0xc]
// 004064b5  8b01                 mov eax, dword ptr [ecx]
// 004064b7  8b5014               mov edx, dword ptr [eax + 0x14]
// 004064ba  6a01                 push 1
// 004064bc  ffd2                 call edx
// 004064be  8bc6                 mov eax, esi
// 004064c0  5e                   pop esi
// 004064c1  c20400               ret 4
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