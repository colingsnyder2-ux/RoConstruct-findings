// roc 2009-06 00731ed0  unit: CXTPCommandBar  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731ed0
//
// 00731ed0  8b442408             mov eax, dword ptr [esp + 8]
// 00731ed4  56                   push esi
// 00731ed5  8b742408             mov esi, dword ptr [esp + 8]
// 00731ed9  6a02                 push 2
// 00731edb  50                   push eax
// 00731edc  56                   push esi
// 00731edd  ff15c0e18900         call dword ptr [0x89e1c0]
// 00731ee3  85c0                 test eax, eax
// 00731ee5  7504                 jne 0x731eeb
// 00731ee7  33c0                 xor eax, eax
// 00731ee9  5e                   pop esi
// 00731eea  c3                   ret 
// 00731eeb  50                   push eax
// 00731eec  56                   push esi
// 00731eed  ff15bce18900         call dword ptr [0x89e1bc]
// 00731ef3  8bf0                 mov esi, eax
// 00731ef5  85f6                 test esi, esi
// 00731ef7  74ee                 je 0x731ee7
// 00731ef9  56                   push esi
// 00731efa  ff1550e28900         call dword ptr [0x89e250]
// 00731f00  85c0                 test eax, eax
// 00731f02  74e3                 je 0x731ee7
// 00731f04  33c9                 xor ecx, ecx
// 00731f06  6683780e20           cmp word ptr [eax + 0xe], 0x20
// 00731f0b  57                   push edi
// 00731f0c  0f94c1               sete cl
// 00731f0f  56                   push esi
// 00731f10  8bf9                 mov edi, ecx
// 00731f12  ff154ce28900         call dword ptr [0x89e24c]
// 00731f18  8bc7                 mov eax, edi
// 00731f1a  5f                   pop edi
// 00731f1b  5e                   pop esi
// 00731f1c  c3                   ret 
// copied from an identical function in another client (function ?sub_7bd1f0@ns_ROCX000000@@YAHPAXPBD@Z)

namespace ns_ROCX000000 {
typedef void* (__stdcall *FindResourceAFn)(void*, const char*, const char*);
typedef void* (__stdcall *LoadResourceFn)(void*, void*);
typedef void* (__stdcall *LockResourceFn)(void*);
typedef int   (__stdcall *FreeResourceFn)(void*);

extern FindResourceAFn FindResourceA;
extern LoadResourceFn  LoadResource;
extern LockResourceFn  LockResource;
extern FreeResourceFn  FreeResource;

int sub_7bd1f0(void* hModule, const char* lpName)
{
    void* hResInfo = FindResourceA(hModule, lpName, (const char*)2);
    if (hResInfo == 0)
        return 0;

    void* hResData = LoadResource(hModule, hResInfo);
    if (hResData == 0)
        return 0;

    unsigned char* p = (unsigned char*)LockResource(hResData);
    if (p == 0)
        return 0;

    int is32bpp = *(unsigned short*)(p + 0xe) == 0x20;

    FreeResource(hResData);
    return is32bpp;
}
}
