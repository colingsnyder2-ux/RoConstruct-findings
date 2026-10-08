// from server: 100% by colin
// roc 2007-08 00719d20  unit: CXTPRibbonControlSystemButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719d20
//
// 00719d20  56                   push esi
// 00719d21  57                   push edi
// 00719d22  8bf9                 mov edi, ecx
// 00719d24  e887ffffff           call 0x719cb0
// 00719d29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00719d2d  8bf0                 mov esi, eax
// 00719d2f  8b06                 mov eax, dword ptr [esi]
// 00719d31  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00719d37  51                   push ecx
// 00719d38  57                   push edi
// 00719d39  8bce                 mov ecx, esi
// 00719d3b  ffd2                 call edx
// 00719d3d  5f                   pop edi
// 00719d3e  8bc6                 mov eax, esi
// 00719d40  5e                   pop esi
// 00719d41  c20400               ret 4

struct CXTPRibbonControlSystemButton {
    void* f(unsigned int a1);
};

extern "C" void* __fastcall sub_00719cb0(void* self);

void* CXTPRibbonControlSystemButton::f(unsigned int a1)
{
    void* p = sub_00719cb0(this);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, unsigned int);
    Fn fn = (Fn)vtbl[0x38];
    fn(p, this, a1);
    return p;
}
