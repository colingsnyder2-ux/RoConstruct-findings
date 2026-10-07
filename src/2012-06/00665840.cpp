// roc 2012-06 00665840  unit: seg_00660000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665840
//
// 00665840  8b4804               mov ecx, dword ptr [eax + 4]
// 00665843  8b11                 mov edx, dword ptr [ecx]
// 00665845  56                   push esi
// 00665846  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0066584c  57                   push edi
// 0066584d  68fc070000           push 0x7fc
// 00665852  6a01                 push 1
// 00665854  50                   push eax
// 00665855  ffd2                 call edx
// 00665857  05fc030000           add eax, 0x3fc
// 0066585c  83c40c               add esp, 0xc
// 0066585f  894628               mov dword ptr [esi + 0x28], eax
// 00665862  33d2                 xor edx, edx
// 00665864  33c9                 xor ecx, ecx
// 00665866  33ff                 xor edi, edi
// 00665868  8bf0                 mov esi, eax
// 0066586a  8d9b00000000         lea ebx, [ebx]
// 00665870  891488               mov dword ptr [eax + ecx*4], edx
// 00665873  893e                 mov dword ptr [esi], edi
// 00665875  41                   inc ecx
// 00665876  83ee04               sub esi, 4
// 00665879  42                   inc edx
// 0066587a  4f                   dec edi
// 0066587b  83f910               cmp ecx, 0x10
// 0066587e  7cf0                 jl 0x665870
// 00665880  83f930               cmp ecx, 0x30
// 00665883  7d28                 jge 0x6658ad
// 00665885  8d348d00000000       lea esi, [ecx*4]
// 0066588c  8bfe                 mov edi, esi
// 0066588e  8bf0                 mov esi, eax
// 00665890  2bf7                 sub esi, edi
// 00665892  8bfa                 mov edi, edx
// 00665894  f7df                 neg edi
// 00665896  891488               mov dword ptr [eax + ecx*4], edx
// 00665899  893e                 mov dword ptr [esi], edi
// 0066589b  41                   inc ecx
// 0066589c  8bf9                 mov edi, ecx
// 0066589e  f7d7                 not edi
// 006658a0  83e701               and edi, 1
// 006658a3  83ee04               sub esi, 4
// 006658a6  03d7                 add edx, edi
// 006658a8  83f930               cmp ecx, 0x30
// 006658ab  7ce5                 jl 0x665892
// 006658ad  81f9ff000000         cmp ecx, 0xff
// 006658b3  7f24                 jg 0x6658d9
// 006658b5  8d348d00000000       lea esi, [ecx*4]
// 006658bc  53                   push ebx
// 006658bd  8bde                 mov ebx, esi
// 006658bf  8bfa                 mov edi, edx
// 006658c1  8bf0                 mov esi, eax
// 006658c3  f7df                 neg edi
// 006658c5  2bf3                 sub esi, ebx
// 006658c7  5b                   pop ebx
// 006658c8  891488               mov dword ptr [eax + ecx*4], edx
// 006658cb  893e                 mov dword ptr [esi], edi
// 006658cd  41                   inc ecx
// 006658ce  83ee04               sub esi, 4
// 006658d1  81f9ff000000         cmp ecx, 0xff
// 006658d7  7eef                 jle 0x6658c8
// 006658d9  5f                   pop edi
// 006658da  5e                   pop esi
// 006658db  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
