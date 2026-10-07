// roc 2010-06 00783980  unit: seg_00780000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00783980
//
// 00783980  56                   push esi
// 00783981  8b742408             mov esi, dword ptr [esp + 8]
// 00783985  8b4604               mov eax, dword ptr [esi + 4]
// 00783988  894608               mov dword ptr [esi + 8], eax
// 0078398b  b81f010000           mov eax, 0x11f
// 00783990  394620               cmp dword ptr [esi + 0x20], eax
// 00783993  741d                 je 0x7839b2
// 00783995  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00783998  8b5624               mov edx, dword ptr [esi + 0x24]
// 0078399b  894e10               mov dword ptr [esi + 0x10], ecx
// 0078399e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007839a1  895614               mov dword ptr [esi + 0x14], edx
// 007839a4  8b562c               mov edx, dword ptr [esi + 0x2c]
// 007839a7  894e18               mov dword ptr [esi + 0x18], ecx
// 007839aa  89561c               mov dword ptr [esi + 0x1c], edx
// 007839ad  894620               mov dword ptr [esi + 0x20], eax
// 007839b0  5e                   pop esi
// 007839b1  c3                   ret 
// 007839b2  8d4618               lea eax, [esi + 0x18]
// 007839b5  50                   push eax
// 007839b6  8bc6                 mov eax, esi
// 007839b8  e813f9ffff           call 0x7832d0
// 007839bd  83c404               add esp, 4
// 007839c0  894610               mov dword ptr [esi + 0x10], eax
// 007839c3  5e                   pop esi
// 007839c4  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
