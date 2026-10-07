// roc 2011-06 0057a130  unit: seg_00570000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a130
//
// 0057a130  8b4804               mov ecx, dword ptr [eax + 4]
// 0057a133  8b11                 mov edx, dword ptr [ecx]
// 0057a135  56                   push esi
// 0057a136  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 0057a13c  57                   push edi
// 0057a13d  68fc070000           push 0x7fc
// 0057a142  6a01                 push 1
// 0057a144  50                   push eax
// 0057a145  ffd2                 call edx
// 0057a147  05fc030000           add eax, 0x3fc
// 0057a14c  83c40c               add esp, 0xc
// 0057a14f  894628               mov dword ptr [esi + 0x28], eax
// 0057a152  33d2                 xor edx, edx
// 0057a154  33c9                 xor ecx, ecx
// 0057a156  33ff                 xor edi, edi
// 0057a158  8bf0                 mov esi, eax
// 0057a15a  8d9b00000000         lea ebx, [ebx]
// 0057a160  891488               mov dword ptr [eax + ecx*4], edx
// 0057a163  893e                 mov dword ptr [esi], edi
// 0057a165  41                   inc ecx
// 0057a166  83ee04               sub esi, 4
// 0057a169  42                   inc edx
// 0057a16a  4f                   dec edi
// 0057a16b  83f910               cmp ecx, 0x10
// 0057a16e  7cf0                 jl 0x57a160
// 0057a170  83f930               cmp ecx, 0x30
// 0057a173  7d28                 jge 0x57a19d
// 0057a175  8d348d00000000       lea esi, [ecx*4]
// 0057a17c  8bfe                 mov edi, esi
// 0057a17e  8bf0                 mov esi, eax
// 0057a180  2bf7                 sub esi, edi
// 0057a182  8bfa                 mov edi, edx
// 0057a184  f7df                 neg edi
// 0057a186  891488               mov dword ptr [eax + ecx*4], edx
// 0057a189  893e                 mov dword ptr [esi], edi
// 0057a18b  41                   inc ecx
// 0057a18c  8bf9                 mov edi, ecx
// 0057a18e  f7d7                 not edi
// 0057a190  83e701               and edi, 1
// 0057a193  83ee04               sub esi, 4
// 0057a196  03d7                 add edx, edi
// 0057a198  83f930               cmp ecx, 0x30
// 0057a19b  7ce5                 jl 0x57a182
// 0057a19d  81f9ff000000         cmp ecx, 0xff
// 0057a1a3  7f24                 jg 0x57a1c9
// 0057a1a5  8d348d00000000       lea esi, [ecx*4]
// 0057a1ac  53                   push ebx
// 0057a1ad  8bde                 mov ebx, esi
// 0057a1af  8bfa                 mov edi, edx
// 0057a1b1  8bf0                 mov esi, eax
// 0057a1b3  f7df                 neg edi
// 0057a1b5  2bf3                 sub esi, ebx
// 0057a1b7  5b                   pop ebx
// 0057a1b8  891488               mov dword ptr [eax + ecx*4], edx
// 0057a1bb  893e                 mov dword ptr [esi], edi
// 0057a1bd  41                   inc ecx
// 0057a1be  83ee04               sub esi, 4
// 0057a1c1  81f9ff000000         cmp ecx, 0xff
// 0057a1c7  7eef                 jle 0x57a1b8
// 0057a1c9  5f                   pop edi
// 0057a1ca  5e                   pop esi
// 0057a1cb  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
