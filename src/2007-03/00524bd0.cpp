// roc 2007-03 00524bd0  unit: seg_00520000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524bd0
//
// 00524bd0  8b4804               mov ecx, dword ptr [eax + 4]
// 00524bd3  8b11                 mov edx, dword ptr [ecx]
// 00524bd5  56                   push esi
// 00524bd6  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00524bdc  57                   push edi
// 00524bdd  68fc070000           push 0x7fc
// 00524be2  6a01                 push 1
// 00524be4  50                   push eax
// 00524be5  ffd2                 call edx
// 00524be7  05fc030000           add eax, 0x3fc
// 00524bec  83c40c               add esp, 0xc
// 00524bef  894628               mov dword ptr [esi + 0x28], eax
// 00524bf2  33d2                 xor edx, edx
// 00524bf4  33c9                 xor ecx, ecx
// 00524bf6  33ff                 xor edi, edi
// 00524bf8  8bf0                 mov esi, eax
// 00524bfa  8d9b00000000         lea ebx, [ebx]
// 00524c00  891488               mov dword ptr [eax + ecx*4], edx
// 00524c03  893e                 mov dword ptr [esi], edi
// 00524c05  83c101               add ecx, 1
// 00524c08  83ee04               sub esi, 4
// 00524c0b  83c201               add edx, 1
// 00524c0e  83ef01               sub edi, 1
// 00524c11  83f910               cmp ecx, 0x10
// 00524c14  7cea                 jl 0x524c00
// 00524c16  83f930               cmp ecx, 0x30
// 00524c19  7d2a                 jge 0x524c45
// 00524c1b  8d348d00000000       lea esi, [ecx*4]
// 00524c22  8bfe                 mov edi, esi
// 00524c24  8bf0                 mov esi, eax
// 00524c26  2bf7                 sub esi, edi
// 00524c28  8bfa                 mov edi, edx
// 00524c2a  f7df                 neg edi
// 00524c2c  891488               mov dword ptr [eax + ecx*4], edx
// 00524c2f  893e                 mov dword ptr [esi], edi
// 00524c31  83c101               add ecx, 1
// 00524c34  8bf9                 mov edi, ecx
// 00524c36  f7d7                 not edi
// 00524c38  83e701               and edi, 1
// 00524c3b  83ee04               sub esi, 4
// 00524c3e  03d7                 add edx, edi
// 00524c40  83f930               cmp ecx, 0x30
// 00524c43  7ce3                 jl 0x524c28
// 00524c45  81f9ff000000         cmp ecx, 0xff
// 00524c4b  7f26                 jg 0x524c73
// 00524c4d  8d348d00000000       lea esi, [ecx*4]
// 00524c54  53                   push ebx
// 00524c55  8bde                 mov ebx, esi
// 00524c57  8bfa                 mov edi, edx
// 00524c59  8bf0                 mov esi, eax
// 00524c5b  f7df                 neg edi
// 00524c5d  2bf3                 sub esi, ebx
// 00524c5f  5b                   pop ebx
// 00524c60  891488               mov dword ptr [eax + ecx*4], edx
// 00524c63  893e                 mov dword ptr [esi], edi
// 00524c65  83c101               add ecx, 1
// 00524c68  83ee04               sub esi, 4
// 00524c6b  81f9ff000000         cmp ecx, 0xff
// 00524c71  7eed                 jle 0x524c60
// 00524c73  5f                   pop edi
// 00524c74  5e                   pop esi
// 00524c75  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
