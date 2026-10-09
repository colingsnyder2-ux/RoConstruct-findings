// from server: 93% by colin
// roc 2007-08 006b2c50  unit: CXTPResourceManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2c50
//
// 006b2c50  53                   push ebx
// 006b2c51  56                   push esi
// 006b2c52  57                   push edi
// 006b2c53  e8b8ffffff           call 0x6b2c10
// 006b2c58  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b2c5c  8b1dd0d27700         mov ebx, dword ptr [0x77d2d0]
// 006b2c62  6a05                 push 5
// 006b2c64  8bf0                 mov esi, eax
// 006b2c66  57                   push edi
// 006b2c67  56                   push esi
// 006b2c68  ffd3                 call ebx
// 006b2c6a  85c0                 test eax, eax
// 006b2c6c  7520                 jne 0x6b2c8e
// 006b2c6e  6a05                 push 5
// 006b2c70  57                   push edi
// 006b2c71  e802d8f7ff           call 0x630478
// 006b2c76  8bf0                 mov esi, eax
// 006b2c78  85f6                 test esi, esi
// 006b2c7a  7508                 jne 0x6b2c84
// 006b2c7c  5f                   pop edi
// 006b2c7d  5e                   pop esi
// 006b2c7e  33c0                 xor eax, eax
// 006b2c80  5b                   pop ebx
// 006b2c81  c20400               ret 4
// 006b2c84  6a05                 push 5
// 006b2c86  57                   push edi
// 006b2c87  56                   push esi
// 006b2c88  ffd3                 call ebx
// 006b2c8a  85c0                 test eax, eax
// 006b2c8c  74ee                 je 0x6b2c7c
// 006b2c8e  50                   push eax
// 006b2c8f  56                   push esi
// 006b2c90  ff15d4d27700         call dword ptr [0x77d2d4]
// 006b2c96  5f                   pop edi
// 006b2c97  5e                   pop esi
// 006b2c98  5b                   pop ebx
// 006b2c99  c20400               ret 4

extern "C" __declspec(dllimport) void* __stdcall FindResourceA(void*, const char*, const char*);
extern "C" __declspec(dllimport) void* __stdcall LoadResource(void*, void*);

extern void* __stdcall sub_6B2C10();
extern void* __stdcall sub_630478(void*, int);

void* __stdcall sub_6B2C50(void* a1)
{
    void* hRes;
    void* hData;
    void* p;

    hRes = sub_6B2C10();
    hData = FindResourceA(hRes, (const char*)a1, (const char*)5);
    if (hData == 0)
    {
        p = sub_630478(a1, 5);
        if (p == 0)
            return 0;
        hData = FindResourceA(hRes, (const char*)a1, (const char*)5);
        if (hData == 0)
            return 0;
    }
    return LoadResource(hRes, hData);
}
