// roc 2011-06 0057ca80  unit: seg_00570000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ca80
//
// 0057ca80  53                   push ebx
// 0057ca81  8a5c2408             mov bl, byte ptr [esp + 8]
// 0057ca85  56                   push esi
// 0057ca86  8bf0                 mov esi, eax
// 0057ca88  e853ffffff           call 0x57c9e0
// 0057ca8d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057ca91  7544                 jne 0x57cad7
// 0057ca93  6a07                 push 7
// 0057ca95  6a7f                 push 0x7f
// 0057ca97  e8d4fdffff           call 0x57c870
// 0057ca9c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0057ca9f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0057caa6  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0057caad  c600ff               mov byte ptr [eax], 0xff
// 0057cab0  ff4610               inc dword ptr [esi + 0x10]
// 0057cab3  83c408               add esp, 8
// 0057cab6  834614ff             add dword ptr [esi + 0x14], -1
// 0057caba  7505                 jne 0x57cac1
// 0057cabc  e86ffdffff           call 0x57c830
// 0057cac1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057cac4  80eb30               sub bl, 0x30
// 0057cac7  8819                 mov byte ptr [ecx], bl
// 0057cac9  ff4610               inc dword ptr [esi + 0x10]
// 0057cacc  834614ff             add dword ptr [esi + 0x14], -1
// 0057cad0  7505                 jne 0x57cad7
// 0057cad2  e859fdffff           call 0x57c830
// 0057cad7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057cada  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 0057cae1  7525                 jne 0x57cb08
// 0057cae3  33c0                 xor eax, eax
// 0057cae5  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 0057caeb  7e29                 jle 0x57cb16
// 0057caed  8d4e24               lea ecx, [esi + 0x24]
// 0057caf0  c70100000000         mov dword ptr [ecx], 0
// 0057caf6  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057caf9  40                   inc eax
// 0057cafa  83c104               add ecx, 4
// 0057cafd  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 0057cb03  7ceb                 jl 0x57caf0
// 0057cb05  5e                   pop esi
// 0057cb06  5b                   pop ebx
// 0057cb07  c3                   ret 
// 0057cb08  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0057cb0f  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 0057cb16  5e                   pop esi
// 0057cb17  5b                   pop ebx
// 0057cb18  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
