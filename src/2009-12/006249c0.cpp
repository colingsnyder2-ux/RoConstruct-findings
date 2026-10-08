// roc 2009-12 006249c0  unit: seg_00620000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006249c0
//
// 006249c0  56                   push esi
// 006249c1  8b742408             mov esi, dword ptr [esp + 8]
// 006249c5  8b4604               mov eax, dword ptr [esi + 4]
// 006249c8  8b08                 mov ecx, dword ptr [eax]
// 006249ca  6a6c                 push 0x6c
// 006249cc  6a01                 push 1
// 006249ce  56                   push esi
// 006249cf  ffd1                 call ecx
// 006249d1  89865c010000         mov dword ptr [esi + 0x15c], eax
// 006249d7  33c9                 xor ecx, ecx
// 006249d9  c70030486200         mov dword ptr [eax], 0x624830
// 006249df  83c40c               add esp, 0xc
// 006249e2  89483c               mov dword ptr [eax + 0x3c], ecx
// 006249e5  89482c               mov dword ptr [eax + 0x2c], ecx
// 006249e8  89485c               mov dword ptr [eax + 0x5c], ecx
// 006249eb  89484c               mov dword ptr [eax + 0x4c], ecx
// 006249ee  894840               mov dword ptr [eax + 0x40], ecx
// 006249f1  894830               mov dword ptr [eax + 0x30], ecx
// 006249f4  894860               mov dword ptr [eax + 0x60], ecx
// 006249f7  894850               mov dword ptr [eax + 0x50], ecx
// 006249fa  894844               mov dword ptr [eax + 0x44], ecx
// 006249fd  894834               mov dword ptr [eax + 0x34], ecx
// 00624a00  894864               mov dword ptr [eax + 0x64], ecx
// 00624a03  894854               mov dword ptr [eax + 0x54], ecx
// 00624a06  894848               mov dword ptr [eax + 0x48], ecx
// 00624a09  894838               mov dword ptr [eax + 0x38], ecx
// 00624a0c  894868               mov dword ptr [eax + 0x68], ecx
// 00624a0f  894858               mov dword ptr [eax + 0x58], ecx
// 00624a12  5e                   pop esi
// 00624a13  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
