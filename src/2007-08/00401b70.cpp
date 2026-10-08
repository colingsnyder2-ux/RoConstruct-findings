// from server: 100% by colin
// roc 2007-08 00401b70  unit: VCWorkspace::?$CComObject  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401b70
//
// 00401b70  8b442408             mov eax, dword ptr [esp + 8]
// 00401b74  85c0                 test eax, eax
// 00401b76  7508                 jne 0x401b80
// 00401b78  b803400080           mov eax, 0x80004003
// 00401b7d  c20800               ret 8
// 00401b80  8b0d044c7800         mov ecx, dword ptr [0x784c04]
// 00401b86  8908                 mov dword ptr [eax], ecx
// 00401b88  8b15084c7800         mov edx, dword ptr [0x784c08]
// 00401b8e  895004               mov dword ptr [eax + 4], edx
// 00401b91  8b0d0c4c7800         mov ecx, dword ptr [0x784c0c]
// 00401b97  894808               mov dword ptr [eax + 8], ecx
// 00401b9a  8b15104c7800         mov edx, dword ptr [0x784c10]
// 00401ba0  89500c               mov dword ptr [eax + 0xc], edx
// 00401ba3  33c0                 xor eax, eax
// 00401ba5  c20800               ret 8

struct S_00401b70 {
    long __stdcall f(void* p);
};

long __stdcall S_00401b70::f(void* p)
{
    if (p == 0)
        return (long)0x80004003;
    *(unsigned long*)((char*)p + 0) = *(unsigned long*)0x784c04;
    *(unsigned long*)((char*)p + 4) = *(unsigned long*)0x784c08;
    *(unsigned long*)((char*)p + 8) = *(unsigned long*)0x784c0c;
    *(unsigned long*)((char*)p + 12) = *(unsigned long*)0x784c10;
    return 0;
}
