// roc 2007-08 006189f0  unit: seg_00610000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006189f0
//
// 006189f0  56                   push esi
// 006189f1  8b742408             mov esi, dword ptr [esp + 8]
// 006189f5  8b4604               mov eax, dword ptr [esi + 4]
// 006189f8  894608               mov dword ptr [esi + 8], eax
// 006189fb  b81f010000           mov eax, 0x11f
// 00618a00  394620               cmp dword ptr [esi + 0x20], eax
// 00618a03  741d                 je 0x618a22
// 00618a05  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00618a08  8b5624               mov edx, dword ptr [esi + 0x24]
// 00618a0b  894e10               mov dword ptr [esi + 0x10], ecx
// 00618a0e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00618a11  895614               mov dword ptr [esi + 0x14], edx
// 00618a14  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00618a17  894e18               mov dword ptr [esi + 0x18], ecx
// 00618a1a  89561c               mov dword ptr [esi + 0x1c], edx
// 00618a1d  894620               mov dword ptr [esi + 0x20], eax
// 00618a20  5e                   pop esi
// 00618a21  c3                   ret 
// 00618a22  8d4618               lea eax, [esi + 0x18]
// 00618a25  50                   push eax
// 00618a26  8bc6                 mov eax, esi
// 00618a28  e803f9ffff           call 0x618330
// 00618a2d  83c404               add esp, 4
// 00618a30  894610               mov dword ptr [esi + 0x10], eax
// 00618a33  5e                   pop esi
// 00618a34  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
