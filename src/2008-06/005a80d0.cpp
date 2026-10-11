// from server: 77% by tester
// roc 2008-06 005a80d0  unit: RBX::Log  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a80d0
//
// 005a80d0  81ecd0000000         sub esp, 0xd0
// 005a80d6  8d0424               lea eax, [esp]
// 005a80d9  50                   push eax
// 005a80da  ff1538418000         call dword ptr [0x804138]
// 005a80e0  33c9                 xor ecx, ecx
// 005a80e2  6a7e                 push 0x7e
// 005a80e4  51                   push ecx
// 005a80e5  8d54245a             lea edx, [esp + 0x5a]
// 005a80e9  52                   push edx
// 005a80ea  66894c245c           mov word ptr [esp + 0x5c], cx
// 005a80ef  e810960f00           call 0x6a1704
// 005a80f4  83c40c               add esp, 0xc
// 005a80f7  6a40                 push 0x40
// 005a80f9  8d442454             lea eax, [esp + 0x54]
// 005a80fd  50                   push eax
// 005a80fe  8d4c2408             lea ecx, [esp + 8]
// 005a8102  51                   push ecx
// 005a8103  ff1528418000         call dword ptr [0x804128]
// 005a8109  6a00                 push 0
// 005a810b  6a00                 push 0
// 005a810d  6a40                 push 0x40
// 005a810f  8d54241c             lea edx, [esp + 0x1c]
// 005a8113  52                   push edx
// 005a8114  6a40                 push 0x40
// 005a8116  8d442464             lea eax, [esp + 0x64]
// 005a811a  50                   push eax
// 005a811b  6a00                 push 0
// 005a811d  6a00                 push 0
// 005a811f  ff15ec228000         call dword ptr [0x8022ec]
// 005a8125  8d4c2410             lea ecx, [esp + 0x10]
// 005a8129  51                   push ecx
// 005a812a  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 005a8131  ff154c248000         call dword ptr [0x80244c]
// 005a8137  81c4d0000000         add esp, 0xd0
// 005a813d  c3                   ret 

struct Log {
    void __cdecl timeStamp(bool includeDate);
};

extern "C" {
    void __stdcall CoCreateGuid(void* pguid);
    int __stdcall StringFromGUID2(const void* guid, wchar_t* str, int cch);
    int __stdcall WideCharToMultiByte(unsigned int cp, unsigned long flags,
                                      const wchar_t* src, int srclen,
                                      char* dst, int dstlen,
                                      const char* defchar, int* used);
    void* __stdcall memset_impl(void* dst, int val, unsigned int size);
}

void Log::timeStamp(bool includeDate)
{
    unsigned char guid[16];
    wchar_t guidStr[64];
    char buf[64];
    char out[64];

    CoCreateGuid(guid);
    guidStr[0] = 0;
    memset_impl(guidStr, 0, 0x7e);
    StringFromGUID2(guid, guidStr, 0x40);
    WideCharToMultiByte(0, 0, guidStr, 0x40, buf, 0x40, 0, 0);
    *(void**)out = 0;
    *(void**)(out + 8) = 0;
    *(void**)(out + 16) = 0;
    *(void**)(out + 24) = 0;
    *(void**)(out + 32) = 0;
    *(void**)(out + 40) = 0;
    *(void**)(out + 48) = 0;
    *(void**)(out + 56) = 0;
    (*(void(__thiscall**)(void*, const char*))0x80244c)((void*)0x80244c, buf);
}
