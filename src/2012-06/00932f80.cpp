// from server: 100% by auto
// roc 2012-06 00932f80  unit: RBX::BallCellContact  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932f80
//
// 00932f80  33c0                 xor eax, eax
// 00932f82  56                   push esi
// 00932f83  8b7710               mov esi, dword ptr [edi + 0x10]
// 00932f86  894624               mov dword ptr [esi + 0x24], eax
// 00932f89  894628               mov dword ptr [esi + 0x28], eax
// 00932f8c  89462c               mov dword ptr [esi + 0x2c], eax
// 00932f8f  8b4670               mov eax, dword ptr [esi + 0x70]
// 00932f92  f6400503             test byte ptr [eax + 5], 3
// 00932f96  740a                 je 0x932fa2
// 00932f98  50                   push eax
// 00932f99  56                   push esi
// 00932f9a  e831f5ffff           call 0x9324d0
// 00932f9f  83c408               add esp, 8
// 00932fa2  8b4670               mov eax, dword ptr [esi + 0x70]
// 00932fa5  83785004             cmp dword ptr [eax + 0x50], 4
// 00932fa9  7c13                 jl 0x932fbe
// 00932fab  8b4048               mov eax, dword ptr [eax + 0x48]
// 00932fae  f6400503             test byte ptr [eax + 5], 3
// 00932fb2  740a                 je 0x932fbe
// 00932fb4  50                   push eax
// 00932fb5  56                   push esi
// 00932fb6  e815f5ffff           call 0x9324d0
// 00932fbb  83c408               add esp, 8
// 00932fbe  8b4710               mov eax, dword ptr [edi + 0x10]
// 00932fc1  83786804             cmp dword ptr [eax + 0x68], 4
// 00932fc5  7c13                 jl 0x932fda
// 00932fc7  8b4060               mov eax, dword ptr [eax + 0x60]
// 00932fca  f6400503             test byte ptr [eax + 5], 3
// 00932fce  740a                 je 0x932fda
// 00932fd0  50                   push eax
// 00932fd1  56                   push esi
// 00932fd2  e8f9f4ffff           call 0x9324d0
// 00932fd7  83c408               add esp, 8
// 00932fda  56                   push esi
// 00932fdb  e860ffffff           call 0x932f40
// 00932fe0  83c404               add esp, 4
// 00932fe3  c6461501             mov byte ptr [esi + 0x15], 1
// 00932fe7  5e                   pop esi
// 00932fe8  c3                   ret 
// library lua-5.1.4/lgc.c (function _markroot)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
