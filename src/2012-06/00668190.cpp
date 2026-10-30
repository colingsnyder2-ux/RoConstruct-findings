// from server: 100% by auto
// roc 2012-06 00668190  unit: seg_00660000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668190
//
// 00668190  53                   push ebx
// 00668191  8a5c2408             mov bl, byte ptr [esp + 8]
// 00668195  56                   push esi
// 00668196  8bf0                 mov esi, eax
// 00668198  e853ffffff           call 0x6680f0
// 0066819d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 006681a1  7544                 jne 0x6681e7
// 006681a3  6a07                 push 7
// 006681a5  6a7f                 push 0x7f
// 006681a7  e8d4fdffff           call 0x667f80
// 006681ac  8b4610               mov eax, dword ptr [esi + 0x10]
// 006681af  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006681b6  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006681bd  c600ff               mov byte ptr [eax], 0xff
// 006681c0  ff4610               inc dword ptr [esi + 0x10]
// 006681c3  83c408               add esp, 8
// 006681c6  834614ff             add dword ptr [esi + 0x14], -1
// 006681ca  7505                 jne 0x6681d1
// 006681cc  e86ffdffff           call 0x667f40
// 006681d1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006681d4  80eb30               sub bl, 0x30
// 006681d7  8819                 mov byte ptr [ecx], bl
// 006681d9  ff4610               inc dword ptr [esi + 0x10]
// 006681dc  834614ff             add dword ptr [esi + 0x14], -1
// 006681e0  7505                 jne 0x6681e7
// 006681e2  e859fdffff           call 0x667f40
// 006681e7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006681ea  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 006681f1  7525                 jne 0x668218
// 006681f3  33c0                 xor eax, eax
// 006681f5  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 006681fb  7e29                 jle 0x668226
// 006681fd  8d4e24               lea ecx, [esi + 0x24]
// 00668200  c70100000000         mov dword ptr [ecx], 0
// 00668206  8b5620               mov edx, dword ptr [esi + 0x20]
// 00668209  40                   inc eax
// 0066820a  83c104               add ecx, 4
// 0066820d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00668213  7ceb                 jl 0x668200
// 00668215  5e                   pop esi
// 00668216  5b                   pop ebx
// 00668217  c3                   ret 
// 00668218  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0066821f  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00668226  5e                   pop esi
// 00668227  5b                   pop ebx
// 00668228  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
