// from server: 100% by auto
// roc 2011-06 0057b120  unit: seg_00570000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b120
//
// 0057b120  56                   push esi
// 0057b121  8b742408             mov esi, dword ptr [esp + 8]
// 0057b125  8b4604               mov eax, dword ptr [esi + 4]
// 0057b128  8b08                 mov ecx, dword ptr [eax]
// 0057b12a  6a40                 push 0x40
// 0057b12c  6a01                 push 1
// 0057b12e  56                   push esi
// 0057b12f  ffd1                 call ecx
// 0057b131  898640010000         mov dword ptr [esi + 0x140], eax
// 0057b137  83c40c               add esp, 0xc
// 0057b13a  c700d0b05700         mov dword ptr [eax], 0x57b0d0
// 0057b140  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0057b147  7561                 jne 0x57b1aa
// 0057b149  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0057b14e  7415                 je 0x57b165
// 0057b150  8b16                 mov edx, dword ptr [esi]
// 0057b152  c7421404000000       mov dword ptr [edx + 0x14], 4
// 0057b159  8b06                 mov eax, dword ptr [esi]
// 0057b15b  8b08                 mov ecx, dword ptr [eax]
// 0057b15d  56                   push esi
// 0057b15e  ffd1                 call ecx
// 0057b160  83c404               add esp, 4
// 0057b163  5e                   pop esi
// 0057b164  c3                   ret 
// 0057b165  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0057b168  55                   push ebp
// 0057b169  33ed                 xor ebp, ebp
// 0057b16b  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0057b16e  7e39                 jle 0x57b1a9
// 0057b170  53                   push ebx
// 0057b171  57                   push edi
// 0057b172  8d791c               lea edi, [ecx + 0x1c]
// 0057b175  8d5818               lea ebx, [eax + 0x18]
// 0057b178  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0057b17b  8b0f                 mov ecx, dword ptr [edi]
// 0057b17d  8b5604               mov edx, dword ptr [esi + 4]
// 0057b180  8b5208               mov edx, dword ptr [edx + 8]
// 0057b183  03c0                 add eax, eax
// 0057b185  03c9                 add ecx, ecx
// 0057b187  03c0                 add eax, eax
// 0057b189  03c0                 add eax, eax
// 0057b18b  50                   push eax
// 0057b18c  03c9                 add ecx, ecx
// 0057b18e  03c9                 add ecx, ecx
// 0057b190  51                   push ecx
// 0057b191  6a01                 push 1
// 0057b193  56                   push esi
// 0057b194  ffd2                 call edx
// 0057b196  8903                 mov dword ptr [ebx], eax
// 0057b198  45                   inc ebp
// 0057b199  83c410               add esp, 0x10
// 0057b19c  83c304               add ebx, 4
// 0057b19f  83c754               add edi, 0x54
// 0057b1a2  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0057b1a5  7cd1                 jl 0x57b178
// 0057b1a7  5f                   pop edi
// 0057b1a8  5b                   pop ebx
// 0057b1a9  5d                   pop ebp
// 0057b1aa  5e                   pop esi
// 0057b1ab  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
