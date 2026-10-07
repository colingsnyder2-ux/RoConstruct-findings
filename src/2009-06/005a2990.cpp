// roc 2009-06 005a2990  unit: seg_005a0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2990
//
// 005a2990  56                   push esi
// 005a2991  8b742408             mov esi, dword ptr [esp + 8]
// 005a2995  8b4604               mov eax, dword ptr [esi + 4]
// 005a2998  8b08                 mov ecx, dword ptr [eax]
// 005a299a  6a6c                 push 0x6c
// 005a299c  6a01                 push 1
// 005a299e  56                   push esi
// 005a299f  ffd1                 call ecx
// 005a29a1  89865c010000         mov dword ptr [esi + 0x15c], eax
// 005a29a7  33c9                 xor ecx, ecx
// 005a29a9  c70000285a00         mov dword ptr [eax], 0x5a2800
// 005a29af  83c40c               add esp, 0xc
// 005a29b2  89483c               mov dword ptr [eax + 0x3c], ecx
// 005a29b5  89482c               mov dword ptr [eax + 0x2c], ecx
// 005a29b8  89485c               mov dword ptr [eax + 0x5c], ecx
// 005a29bb  89484c               mov dword ptr [eax + 0x4c], ecx
// 005a29be  894840               mov dword ptr [eax + 0x40], ecx
// 005a29c1  894830               mov dword ptr [eax + 0x30], ecx
// 005a29c4  894860               mov dword ptr [eax + 0x60], ecx
// 005a29c7  894850               mov dword ptr [eax + 0x50], ecx
// 005a29ca  894844               mov dword ptr [eax + 0x44], ecx
// 005a29cd  894834               mov dword ptr [eax + 0x34], ecx
// 005a29d0  894864               mov dword ptr [eax + 0x64], ecx
// 005a29d3  894854               mov dword ptr [eax + 0x54], ecx
// 005a29d6  894848               mov dword ptr [eax + 0x48], ecx
// 005a29d9  894838               mov dword ptr [eax + 0x38], ecx
// 005a29dc  894868               mov dword ptr [eax + 0x68], ecx
// 005a29df  894858               mov dword ptr [eax + 0x58], ecx
// 005a29e2  5e                   pop esi
// 005a29e3  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
