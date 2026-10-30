// from server: 100% by auto
// roc 2012-06 009383c0  unit: seg_00930000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009383c0
//
// 009383c0  56                   push esi
// 009383c1  8b742408             mov esi, dword ptr [esp + 8]
// 009383c5  8b4604               mov eax, dword ptr [esi + 4]
// 009383c8  894608               mov dword ptr [esi + 8], eax
// 009383cb  b81f010000           mov eax, 0x11f
// 009383d0  394620               cmp dword ptr [esi + 0x20], eax
// 009383d3  741d                 je 0x9383f2
// 009383d5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009383d8  8b5624               mov edx, dword ptr [esi + 0x24]
// 009383db  894e10               mov dword ptr [esi + 0x10], ecx
// 009383de  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 009383e1  895614               mov dword ptr [esi + 0x14], edx
// 009383e4  8b562c               mov edx, dword ptr [esi + 0x2c]
// 009383e7  894e18               mov dword ptr [esi + 0x18], ecx
// 009383ea  89561c               mov dword ptr [esi + 0x1c], edx
// 009383ed  894620               mov dword ptr [esi + 0x20], eax
// 009383f0  5e                   pop esi
// 009383f1  c3                   ret 
// 009383f2  8d4618               lea eax, [esi + 0x18]
// 009383f5  50                   push eax
// 009383f6  8bc6                 mov eax, esi
// 009383f8  e823f9ffff           call 0x937d20
// 009383fd  83c404               add esp, 4
// 00938400  894610               mov dword ptr [esi + 0x10], eax
// 00938403  5e                   pop esi
// 00938404  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
