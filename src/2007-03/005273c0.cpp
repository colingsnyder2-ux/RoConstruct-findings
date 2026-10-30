// roc 2007-03 005273c0  unit: seg_00520000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005273c0
//
// 005273c0  56                   push esi
// 005273c1  8b742408             mov esi, dword ptr [esp + 8]
// 005273c5  8b4604               mov eax, dword ptr [esi + 4]
// 005273c8  8b08                 mov ecx, dword ptr [eax]
// 005273ca  6a6c                 push 0x6c
// 005273cc  6a01                 push 1
// 005273ce  56                   push esi
// 005273cf  ffd1                 call ecx
// 005273d1  89865c010000         mov dword ptr [esi + 0x15c], eax
// 005273d7  33c9                 xor ecx, ecx
// 005273d9  c70030725200         mov dword ptr [eax], 0x527230
// 005273df  83c40c               add esp, 0xc
// 005273e2  89483c               mov dword ptr [eax + 0x3c], ecx
// 005273e5  89482c               mov dword ptr [eax + 0x2c], ecx
// 005273e8  89485c               mov dword ptr [eax + 0x5c], ecx
// 005273eb  89484c               mov dword ptr [eax + 0x4c], ecx
// 005273ee  894840               mov dword ptr [eax + 0x40], ecx
// 005273f1  894830               mov dword ptr [eax + 0x30], ecx
// 005273f4  894860               mov dword ptr [eax + 0x60], ecx
// 005273f7  894850               mov dword ptr [eax + 0x50], ecx
// 005273fa  894844               mov dword ptr [eax + 0x44], ecx
// 005273fd  894834               mov dword ptr [eax + 0x34], ecx
// 00527400  894864               mov dword ptr [eax + 0x64], ecx
// 00527403  894854               mov dword ptr [eax + 0x54], ecx
// 00527406  894848               mov dword ptr [eax + 0x48], ecx
// 00527409  894838               mov dword ptr [eax + 0x38], ecx
// 0052740c  894868               mov dword ptr [eax + 0x68], ecx
// 0052740f  894858               mov dword ptr [eax + 0x58], ecx
// 00527412  5e                   pop esi
// 00527413  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
