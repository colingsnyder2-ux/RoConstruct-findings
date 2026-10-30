// roc 2009-12 00809050  unit: CXTPCommandBar  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00809050
//
// 00809050  8b442408             mov eax, dword ptr [esp + 8]
// 00809054  56                   push esi
// 00809055  8b742408             mov esi, dword ptr [esp + 8]
// 00809059  6a02                 push 2
// 0080905b  50                   push eax
// 0080905c  56                   push esi
// 0080905d  ff15ecb19800         call dword ptr [0x98b1ec]
// 00809063  85c0                 test eax, eax
// 00809065  7504                 jne 0x80906b
// 00809067  33c0                 xor eax, eax
// 00809069  5e                   pop esi
// 0080906a  c3                   ret 
// 0080906b  50                   push eax
// 0080906c  56                   push esi
// 0080906d  ff15f0b19800         call dword ptr [0x98b1f0]
// 00809073  8bf0                 mov esi, eax
// 00809075  85f6                 test esi, esi
// 00809077  74ee                 je 0x809067
// 00809079  56                   push esi
// 0080907a  ff157cb29800         call dword ptr [0x98b27c]
// 00809080  85c0                 test eax, eax
// 00809082  74e3                 je 0x809067
// 00809084  33c9                 xor ecx, ecx
// 00809086  6683780e20           cmp word ptr [eax + 0xe], 0x20
// 0080908b  57                   push edi
// 0080908c  0f94c1               sete cl
// 0080908f  56                   push esi
// 00809090  8bf9                 mov edi, ecx
// 00809092  ff1578b29800         call dword ptr [0x98b278]
// 00809098  8bc7                 mov eax, edi
// 0080909a  5f                   pop edi
// 0080909b  5e                   pop esi
// 0080909c  c3                   ret 
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