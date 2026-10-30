// roc 2009-06 00406880  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406880
//
// 00406880  8b442404             mov eax, dword ptr [esp + 4]
// 00406884  834018ff             add dword ptr [eax + 0x18], -1
// 00406888  56                   push esi
// 00406889  8b7018               mov esi, dword ptr [eax + 0x18]
// 0040688c  7510                 jne 0x40689e
// 0040688e  85c0                 test eax, eax
// 00406890  740c                 je 0x40689e
// 00406892  8d480c               lea ecx, [eax + 0xc]
// 00406895  8b01                 mov eax, dword ptr [ecx]
// 00406897  8b5014               mov edx, dword ptr [eax + 0x14]
// 0040689a  6a01                 push 1
// 0040689c  ffd2                 call edx
// 0040689e  8bc6                 mov eax, esi
// 004068a0  5e                   pop esi
// 004068a1  c20400               ret 4
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