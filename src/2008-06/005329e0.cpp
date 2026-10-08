// from server: 100% by auto
// roc 2008-06 005329e0  unit: seg_00530000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005329e0
//
// 005329e0  56                   push esi
// 005329e1  8b742408             mov esi, dword ptr [esp + 8]
// 005329e5  8b4604               mov eax, dword ptr [esi + 4]
// 005329e8  8b08                 mov ecx, dword ptr [eax]
// 005329ea  68ac000000           push 0xac
// 005329ef  6a01                 push 1
// 005329f1  56                   push esi
// 005329f2  ffd1                 call ecx
// 005329f4  898698010000         mov dword ptr [esi + 0x198], eax
// 005329fa  33c9                 xor ecx, ecx
// 005329fc  c70090285300         mov dword ptr [eax], 0x532890
// 00532a02  c7400470245300       mov dword ptr [eax + 4], 0x532470
// 00532a09  83c40c               add esp, 0xc
// 00532a0c  894838               mov dword ptr [eax + 0x38], ecx
// 00532a0f  894828               mov dword ptr [eax + 0x28], ecx
// 00532a12  89483c               mov dword ptr [eax + 0x3c], ecx
// 00532a15  89482c               mov dword ptr [eax + 0x2c], ecx
// 00532a18  894840               mov dword ptr [eax + 0x40], ecx
// 00532a1b  894830               mov dword ptr [eax + 0x30], ecx
// 00532a1e  894844               mov dword ptr [eax + 0x44], ecx
// 00532a21  894834               mov dword ptr [eax + 0x34], ecx
// 00532a24  5e                   pop esi
// 00532a25  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jinit_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
