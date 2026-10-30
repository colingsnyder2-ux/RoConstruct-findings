// roc 2011-06 00407150  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407150
//
// 00407150  8b442404             mov eax, dword ptr [esp + 4]
// 00407154  834018ff             add dword ptr [eax + 0x18], -1
// 00407158  56                   push esi
// 00407159  8b7018               mov esi, dword ptr [eax + 0x18]
// 0040715c  7510                 jne 0x40716e
// 0040715e  85c0                 test eax, eax
// 00407160  740c                 je 0x40716e
// 00407162  8d480c               lea ecx, [eax + 0xc]
// 00407165  8b01                 mov eax, dword ptr [ecx]
// 00407167  8b5014               mov edx, dword ptr [eax + 0x14]
// 0040716a  6a01                 push 1
// 0040716c  ffd2                 call edx
// 0040716e  8bc6                 mov eax, esi
// 00407170  5e                   pop esi
// 00407171  c20400               ret 4
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