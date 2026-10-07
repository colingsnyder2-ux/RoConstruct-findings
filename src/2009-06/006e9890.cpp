// roc 2009-06 006e9890  unit: RBX::PartDropTool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9890
//
// 006e9890  33c0                 xor eax, eax
// 006e9892  56                   push esi
// 006e9893  8b7710               mov esi, dword ptr [edi + 0x10]
// 006e9896  894624               mov dword ptr [esi + 0x24], eax
// 006e9899  894628               mov dword ptr [esi + 0x28], eax
// 006e989c  89462c               mov dword ptr [esi + 0x2c], eax
// 006e989f  8b4670               mov eax, dword ptr [esi + 0x70]
// 006e98a2  f6400503             test byte ptr [eax + 5], 3
// 006e98a6  740a                 je 0x6e98b2
// 006e98a8  50                   push eax
// 006e98a9  56                   push esi
// 006e98aa  e851f5ffff           call 0x6e8e00
// 006e98af  83c408               add esp, 8
// 006e98b2  8b4670               mov eax, dword ptr [esi + 0x70]
// 006e98b5  83785004             cmp dword ptr [eax + 0x50], 4
// 006e98b9  7c13                 jl 0x6e98ce
// 006e98bb  8b4048               mov eax, dword ptr [eax + 0x48]
// 006e98be  f6400503             test byte ptr [eax + 5], 3
// 006e98c2  740a                 je 0x6e98ce
// 006e98c4  50                   push eax
// 006e98c5  56                   push esi
// 006e98c6  e835f5ffff           call 0x6e8e00
// 006e98cb  83c408               add esp, 8
// 006e98ce  8b4710               mov eax, dword ptr [edi + 0x10]
// 006e98d1  83786804             cmp dword ptr [eax + 0x68], 4
// 006e98d5  7c13                 jl 0x6e98ea
// 006e98d7  8b4060               mov eax, dword ptr [eax + 0x60]
// 006e98da  f6400503             test byte ptr [eax + 5], 3
// 006e98de  740a                 je 0x6e98ea
// 006e98e0  50                   push eax
// 006e98e1  56                   push esi
// 006e98e2  e819f5ffff           call 0x6e8e00
// 006e98e7  83c408               add esp, 8
// 006e98ea  56                   push esi
// 006e98eb  e860ffffff           call 0x6e9850
// 006e98f0  83c404               add esp, 4
// 006e98f3  c6461501             mov byte ptr [esi + 0x15], 1
// 006e98f7  5e                   pop esi
// 006e98f8  c3                   ret 
// library lua-5.1.4/lgc.c (function _markroot)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
