// from server: 100% by atomic.potato
// roc 2010-06 007bd1f0  unit: CXTPCommandBar  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd1f0
//
// 007bd1f0  8b442408             mov eax, dword ptr [esp + 8]
// 007bd1f4  56                   push esi
// 007bd1f5  8b742408             mov esi, dword ptr [esp + 8]
// 007bd1f9  6a02                 push 2
// 007bd1fb  50                   push eax
// 007bd1fc  56                   push esi
// 007bd1fd  ff155ca39e00         call dword ptr [0x9ea35c]
// 007bd203  85c0                 test eax, eax
// 007bd205  7504                 jne 0x7bd20b
// 007bd207  33c0                 xor eax, eax
// 007bd209  5e                   pop esi
// 007bd20a  c3                   ret 
// 007bd20b  50                   push eax
// 007bd20c  56                   push esi
// 007bd20d  ff1560a39e00         call dword ptr [0x9ea360]
// 007bd213  8bf0                 mov esi, eax
// 007bd215  85f6                 test esi, esi
// 007bd217  74ee                 je 0x7bd207
// 007bd219  56                   push esi
// 007bd21a  ff15eca29e00         call dword ptr [0x9ea2ec]
// 007bd220  85c0                 test eax, eax
// 007bd222  74e3                 je 0x7bd207
// 007bd224  33c9                 xor ecx, ecx
// 007bd226  6683780e20           cmp word ptr [eax + 0xe], 0x20
// 007bd22b  57                   push edi
// 007bd22c  0f94c1               sete cl
// 007bd22f  56                   push esi
// 007bd230  8bf9                 mov edi, ecx
// 007bd232  ff15f0a29e00         call dword ptr [0x9ea2f0]
// 007bd238  8bc7                 mov eax, edi
// 007bd23a  5f                   pop edi
// 007bd23b  5e                   pop esi
// 007bd23c  c3                   ret 

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
