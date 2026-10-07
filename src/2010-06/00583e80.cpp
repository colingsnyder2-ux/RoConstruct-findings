// roc 2010-06 00583e80  unit: seg_00580000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583e80
//
// 00583e80  8b4804               mov ecx, dword ptr [eax + 4]
// 00583e83  8b11                 mov edx, dword ptr [ecx]
// 00583e85  56                   push esi
// 00583e86  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00583e8c  57                   push edi
// 00583e8d  68fc070000           push 0x7fc
// 00583e92  6a01                 push 1
// 00583e94  50                   push eax
// 00583e95  ffd2                 call edx
// 00583e97  05fc030000           add eax, 0x3fc
// 00583e9c  83c40c               add esp, 0xc
// 00583e9f  894628               mov dword ptr [esi + 0x28], eax
// 00583ea2  33d2                 xor edx, edx
// 00583ea4  33c9                 xor ecx, ecx
// 00583ea6  33ff                 xor edi, edi
// 00583ea8  8bf0                 mov esi, eax
// 00583eaa  8d9b00000000         lea ebx, [ebx]
// 00583eb0  891488               mov dword ptr [eax + ecx*4], edx
// 00583eb3  893e                 mov dword ptr [esi], edi
// 00583eb5  41                   inc ecx
// 00583eb6  83ee04               sub esi, 4
// 00583eb9  42                   inc edx
// 00583eba  4f                   dec edi
// 00583ebb  83f910               cmp ecx, 0x10
// 00583ebe  7cf0                 jl 0x583eb0
// 00583ec0  83f930               cmp ecx, 0x30
// 00583ec3  7d28                 jge 0x583eed
// 00583ec5  8d348d00000000       lea esi, [ecx*4]
// 00583ecc  8bfe                 mov edi, esi
// 00583ece  8bf0                 mov esi, eax
// 00583ed0  2bf7                 sub esi, edi
// 00583ed2  8bfa                 mov edi, edx
// 00583ed4  f7df                 neg edi
// 00583ed6  891488               mov dword ptr [eax + ecx*4], edx
// 00583ed9  893e                 mov dword ptr [esi], edi
// 00583edb  41                   inc ecx
// 00583edc  8bf9                 mov edi, ecx
// 00583ede  f7d7                 not edi
// 00583ee0  83e701               and edi, 1
// 00583ee3  83ee04               sub esi, 4
// 00583ee6  03d7                 add edx, edi
// 00583ee8  83f930               cmp ecx, 0x30
// 00583eeb  7ce5                 jl 0x583ed2
// 00583eed  81f9ff000000         cmp ecx, 0xff
// 00583ef3  7f24                 jg 0x583f19
// 00583ef5  8d348d00000000       lea esi, [ecx*4]
// 00583efc  53                   push ebx
// 00583efd  8bde                 mov ebx, esi
// 00583eff  8bfa                 mov edi, edx
// 00583f01  8bf0                 mov esi, eax
// 00583f03  f7df                 neg edi
// 00583f05  2bf3                 sub esi, ebx
// 00583f07  5b                   pop ebx
// 00583f08  891488               mov dword ptr [eax + ecx*4], edx
// 00583f0b  893e                 mov dword ptr [esi], edi
// 00583f0d  41                   inc ecx
// 00583f0e  83ee04               sub esi, 4
// 00583f11  81f9ff000000         cmp ecx, 0xff
// 00583f17  7eef                 jle 0x583f08
// 00583f19  5f                   pop edi
// 00583f1a  5e                   pop esi
// 00583f1b  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
