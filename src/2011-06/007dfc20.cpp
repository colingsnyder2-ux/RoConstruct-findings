// from server: 100% by auto
// roc 2011-06 007dfc20  unit: seg_007d0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dfc20
//
// 007dfc20  56                   push esi
// 007dfc21  8b742408             mov esi, dword ptr [esp + 8]
// 007dfc25  8b4604               mov eax, dword ptr [esi + 4]
// 007dfc28  894608               mov dword ptr [esi + 8], eax
// 007dfc2b  b81f010000           mov eax, 0x11f
// 007dfc30  394620               cmp dword ptr [esi + 0x20], eax
// 007dfc33  741d                 je 0x7dfc52
// 007dfc35  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007dfc38  8b5624               mov edx, dword ptr [esi + 0x24]
// 007dfc3b  894e10               mov dword ptr [esi + 0x10], ecx
// 007dfc3e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007dfc41  895614               mov dword ptr [esi + 0x14], edx
// 007dfc44  8b562c               mov edx, dword ptr [esi + 0x2c]
// 007dfc47  894e18               mov dword ptr [esi + 0x18], ecx
// 007dfc4a  89561c               mov dword ptr [esi + 0x1c], edx
// 007dfc4d  894620               mov dword ptr [esi + 0x20], eax
// 007dfc50  5e                   pop esi
// 007dfc51  c3                   ret 
// 007dfc52  8d4618               lea eax, [esi + 0x18]
// 007dfc55  50                   push eax
// 007dfc56  8bc6                 mov eax, esi
// 007dfc58  e823f9ffff           call 0x7df580
// 007dfc5d  83c404               add esp, 4
// 007dfc60  894610               mov dword ptr [esi + 0x10], eax
// 007dfc63  5e                   pop esi
// 007dfc64  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
