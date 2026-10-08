// from server: 100% by auto
// roc 2009-06 00581840  unit: seg_00580000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581840
//
// 00581840  53                   push ebx
// 00581841  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00581845  83c8ff               or eax, 0xffffffff
// 00581848  33d2                 xor edx, edx
// 0058184a  f7f3                 div ebx
// 0058184c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00581850  56                   push esi
// 00581851  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00581855  57                   push edi
// 00581856  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 00581859  3bc8                 cmp ecx, eax
// 0058185b  7614                 jbe 0x581871
// 0058185d  6804ca8c00           push 0x8cca04
// 00581862  56                   push esi
// 00581863  e8a8c90000           call 0x58e210
// 00581868  83c408               add esp, 8
// 0058186b  5f                   pop edi
// 0058186c  5e                   pop esi
// 0058186d  33c0                 xor eax, eax
// 0058186f  5b                   pop ebx
// 00581870  c3                   ret 
// 00581871  0fafcb               imul ecx, ebx
// 00581874  8bc7                 mov eax, edi
// 00581876  51                   push ecx
// 00581877  0d00001000           or eax, 0x100000
// 0058187c  56                   push esi
// 0058187d  89466c               mov dword ptr [esi + 0x6c], eax
// 00581880  e8cbd30000           call 0x58ec50
// 00581885  83c408               add esp, 8
// 00581888  897e6c               mov dword ptr [esi + 0x6c], edi
// 0058188b  5f                   pop edi
// 0058188c  5e                   pop esi
// 0058188d  5b                   pop ebx
// 0058188e  c3                   ret 
// library libpng-1.2.6/png.c (function _png_zalloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 png.c
