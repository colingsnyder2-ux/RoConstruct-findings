// from server: 100% by colin
// roc 2008-06 00406590  unit: VCApp::?$CComObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406590
//
// 00406590  53                   push ebx
// 00406591  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00406595  56                   push esi
// 00406596  57                   push edi
// 00406597  6801080000           push 0x801
// 0040659c  53                   push ebx
// 0040659d  8bf9                 mov edi, ecx
// 0040659f  ff1570288000         call dword ptr [0x802870]
// 004065a5  8bf0                 mov esi, eax
// 004065a7  83c408               add esp, 8
// 004065aa  81fe00080000         cmp esi, 0x800
// 004065b0  7608                 jbe 0x4065ba
// 004065b2  5f                   pop edi
// 004065b3  5e                   pop esi
// 004065b4  33c0                 xor eax, eax
// 004065b6  5b                   pop ebx
// 004065b7  c20400               ret 4
// 004065ba  56                   push esi
// 004065bb  53                   push ebx
// 004065bc  8d8724020000         lea eax, [edi + 0x224]
// 004065c2  6801080000           push 0x801
// 004065c7  50                   push eax
// 004065c8  ff15b8288000         call dword ptr [0x8028b8]
// 004065ce  50                   push eax
// 004065cf  e8acb0ffff           call 0x401680
// 004065d4  83c414               add esp, 0x14
// 004065d7  89b73c120000         mov dword ptr [edi + 0x123c], esi
// 004065dd  5f                   pop edi
// 004065de  5e                   pop esi
// 004065df  b801000000           mov eax, 1
// 004065e4  5b                   pop ebx
// 004065e5  c20400               ret 4

extern "C" {
    extern unsigned int (__cdecl *strnlen)(const char *, unsigned int);
    extern int (__cdecl *_mbsnbcpy_s)(
        unsigned char *, unsigned int, const unsigned char *, unsigned int);
    void __cdecl check_error(int);
}

struct S {
    unsigned char padding1[0x224];
    unsigned char buffer[0x801];
    unsigned char padding2[0x817];
    unsigned int length;

    int set(const char *text);
};

int S::set(const char *text)
{
    unsigned int n = strnlen(text, 0x801);
    if (n > 0x800)
        return 0;

    check_error(_mbsnbcpy_s(
        buffer, 0x801, reinterpret_cast<const unsigned char *>(text), n));
    length = n;
    return 1;
}
