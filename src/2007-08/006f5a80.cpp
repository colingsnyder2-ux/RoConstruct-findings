// from server: 81% by colin
// roc 2007-08 006f5a80  unit: CXTPControlCustom  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5a80
//
// 006f5a80  56                   push esi
// 006f5a81  57                   push edi
// 006f5a82  8bf9                 mov edi, ecx
// 006f5a84  e887ffffff           call 0x6f5a10
// 006f5a89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f5a8d  8bf0                 mov esi, eax
// 006f5a8f  8b06                 mov eax, dword ptr [esi]
// 006f5a91  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006f5a97  51                   push ecx
// 006f5a98  57                   push edi
// 006f5a99  8bce                 mov ecx, esi
// 006f5a9b  ffd2                 call edx
// 006f5a9d  5f                   pop edi
// 006f5a9e  8bc6                 mov eax, esi
// 006f5aa0  5e                   pop esi
// 006f5aa1  c20400               ret 4

struct CXTPControlCustom;

struct CXTPControlCustomVtbl {
    void* padding[56];
    void (__stdcall *fnE0)(CXTPControlCustom*, int);
};

struct CXTPControlCustom {
    CXTPControlCustomVtbl* vtable;
};

struct S_func_006f5a80 {
    CXTPControlCustom* f(int a1);
};

CXTPControlCustom* __stdcall sub_006f5a10();

CXTPControlCustom* S_func_006f5a80::f(int a1)
{
    CXTPControlCustom* p = sub_006f5a10();
    p->vtable->fnE0(p, a1);
    return p;
}
