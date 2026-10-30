// roc 2009-12 00624c70  unit: seg_00620000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624c70
//
// 00624c70  53                   push ebx
// 00624c71  8a5c2408             mov bl, byte ptr [esp + 8]
// 00624c75  56                   push esi
// 00624c76  8bf0                 mov esi, eax
// 00624c78  e853ffffff           call 0x624bd0
// 00624c7d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624c81  7544                 jne 0x624cc7
// 00624c83  6a07                 push 7
// 00624c85  6a7f                 push 0x7f
// 00624c87  e8d4fdffff           call 0x624a60
// 00624c8c  8b4610               mov eax, dword ptr [esi + 0x10]
// 00624c8f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00624c96  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00624c9d  c600ff               mov byte ptr [eax], 0xff
// 00624ca0  ff4610               inc dword ptr [esi + 0x10]
// 00624ca3  83c408               add esp, 8
// 00624ca6  834614ff             add dword ptr [esi + 0x14], -1
// 00624caa  7505                 jne 0x624cb1
// 00624cac  e86ffdffff           call 0x624a20
// 00624cb1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00624cb4  80eb30               sub bl, 0x30
// 00624cb7  8819                 mov byte ptr [ecx], bl
// 00624cb9  ff4610               inc dword ptr [esi + 0x10]
// 00624cbc  834614ff             add dword ptr [esi + 0x14], -1
// 00624cc0  7505                 jne 0x624cc7
// 00624cc2  e859fdffff           call 0x624a20
// 00624cc7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00624cca  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 00624cd1  7525                 jne 0x624cf8
// 00624cd3  33c0                 xor eax, eax
// 00624cd5  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 00624cdb  7e29                 jle 0x624d06
// 00624cdd  8d4e24               lea ecx, [esi + 0x24]
// 00624ce0  c70100000000         mov dword ptr [ecx], 0
// 00624ce6  8b5620               mov edx, dword ptr [esi + 0x20]
// 00624ce9  40                   inc eax
// 00624cea  83c104               add ecx, 4
// 00624ced  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00624cf3  7ceb                 jl 0x624ce0
// 00624cf5  5e                   pop esi
// 00624cf6  5b                   pop ebx
// 00624cf7  c3                   ret 
// 00624cf8  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00624cff  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00624d06  5e                   pop esi
// 00624d07  5b                   pop ebx
// 00624d08  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
