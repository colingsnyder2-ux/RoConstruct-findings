// from server: 100% by auto
// roc 2011-06 0057c7d0  unit: seg_00570000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c7d0
//
// 0057c7d0  56                   push esi
// 0057c7d1  8b742408             mov esi, dword ptr [esp + 8]
// 0057c7d5  8b4604               mov eax, dword ptr [esi + 4]
// 0057c7d8  8b08                 mov ecx, dword ptr [eax]
// 0057c7da  6a6c                 push 0x6c
// 0057c7dc  6a01                 push 1
// 0057c7de  56                   push esi
// 0057c7df  ffd1                 call ecx
// 0057c7e1  89865c010000         mov dword ptr [esi + 0x15c], eax
// 0057c7e7  33c9                 xor ecx, ecx
// 0057c7e9  c70040c65700         mov dword ptr [eax], 0x57c640
// 0057c7ef  83c40c               add esp, 0xc
// 0057c7f2  89483c               mov dword ptr [eax + 0x3c], ecx
// 0057c7f5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0057c7f8  89485c               mov dword ptr [eax + 0x5c], ecx
// 0057c7fb  89484c               mov dword ptr [eax + 0x4c], ecx
// 0057c7fe  894840               mov dword ptr [eax + 0x40], ecx
// 0057c801  894830               mov dword ptr [eax + 0x30], ecx
// 0057c804  894860               mov dword ptr [eax + 0x60], ecx
// 0057c807  894850               mov dword ptr [eax + 0x50], ecx
// 0057c80a  894844               mov dword ptr [eax + 0x44], ecx
// 0057c80d  894834               mov dword ptr [eax + 0x34], ecx
// 0057c810  894864               mov dword ptr [eax + 0x64], ecx
// 0057c813  894854               mov dword ptr [eax + 0x54], ecx
// 0057c816  894848               mov dword ptr [eax + 0x48], ecx
// 0057c819  894838               mov dword ptr [eax + 0x38], ecx
// 0057c81c  894868               mov dword ptr [eax + 0x68], ecx
// 0057c81f  894858               mov dword ptr [eax + 0x58], ecx
// 0057c822  5e                   pop esi
// 0057c823  c3                   ret 
// library jpeg-6b/jchuff.c (function _jinit_huff_encoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
