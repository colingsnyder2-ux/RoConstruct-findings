// roc 2012-06 00667ee0  unit: seg_00660000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667ee0
//
// 00667ee0  56                   push esi
// 00667ee1  8b742408             mov esi, dword ptr [esp + 8]
// 00667ee5  8b4604               mov eax, dword ptr [esi + 4]
// 00667ee8  8b08                 mov ecx, dword ptr [eax]
// 00667eea  6a6c                 push 0x6c
// 00667eec  6a01                 push 1
// 00667eee  56                   push esi
// 00667eef  ffd1                 call ecx
// 00667ef1  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00667ef7  33c9                 xor ecx, ecx
// 00667ef9  c700507d6600         mov dword ptr [eax], 0x667d50
// 00667eff  83c40c               add esp, 0xc
// 00667f02  89483c               mov dword ptr [eax + 0x3c], ecx
// 00667f05  89482c               mov dword ptr [eax + 0x2c], ecx
// 00667f08  89485c               mov dword ptr [eax + 0x5c], ecx
// 00667f0b  89484c               mov dword ptr [eax + 0x4c], ecx
// 00667f0e  894840               mov dword ptr [eax + 0x40], ecx
// 00667f11  894830               mov dword ptr [eax + 0x30], ecx
// 00667f14  894860               mov dword ptr [eax + 0x60], ecx
// 00667f17  894850               mov dword ptr [eax + 0x50], ecx
// 00667f1a  894844               mov dword ptr [eax + 0x44], ecx
// 00667f1d  894834               mov dword ptr [eax + 0x34], ecx
// 00667f20  894864               mov dword ptr [eax + 0x64], ecx
// 00667f23  894854               mov dword ptr [eax + 0x54], ecx
// 00667f26  894848               mov dword ptr [eax + 0x48], ecx
// 00667f29  894838               mov dword ptr [eax + 0x38], ecx
// 00667f2c  894868               mov dword ptr [eax + 0x68], ecx
// 00667f2f  894858               mov dword ptr [eax + 0x58], ecx
// 00667f32  5e                   pop esi
// 00667f33  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
