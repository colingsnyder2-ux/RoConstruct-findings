// roc 2012-06 00997930  unit: CXTPCommandBar  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997930
//
// 00997930  8b442408             mov eax, dword ptr [esp + 8]
// 00997934  56                   push esi
// 00997935  8b742408             mov esi, dword ptr [esp + 8]
// 00997939  6a02                 push 2
// 0099793b  50                   push eax
// 0099793c  56                   push esi
// 0099793d  ff154022b200         call dword ptr [0xb22240]
// 00997943  85c0                 test eax, eax
// 00997945  7504                 jne 0x99794b
// 00997947  33c0                 xor eax, eax
// 00997949  5e                   pop esi
// 0099794a  c3                   ret 
// 0099794b  50                   push eax
// 0099794c  56                   push esi
// 0099794d  ff158421b200         call dword ptr [0xb22184]
// 00997953  8bf0                 mov esi, eax
// 00997955  85f6                 test esi, esi
// 00997957  74ee                 je 0x997947
// 00997959  56                   push esi
// 0099795a  ff15d422b200         call dword ptr [0xb222d4]
// 00997960  85c0                 test eax, eax
// 00997962  74e3                 je 0x997947
// 00997964  33c9                 xor ecx, ecx
// 00997966  6683780e20           cmp word ptr [eax + 0xe], 0x20
// 0099796b  57                   push edi
// 0099796c  0f94c1               sete cl
// 0099796f  56                   push esi
// 00997970  8bf9                 mov edi, ecx
// 00997972  ff15d022b200         call dword ptr [0xb222d0]
// 00997978  8bc7                 mov eax, edi
// 0099797a  5f                   pop edi
// 0099797b  5e                   pop esi
// 0099797c  c3                   ret 
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