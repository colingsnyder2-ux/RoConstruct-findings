// roc 2007-08 0060fad0  unit: RBX::Ball  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fad0
//
// 0060fad0  33c0                 xor eax, eax
// 0060fad2  56                   push esi
// 0060fad3  8b7710               mov esi, dword ptr [edi + 0x10]
// 0060fad6  894624               mov dword ptr [esi + 0x24], eax
// 0060fad9  894628               mov dword ptr [esi + 0x28], eax
// 0060fadc  89462c               mov dword ptr [esi + 0x2c], eax
// 0060fadf  8b4670               mov eax, dword ptr [esi + 0x70]
// 0060fae2  f6400503             test byte ptr [eax + 5], 3
// 0060fae6  740a                 je 0x60faf2
// 0060fae8  50                   push eax
// 0060fae9  56                   push esi
// 0060faea  e821f5ffff           call 0x60f010
// 0060faef  83c408               add esp, 8
// 0060faf2  8b4670               mov eax, dword ptr [esi + 0x70]
// 0060faf5  83785004             cmp dword ptr [eax + 0x50], 4
// 0060faf9  7c13                 jl 0x60fb0e
// 0060fafb  8b4048               mov eax, dword ptr [eax + 0x48]
// 0060fafe  f6400503             test byte ptr [eax + 5], 3
// 0060fb02  740a                 je 0x60fb0e
// 0060fb04  50                   push eax
// 0060fb05  56                   push esi
// 0060fb06  e805f5ffff           call 0x60f010
// 0060fb0b  83c408               add esp, 8
// 0060fb0e  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060fb11  83786804             cmp dword ptr [eax + 0x68], 4
// 0060fb15  7c13                 jl 0x60fb2a
// 0060fb17  8b4060               mov eax, dword ptr [eax + 0x60]
// 0060fb1a  f6400503             test byte ptr [eax + 5], 3
// 0060fb1e  740a                 je 0x60fb2a
// 0060fb20  50                   push eax
// 0060fb21  56                   push esi
// 0060fb22  e8e9f4ffff           call 0x60f010
// 0060fb27  83c408               add esp, 8
// 0060fb2a  56                   push esi
// 0060fb2b  e860ffffff           call 0x60fa90
// 0060fb30  83c404               add esp, 4
// 0060fb33  c6461501             mov byte ptr [esi + 0x15], 1
// 0060fb37  5e                   pop esi
// 0060fb38  c3                   ret 
// library lua-5.1.4/lgc.c (function _markroot)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
