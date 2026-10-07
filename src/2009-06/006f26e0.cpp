// roc 2009-06 006f26e0  unit: seg_006f0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f26e0
//
// 006f26e0  56                   push esi
// 006f26e1  8b742408             mov esi, dword ptr [esp + 8]
// 006f26e5  8b4604               mov eax, dword ptr [esi + 4]
// 006f26e8  894608               mov dword ptr [esi + 8], eax
// 006f26eb  b81f010000           mov eax, 0x11f
// 006f26f0  394620               cmp dword ptr [esi + 0x20], eax
// 006f26f3  741d                 je 0x6f2712
// 006f26f5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f26f8  8b5624               mov edx, dword ptr [esi + 0x24]
// 006f26fb  894e10               mov dword ptr [esi + 0x10], ecx
// 006f26fe  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006f2701  895614               mov dword ptr [esi + 0x14], edx
// 006f2704  8b562c               mov edx, dword ptr [esi + 0x2c]
// 006f2707  894e18               mov dword ptr [esi + 0x18], ecx
// 006f270a  89561c               mov dword ptr [esi + 0x1c], edx
// 006f270d  894620               mov dword ptr [esi + 0x20], eax
// 006f2710  5e                   pop esi
// 006f2711  c3                   ret 
// 006f2712  8d4618               lea eax, [esi + 0x18]
// 006f2715  50                   push eax
// 006f2716  8bc6                 mov eax, esi
// 006f2718  e813f9ffff           call 0x6f2030
// 006f271d  83c404               add esp, 4
// 006f2720  894610               mov dword ptr [esi + 0x10], eax
// 006f2723  5e                   pop esi
// 006f2724  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
