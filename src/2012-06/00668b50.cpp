// roc 2012-06 00668b50  unit: seg_00660000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668b50
//
// 00668b50  56                   push esi
// 00668b51  8b742408             mov esi, dword ptr [esp + 8]
// 00668b55  8b4604               mov eax, dword ptr [esi + 4]
// 00668b58  8b08                 mov ecx, dword ptr [eax]
// 00668b5a  6a6c                 push 0x6c
// 00668b5c  6a01                 push 1
// 00668b5e  56                   push esi
// 00668b5f  ffd1                 call ecx
// 00668b61  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00668b67  33c9                 xor ecx, ecx
// 00668b69  c700d0896600         mov dword ptr [eax], 0x6689d0
// 00668b6f  83c40c               add esp, 0xc
// 00668b72  89484c               mov dword ptr [eax + 0x4c], ecx
// 00668b75  89485c               mov dword ptr [eax + 0x5c], ecx
// 00668b78  894850               mov dword ptr [eax + 0x50], ecx
// 00668b7b  894860               mov dword ptr [eax + 0x60], ecx
// 00668b7e  894854               mov dword ptr [eax + 0x54], ecx
// 00668b81  894864               mov dword ptr [eax + 0x64], ecx
// 00668b84  894858               mov dword ptr [eax + 0x58], ecx
// 00668b87  894868               mov dword ptr [eax + 0x68], ecx
// 00668b8a  894840               mov dword ptr [eax + 0x40], ecx
// 00668b8d  5e                   pop esi
// 00668b8e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _jinit_phuff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
