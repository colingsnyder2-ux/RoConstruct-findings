// roc 2009-12 00622320  unit: seg_00620000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622320
//
// 00622320  8b4804               mov ecx, dword ptr [eax + 4]
// 00622323  8b11                 mov edx, dword ptr [ecx]
// 00622325  56                   push esi
// 00622326  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0062232c  57                   push edi
// 0062232d  68fc070000           push 0x7fc
// 00622332  6a01                 push 1
// 00622334  50                   push eax
// 00622335  ffd2                 call edx
// 00622337  05fc030000           add eax, 0x3fc
// 0062233c  83c40c               add esp, 0xc
// 0062233f  894628               mov dword ptr [esi + 0x28], eax
// 00622342  33d2                 xor edx, edx
// 00622344  33c9                 xor ecx, ecx
// 00622346  33ff                 xor edi, edi
// 00622348  8bf0                 mov esi, eax
// 0062234a  8d9b00000000         lea ebx, [ebx]
// 00622350  891488               mov dword ptr [eax + ecx*4], edx
// 00622353  893e                 mov dword ptr [esi], edi
// 00622355  41                   inc ecx
// 00622356  83ee04               sub esi, 4
// 00622359  42                   inc edx
// 0062235a  4f                   dec edi
// 0062235b  83f910               cmp ecx, 0x10
// 0062235e  7cf0                 jl 0x622350
// 00622360  83f930               cmp ecx, 0x30
// 00622363  7d28                 jge 0x62238d
// 00622365  8d348d00000000       lea esi, [ecx*4]
// 0062236c  8bfe                 mov edi, esi
// 0062236e  8bf0                 mov esi, eax
// 00622370  2bf7                 sub esi, edi
// 00622372  8bfa                 mov edi, edx
// 00622374  f7df                 neg edi
// 00622376  891488               mov dword ptr [eax + ecx*4], edx
// 00622379  893e                 mov dword ptr [esi], edi
// 0062237b  41                   inc ecx
// 0062237c  8bf9                 mov edi, ecx
// 0062237e  f7d7                 not edi
// 00622380  83e701               and edi, 1
// 00622383  83ee04               sub esi, 4
// 00622386  03d7                 add edx, edi
// 00622388  83f930               cmp ecx, 0x30
// 0062238b  7ce5                 jl 0x622372
// 0062238d  81f9ff000000         cmp ecx, 0xff
// 00622393  7f24                 jg 0x6223b9
// 00622395  8d348d00000000       lea esi, [ecx*4]
// 0062239c  53                   push ebx
// 0062239d  8bde                 mov ebx, esi
// 0062239f  8bfa                 mov edi, edx
// 006223a1  8bf0                 mov esi, eax
// 006223a3  f7df                 neg edi
// 006223a5  2bf3                 sub esi, ebx
// 006223a7  5b                   pop ebx
// 006223a8  891488               mov dword ptr [eax + ecx*4], edx
// 006223ab  893e                 mov dword ptr [esi], edi
// 006223ad  41                   inc ecx
// 006223ae  83ee04               sub esi, 4
// 006223b1  81f9ff000000         cmp ecx, 0xff
// 006223b7  7eef                 jle 0x6223a8
// 006223b9  5f                   pop edi
// 006223ba  5e                   pop esi
// 006223bb  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
