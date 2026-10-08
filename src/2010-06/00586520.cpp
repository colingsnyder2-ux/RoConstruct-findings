// from server: 100% by auto
// roc 2010-06 00586520  unit: seg_00580000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586520
//
// 00586520  56                   push esi
// 00586521  8b742408             mov esi, dword ptr [esp + 8]
// 00586525  8b4604               mov eax, dword ptr [esi + 4]
// 00586528  8b08                 mov ecx, dword ptr [eax]
// 0058652a  6a6c                 push 0x6c
// 0058652c  6a01                 push 1
// 0058652e  56                   push esi
// 0058652f  ffd1                 call ecx
// 00586531  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00586537  33c9                 xor ecx, ecx
// 00586539  c70090635800         mov dword ptr [eax], 0x586390
// 0058653f  83c40c               add esp, 0xc
// 00586542  89483c               mov dword ptr [eax + 0x3c], ecx
// 00586545  89482c               mov dword ptr [eax + 0x2c], ecx
// 00586548  89485c               mov dword ptr [eax + 0x5c], ecx
// 0058654b  89484c               mov dword ptr [eax + 0x4c], ecx
// 0058654e  894840               mov dword ptr [eax + 0x40], ecx
// 00586551  894830               mov dword ptr [eax + 0x30], ecx
// 00586554  894860               mov dword ptr [eax + 0x60], ecx
// 00586557  894850               mov dword ptr [eax + 0x50], ecx
// 0058655a  894844               mov dword ptr [eax + 0x44], ecx
// 0058655d  894834               mov dword ptr [eax + 0x34], ecx
// 00586560  894864               mov dword ptr [eax + 0x64], ecx
// 00586563  894854               mov dword ptr [eax + 0x54], ecx
// 00586566  894848               mov dword ptr [eax + 0x48], ecx
// 00586569  894838               mov dword ptr [eax + 0x38], ecx
// 0058656c  894868               mov dword ptr [eax + 0x68], ecx
// 0058656f  894858               mov dword ptr [eax + 0x58], ecx
// 00586572  5e                   pop esi
// 00586573  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
