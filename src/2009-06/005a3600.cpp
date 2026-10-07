// roc 2009-06 005a3600  unit: seg_005a0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a3600
//
// 005a3600  56                   push esi
// 005a3601  8b742408             mov esi, dword ptr [esp + 8]
// 005a3605  8b4604               mov eax, dword ptr [esi + 4]
// 005a3608  8b08                 mov ecx, dword ptr [eax]
// 005a360a  6a6c                 push 0x6c
// 005a360c  6a01                 push 1
// 005a360e  56                   push esi
// 005a360f  ffd1                 call ecx
// 005a3611  89865c010000         mov dword ptr [esi + 0x15c], eax
// 005a3617  33c9                 xor ecx, ecx
// 005a3619  c70080345a00         mov dword ptr [eax], 0x5a3480
// 005a361f  83c40c               add esp, 0xc
// 005a3622  89484c               mov dword ptr [eax + 0x4c], ecx
// 005a3625  89485c               mov dword ptr [eax + 0x5c], ecx
// 005a3628  894850               mov dword ptr [eax + 0x50], ecx
// 005a362b  894860               mov dword ptr [eax + 0x60], ecx
// 005a362e  894854               mov dword ptr [eax + 0x54], ecx
// 005a3631  894864               mov dword ptr [eax + 0x64], ecx
// 005a3634  894858               mov dword ptr [eax + 0x58], ecx
// 005a3637  894868               mov dword ptr [eax + 0x68], ecx
// 005a363a  894840               mov dword ptr [eax + 0x40], ecx
// 005a363d  5e                   pop esi
// 005a363e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _jinit_phuff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
