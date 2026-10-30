// from server: 100% by auto
// roc 2010-06 0077ab30  unit: RBX::PartDropTool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ab30
//
// 0077ab30  33c0                 xor eax, eax
// 0077ab32  56                   push esi
// 0077ab33  8b7710               mov esi, dword ptr [edi + 0x10]
// 0077ab36  894624               mov dword ptr [esi + 0x24], eax
// 0077ab39  894628               mov dword ptr [esi + 0x28], eax
// 0077ab3c  89462c               mov dword ptr [esi + 0x2c], eax
// 0077ab3f  8b4670               mov eax, dword ptr [esi + 0x70]
// 0077ab42  f6400503             test byte ptr [eax + 5], 3
// 0077ab46  740a                 je 0x77ab52
// 0077ab48  50                   push eax
// 0077ab49  56                   push esi
// 0077ab4a  e851f5ffff           call 0x77a0a0
// 0077ab4f  83c408               add esp, 8
// 0077ab52  8b4670               mov eax, dword ptr [esi + 0x70]
// 0077ab55  83785004             cmp dword ptr [eax + 0x50], 4
// 0077ab59  7c13                 jl 0x77ab6e
// 0077ab5b  8b4048               mov eax, dword ptr [eax + 0x48]
// 0077ab5e  f6400503             test byte ptr [eax + 5], 3
// 0077ab62  740a                 je 0x77ab6e
// 0077ab64  50                   push eax
// 0077ab65  56                   push esi
// 0077ab66  e835f5ffff           call 0x77a0a0
// 0077ab6b  83c408               add esp, 8
// 0077ab6e  8b4710               mov eax, dword ptr [edi + 0x10]
// 0077ab71  83786804             cmp dword ptr [eax + 0x68], 4
// 0077ab75  7c13                 jl 0x77ab8a
// 0077ab77  8b4060               mov eax, dword ptr [eax + 0x60]
// 0077ab7a  f6400503             test byte ptr [eax + 5], 3
// 0077ab7e  740a                 je 0x77ab8a
// 0077ab80  50                   push eax
// 0077ab81  56                   push esi
// 0077ab82  e819f5ffff           call 0x77a0a0
// 0077ab87  83c408               add esp, 8
// 0077ab8a  56                   push esi
// 0077ab8b  e860ffffff           call 0x77aaf0
// 0077ab90  83c404               add esp, 4
// 0077ab93  c6461501             mov byte ptr [esi + 0x15], 1
// 0077ab97  5e                   pop esi
// 0077ab98  c3                   ret 
// library lua-5.1.4/lgc.c (function _markroot)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
