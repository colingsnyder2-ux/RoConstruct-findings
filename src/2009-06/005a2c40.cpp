// roc 2009-06 005a2c40  unit: seg_005a0000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2c40
//
// 005a2c40  53                   push ebx
// 005a2c41  8a5c2408             mov bl, byte ptr [esp + 8]
// 005a2c45  56                   push esi
// 005a2c46  8bf0                 mov esi, eax
// 005a2c48  e853ffffff           call 0x5a2ba0
// 005a2c4d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2c51  7544                 jne 0x5a2c97
// 005a2c53  6a07                 push 7
// 005a2c55  6a7f                 push 0x7f
// 005a2c57  e8d4fdffff           call 0x5a2a30
// 005a2c5c  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a2c5f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005a2c66  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 005a2c6d  c600ff               mov byte ptr [eax], 0xff
// 005a2c70  ff4610               inc dword ptr [esi + 0x10]
// 005a2c73  83c408               add esp, 8
// 005a2c76  834614ff             add dword ptr [esi + 0x14], -1
// 005a2c7a  7505                 jne 0x5a2c81
// 005a2c7c  e86ffdffff           call 0x5a29f0
// 005a2c81  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a2c84  80eb30               sub bl, 0x30
// 005a2c87  8819                 mov byte ptr [ecx], bl
// 005a2c89  ff4610               inc dword ptr [esi + 0x10]
// 005a2c8c  834614ff             add dword ptr [esi + 0x14], -1
// 005a2c90  7505                 jne 0x5a2c97
// 005a2c92  e859fdffff           call 0x5a29f0
// 005a2c97  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005a2c9a  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 005a2ca1  7525                 jne 0x5a2cc8
// 005a2ca3  33c0                 xor eax, eax
// 005a2ca5  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 005a2cab  7e29                 jle 0x5a2cd6
// 005a2cad  8d4e24               lea ecx, [esi + 0x24]
// 005a2cb0  c70100000000         mov dword ptr [ecx], 0
// 005a2cb6  8b5620               mov edx, dword ptr [esi + 0x20]
// 005a2cb9  40                   inc eax
// 005a2cba  83c104               add ecx, 4
// 005a2cbd  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 005a2cc3  7ceb                 jl 0x5a2cb0
// 005a2cc5  5e                   pop esi
// 005a2cc6  5b                   pop ebx
// 005a2cc7  c3                   ret 
// 005a2cc8  c7463800000000       mov dword ptr [esi + 0x38], 0
// 005a2ccf  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 005a2cd6  5e                   pop esi
// 005a2cd7  5b                   pop ebx
// 005a2cd8  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
