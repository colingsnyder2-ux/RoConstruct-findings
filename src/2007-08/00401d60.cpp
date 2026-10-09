// from server: 72% by colin
// roc 2007-08 00401d60  unit: VCWorkspace::?$CComObject  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401d60
//
// 00401d60  51                   push ecx
// 00401d61  55                   push ebp
// 00401d62  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00401d66  85ed                 test ebp, ebp
// 00401d68  894c2404             mov dword ptr [esp + 4], ecx
// 00401d6c  750a                 jne 0x401d78
// 00401d6e  6805400080           push 0x80004005
// 00401d73  e888f2ffff           call 0x401000
// 00401d78  53                   push ebx
// 00401d79  8b1df4d27700         mov ebx, dword ptr [0x77d2f4]
// 00401d7f  56                   push esi
// 00401d80  57                   push edi
// 00401d81  33ff                 xor edi, edi
// 00401d83  8bf5                 mov esi, ebp
// 00401d85  56                   push esi
// 00401d86  ffd3                 call ebx
// 00401d88  83c001               add eax, 1
// 00401d8b  03f0                 add esi, eax
// 00401d8d  03f8                 add edi, eax
// 00401d8f  83f801               cmp eax, 1
// 00401d92  75f1                 jne 0x401d85
// 00401d94  8b442418             mov eax, dword ptr [esp + 0x18]
// 00401d98  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00401d9c  8b11                 mov edx, dword ptr [ecx]
// 00401d9e  57                   push edi
// 00401d9f  55                   push ebp
// 00401da0  6a07                 push 7
// 00401da2  6a00                 push 0
// 00401da4  50                   push eax
// 00401da5  52                   push edx
// 00401da6  ff1514d07700         call dword ptr [0x77d014]
// 00401dac  5f                   pop edi
// 00401dad  5e                   pop esi
// 00401dae  5b                   pop ebx
// 00401daf  5d                   pop ebp
// 00401db0  59                   pop ecx
// 00401db1  c20800               ret 8

typedef unsigned long DWORD;

extern "C" {
    DWORD __stdcall lstrlenA(const char*);
    DWORD __stdcall RegSetValueExA(void*, const char*, DWORD, DWORD, const unsigned char*, DWORD);
    void __stdcall sub_401000(DWORD);
}

struct VCWorkspace_CComObject {
    long __stdcall f(char* a, char* b);
};

long __stdcall VCWorkspace_CComObject::f(char* a, char* b) {
    if (a == 0) {
        sub_401000(0x80004005);
    }
    int len = 0;
    char* p = a;
    int n;
    do {
        n = lstrlenA(p) + 1;
        p += n;
        len += n;
    } while (n != 1);
    void* hkey = *(void**)((char*)this + 0);
    RegSetValueExA(hkey, b, 0, 7, (const unsigned char*)a, len);
    return 0;
}
