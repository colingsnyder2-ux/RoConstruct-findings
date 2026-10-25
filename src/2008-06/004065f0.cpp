// from server: 100% by king_originala
// roc 2008-06 004065f0  unit: VCApp::?$CComObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004065f0
//
// 004065f0  53                   push ebx
// 004065f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004065f5  56                   push esi
// 004065f6  57                   push edi
// 004065f7  6801080000           push 0x801
// 004065fc  53                   push ebx
// 004065fd  8bf9                 mov edi, ecx
// 004065ff  ff1570288000         call dword ptr [0x802870]
// 00406605  8bf0                 mov esi, eax
// 00406607  83c408               add esp, 8
// 0040660a  81fe00080000         cmp esi, 0x800
// 00406610  7608                 jbe 0x40661a
// 00406612  5f                   pop edi
// 00406613  5e                   pop esi
// 00406614  33c0                 xor eax, eax
// 00406616  5b                   pop ebx
// 00406617  c20400               ret 4
// 0040661a  56                   push esi
// 0040661b  53                   push ebx
// 0040661c  8d87250a0000         lea eax, [edi + 0xa25]
// 00406622  6801080000           push 0x801
// 00406627  50                   push eax
// 00406628  ff15b8288000         call dword ptr [0x8028b8]
// 0040662e  50                   push eax
// 0040662f  e84cb0ffff           call 0x401680
// 00406634  83c414               add esp, 0x14
// 00406637  89b740120000         mov dword ptr [edi + 0x1240], esi
// 0040663d  5f                   pop edi
// 0040663e  5e                   pop esi
// 0040663f  b801000000           mov eax, 1
// 00406644  5b                   pop ebx
// 00406645  c20400               ret 4

extern "C" {
    extern unsigned int (__cdecl *strnlen)(const char *, unsigned int);
    extern int (__cdecl *_mbsnbcpy_s)(
        unsigned char *, unsigned int, const unsigned char *, unsigned int);
    void __cdecl check_error(int);
}

struct S {
    unsigned char padding1[0xA25];
    unsigned char buffer[0x801];
    unsigned char padding2[0x1A];
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
