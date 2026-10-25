// from server: 100% by king_originala
// roc 2008-06 004064b0  unit: VCApp::?$CComObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004064b0
//
// 004064b0  53                   push ebx
// 004064b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004064b5  56                   push esi
// 004064b6  57                   push edi
// 004064b7  6881000000           push 0x81
// 004064bc  53                   push ebx
// 004064bd  8bf9                 mov edi, ecx
// 004064bf  ff1570288000         call dword ptr [0x802870]
// 004064c5  8bf0                 mov esi, eax
// 004064c7  83c408               add esp, 8
// 004064ca  81fe80000000         cmp esi, 0x80
// 004064d0  7608                 jbe 0x4064da
// 004064d2  5f                   pop edi
// 004064d3  5e                   pop esi
// 004064d4  33c0                 xor eax, eax
// 004064d6  5b                   pop ebx
// 004064d7  c20400               ret 4
// 004064da  56                   push esi
// 004064db  53                   push ebx
// 004064dc  8d8722010000         lea eax, [edi + 0x122]
// 004064e2  6881000000           push 0x81
// 004064e7  50                   push eax
// 004064e8  ff15b8288000         call dword ptr [0x8028b8]
// 004064ee  50                   push eax
// 004064ef  e88cb1ffff           call 0x401680
// 004064f4  83c414               add esp, 0x14
// 004064f7  89b734120000         mov dword ptr [edi + 0x1234], esi
// 004064fd  5f                   pop edi
// 004064fe  5e                   pop esi
// 004064ff  b801000000           mov eax, 1
// 00406504  5b                   pop ebx
// 00406505  c20400               ret 4

extern "C" {
    extern unsigned int (__cdecl *strnlen)(const char *, unsigned int);
    extern int (__cdecl *_mbsnbcpy_s)(unsigned char *, unsigned int,
                                     const unsigned char *, unsigned int);
    void __cdecl check_result(int);
}

struct S {
    unsigned char reserved1[0x122];
    unsigned char text[0x81];
    unsigned char reserved2[0x1091];
    unsigned int length;

    int setText(const char *);
};

int S::setText(const char *source)
{
    unsigned int n = strnlen(source, 0x81);
    if (n > 0x80)
        return 0;

    check_result(_mbsnbcpy_s(text, 0x81,
                            reinterpret_cast<const unsigned char *>(source), n));
    length = n;
    return 1;
}
