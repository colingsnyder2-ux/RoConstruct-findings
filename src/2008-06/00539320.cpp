// roc 2008-06 00539320  unit: seg_00530000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00539320
//
// 00539320  56                   push esi
// 00539321  8b742408             mov esi, dword ptr [esp + 8]
// 00539325  8b4604               mov eax, dword ptr [esi + 4]
// 00539328  8b08                 mov ecx, dword ptr [eax]
// 0053932a  6a6c                 push 0x6c
// 0053932c  6a01                 push 1
// 0053932e  56                   push esi
// 0053932f  ffd1                 call ecx
// 00539331  89865c010000         mov dword ptr [esi + 0x15c], eax
// 00539337  33c9                 xor ecx, ecx
// 00539339  c700a0915300         mov dword ptr [eax], 0x5391a0
// 0053933f  83c40c               add esp, 0xc
// 00539342  89484c               mov dword ptr [eax + 0x4c], ecx
// 00539345  89485c               mov dword ptr [eax + 0x5c], ecx
// 00539348  894850               mov dword ptr [eax + 0x50], ecx
// 0053934b  894860               mov dword ptr [eax + 0x60], ecx
// 0053934e  894854               mov dword ptr [eax + 0x54], ecx
// 00539351  894864               mov dword ptr [eax + 0x64], ecx
// 00539354  894858               mov dword ptr [eax + 0x58], ecx
// 00539357  894868               mov dword ptr [eax + 0x68], ecx
// 0053935a  894840               mov dword ptr [eax + 0x40], ecx
// 0053935d  5e                   pop esi
// 0053935e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _jinit_phuff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
