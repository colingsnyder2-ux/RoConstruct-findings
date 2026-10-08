// from server: 100% by auto
// roc 2008-06 005386b0  unit: seg_00530000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005386b0
//
// 005386b0  56                   push esi
// 005386b1  8b742408             mov esi, dword ptr [esp + 8]
// 005386b5  8b4604               mov eax, dword ptr [esi + 4]
// 005386b8  8b08                 mov ecx, dword ptr [eax]
// 005386ba  6a6c                 push 0x6c
// 005386bc  6a01                 push 1
// 005386be  56                   push esi
// 005386bf  ffd1                 call ecx
// 005386c1  89865c010000         mov dword ptr [esi + 0x15c], eax
// 005386c7  33c9                 xor ecx, ecx
// 005386c9  c70020855300         mov dword ptr [eax], 0x538520
// 005386cf  83c40c               add esp, 0xc
// 005386d2  89483c               mov dword ptr [eax + 0x3c], ecx
// 005386d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 005386d8  89485c               mov dword ptr [eax + 0x5c], ecx
// 005386db  89484c               mov dword ptr [eax + 0x4c], ecx
// 005386de  894840               mov dword ptr [eax + 0x40], ecx
// 005386e1  894830               mov dword ptr [eax + 0x30], ecx
// 005386e4  894860               mov dword ptr [eax + 0x60], ecx
// 005386e7  894850               mov dword ptr [eax + 0x50], ecx
// 005386ea  894844               mov dword ptr [eax + 0x44], ecx
// 005386ed  894834               mov dword ptr [eax + 0x34], ecx
// 005386f0  894864               mov dword ptr [eax + 0x64], ecx
// 005386f3  894854               mov dword ptr [eax + 0x54], ecx
// 005386f6  894848               mov dword ptr [eax + 0x48], ecx
// 005386f9  894838               mov dword ptr [eax + 0x38], ecx
// 005386fc  894868               mov dword ptr [eax + 0x68], ecx
// 005386ff  894858               mov dword ptr [eax + 0x58], ecx
// 00538702  5e                   pop esi
// 00538703  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
