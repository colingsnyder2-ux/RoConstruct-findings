// roc 2009-12 00625630  unit: seg_00620000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00625630
//
// 00625630  56                   push esi
// 00625631  8b742408             mov esi, dword ptr [esp + 8]
// 00625635  8b4604               mov eax, dword ptr [esi + 4]
// 00625638  8b08                 mov ecx, dword ptr [eax]
// 0062563a  6a6c                 push 0x6c
// 0062563c  6a01                 push 1
// 0062563e  56                   push esi
// 0062563f  ffd1                 call ecx
// 00625641  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00625647  33c9                 xor ecx, ecx
// 00625649  c700b0546200         mov dword ptr [eax], 0x6254b0
// 0062564f  83c40c               add esp, 0xc
// 00625652  89484c               mov dword ptr [eax + 0x4c], ecx
// 00625655  89485c               mov dword ptr [eax + 0x5c], ecx
// 00625658  894850               mov dword ptr [eax + 0x50], ecx
// 0062565b  894860               mov dword ptr [eax + 0x60], ecx
// 0062565e  894854               mov dword ptr [eax + 0x54], ecx
// 00625661  894864               mov dword ptr [eax + 0x64], ecx
// 00625664  894858               mov dword ptr [eax + 0x58], ecx
// 00625667  894868               mov dword ptr [eax + 0x68], ecx
// 0062566a  894840               mov dword ptr [eax + 0x40], ecx
// 0062566d  5e                   pop esi
// 0062566e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _jinit_phuff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
