// from server: 100% by auto
// roc 2008-06 00665600  unit: seg_00660000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665600
//
// 00665600  56                   push esi
// 00665601  8b742408             mov esi, dword ptr [esp + 8]
// 00665605  8b4604               mov eax, dword ptr [esi + 4]
// 00665608  894608               mov dword ptr [esi + 8], eax
// 0066560b  b81f010000           mov eax, 0x11f
// 00665610  394620               cmp dword ptr [esi + 0x20], eax
// 00665613  741d                 je 0x665632
// 00665615  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00665618  8b5624               mov edx, dword ptr [esi + 0x24]
// 0066561b  894e10               mov dword ptr [esi + 0x10], ecx
// 0066561e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00665621  895614               mov dword ptr [esi + 0x14], edx
// 00665624  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00665627  894e18               mov dword ptr [esi + 0x18], ecx
// 0066562a  89561c               mov dword ptr [esi + 0x1c], edx
// 0066562d  894620               mov dword ptr [esi + 0x20], eax
// 00665630  5e                   pop esi
// 00665631  c3                   ret 
// 00665632  8d4618               lea eax, [esi + 0x18]
// 00665635  50                   push eax
// 00665636  8bc6                 mov eax, esi
// 00665638  e813f9ffff           call 0x664f50
// 0066563d  83c404               add esp, 4
// 00665640  894610               mov dword ptr [esi + 0x10], eax
// 00665643  5e                   pop esi
// 00665644  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
