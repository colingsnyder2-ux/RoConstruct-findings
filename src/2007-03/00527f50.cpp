// roc 2007-03 00527f50  unit: seg_00520000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527f50
//
// 00527f50  56                   push esi
// 00527f51  8b742408             mov esi, dword ptr [esp + 8]
// 00527f55  8b4604               mov eax, dword ptr [esi + 4]
// 00527f58  8b08                 mov ecx, dword ptr [eax]
// 00527f5a  6a6c                 push 0x6c
// 00527f5c  6a01                 push 1
// 00527f5e  56                   push esi
// 00527f5f  ffd1                 call ecx
// 00527f61  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00527f67  33c9                 xor ecx, ecx
// 00527f69  c700c07d5200         mov dword ptr [eax], 0x527dc0
// 00527f6f  83c40c               add esp, 0xc
// 00527f72  89484c               mov dword ptr [eax + 0x4c], ecx
// 00527f75  89485c               mov dword ptr [eax + 0x5c], ecx
// 00527f78  894850               mov dword ptr [eax + 0x50], ecx
// 00527f7b  894860               mov dword ptr [eax + 0x60], ecx
// 00527f7e  894854               mov dword ptr [eax + 0x54], ecx
// 00527f81  894864               mov dword ptr [eax + 0x64], ecx
// 00527f84  894858               mov dword ptr [eax + 0x58], ecx
// 00527f87  894868               mov dword ptr [eax + 0x68], ecx
// 00527f8a  894840               mov dword ptr [eax + 0x40], ecx
// 00527f8d  5e                   pop esi
// 00527f8e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _jinit_phuff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
