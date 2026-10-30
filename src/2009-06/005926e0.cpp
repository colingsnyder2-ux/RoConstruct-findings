// from server: 100% by auto
// roc 2009-06 005926e0  unit: seg_00590000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005926e0
//
// 005926e0  56                   push esi
// 005926e1  8b742408             mov esi, dword ptr [esp + 8]
// 005926e5  8b4604               mov eax, dword ptr [esi + 4]
// 005926e8  8b08                 mov ecx, dword ptr [eax]
// 005926ea  6a18                 push 0x18
// 005926ec  6a00                 push 0
// 005926ee  56                   push esi
// 005926ef  ffd1                 call ecx
// 005926f1  898690010000         mov dword ptr [esi + 0x190], eax
// 005926f7  83c40c               add esp, 0xc
// 005926fa  c700c0255900         mov dword ptr [eax], 0x5925c0
// 00592700  c7400480265900       mov dword ptr [eax + 4], 0x592680
// 00592707  c7400880255900       mov dword ptr [eax + 8], 0x592580
// 0059270e  c7400cc0265900       mov dword ptr [eax + 0xc], 0x5926c0
// 00592715  c6401000             mov byte ptr [eax + 0x10], 0
// 00592719  c6401100             mov byte ptr [eax + 0x11], 0
// 0059271d  c6401401             mov byte ptr [eax + 0x14], 1
// 00592721  5e                   pop esi
// 00592722  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
