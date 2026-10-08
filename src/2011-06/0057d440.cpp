// from server: 100% by auto
// roc 2011-06 0057d440  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057d440
//
// 0057d440  56                   push esi
// 0057d441  8b742408             mov esi, dword ptr [esp + 8]
// 0057d445  8b4604               mov eax, dword ptr [esi + 4]
// 0057d448  8b08                 mov ecx, dword ptr [eax]
// 0057d44a  6a6c                 push 0x6c
// 0057d44c  6a01                 push 1
// 0057d44e  56                   push esi
// 0057d44f  ffd1                 call ecx
// 0057d451  89865c010000         mov dword ptr [esi + 0x15c], eax
// 0057d457  33c9                 xor ecx, ecx
// 0057d459  c700c0d25700         mov dword ptr [eax], 0x57d2c0
// 0057d45f  83c40c               add esp, 0xc
// 0057d462  89484c               mov dword ptr [eax + 0x4c], ecx
// 0057d465  89485c               mov dword ptr [eax + 0x5c], ecx
// 0057d468  894850               mov dword ptr [eax + 0x50], ecx
// 0057d46b  894860               mov dword ptr [eax + 0x60], ecx
// 0057d46e  894854               mov dword ptr [eax + 0x54], ecx
// 0057d471  894864               mov dword ptr [eax + 0x64], ecx
// 0057d474  894858               mov dword ptr [eax + 0x58], ecx
// 0057d477  894868               mov dword ptr [eax + 0x68], ecx
// 0057d47a  894840               mov dword ptr [eax + 0x40], ecx
// 0057d47d  5e                   pop esi
// 0057d47e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _jinit_phuff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
