// roc 2009-06 005a02f0  unit: seg_005a0000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a02f0
//
// 005a02f0  8b4804               mov ecx, dword ptr [eax + 4]
// 005a02f3  8b11                 mov edx, dword ptr [ecx]
// 005a02f5  56                   push esi
// 005a02f6  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 005a02fc  57                   push edi
// 005a02fd  68fc070000           push 0x7fc
// 005a0302  6a01                 push 1
// 005a0304  50                   push eax
// 005a0305  ffd2                 call edx
// 005a0307  05fc030000           add eax, 0x3fc
// 005a030c  83c40c               add esp, 0xc
// 005a030f  894628               mov dword ptr [esi + 0x28], eax
// 005a0312  33d2                 xor edx, edx
// 005a0314  33c9                 xor ecx, ecx
// 005a0316  33ff                 xor edi, edi
// 005a0318  8bf0                 mov esi, eax
// 005a031a  8d9b00000000         lea ebx, [ebx]
// 005a0320  891488               mov dword ptr [eax + ecx*4], edx
// 005a0323  893e                 mov dword ptr [esi], edi
// 005a0325  41                   inc ecx
// 005a0326  83ee04               sub esi, 4
// 005a0329  42                   inc edx
// 005a032a  4f                   dec edi
// 005a032b  83f910               cmp ecx, 0x10
// 005a032e  7cf0                 jl 0x5a0320
// 005a0330  83f930               cmp ecx, 0x30
// 005a0333  7d28                 jge 0x5a035d
// 005a0335  8d348d00000000       lea esi, [ecx*4]
// 005a033c  8bfe                 mov edi, esi
// 005a033e  8bf0                 mov esi, eax
// 005a0340  2bf7                 sub esi, edi
// 005a0342  8bfa                 mov edi, edx
// 005a0344  f7df                 neg edi
// 005a0346  891488               mov dword ptr [eax + ecx*4], edx
// 005a0349  893e                 mov dword ptr [esi], edi
// 005a034b  41                   inc ecx
// 005a034c  8bf9                 mov edi, ecx
// 005a034e  f7d7                 not edi
// 005a0350  83e701               and edi, 1
// 005a0353  83ee04               sub esi, 4
// 005a0356  03d7                 add edx, edi
// 005a0358  83f930               cmp ecx, 0x30
// 005a035b  7ce5                 jl 0x5a0342
// 005a035d  81f9ff000000         cmp ecx, 0xff
// 005a0363  7f24                 jg 0x5a0389
// 005a0365  8d348d00000000       lea esi, [ecx*4]
// 005a036c  53                   push ebx
// 005a036d  8bde                 mov ebx, esi
// 005a036f  8bfa                 mov edi, edx
// 005a0371  8bf0                 mov esi, eax
// 005a0373  f7df                 neg edi
// 005a0375  2bf3                 sub esi, ebx
// 005a0377  5b                   pop ebx
// 005a0378  891488               mov dword ptr [eax + ecx*4], edx
// 005a037b  893e                 mov dword ptr [esi], edi
// 005a037d  41                   inc ecx
// 005a037e  83ee04               sub esi, 4
// 005a0381  81f9ff000000         cmp ecx, 0xff
// 005a0387  7eef                 jle 0x5a0378
// 005a0389  5f                   pop edi
// 005a038a  5e                   pop esi
// 005a038b  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
