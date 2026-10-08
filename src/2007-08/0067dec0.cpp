// from server: 86% by colin
// roc 2007-08 0067dec0  unit: CXTPControlToolbars  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067dec0
//
// 0067dec0  56                   push esi
// 0067dec1  57                   push edi
// 0067dec2  8bf9                 mov edi, ecx
// 0067dec4  e887ffffff           call 0x67de50
// 0067dec9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067decd  8bf0                 mov esi, eax
// 0067decf  8b06                 mov eax, dword ptr [esi]
// 0067ded1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067ded7  51                   push ecx
// 0067ded8  57                   push edi
// 0067ded9  8bce                 mov ecx, esi
// 0067dedb  ffd2                 call edx
// 0067dedd  5f                   pop edi
// 0067dede  8bc6                 mov eax, esi
// 0067dee0  5e                   pop esi
// 0067dee1  c20400               ret 4

struct CXTPControlToolbars {
    CXTPControlToolbars* func_0067de50();
    CXTPControlToolbars* func_0067dec0(int);
};

CXTPControlToolbars* CXTPControlToolbars::func_0067dec0(int arg)
{
    CXTPControlToolbars* p = func_0067de50();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(CXTPControlToolbars*, int) = (void (__thiscall *)(CXTPControlToolbars*, int))vtbl[0x38];
    fn(p, arg);
    return p;
}
