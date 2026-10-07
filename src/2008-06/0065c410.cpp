// roc 2008-06 0065c410  unit: RBX::BallBallContact  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c410
//
// 0065c410  56                   push esi
// 0065c411  57                   push edi
// 0065c412  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065c416  8b7710               mov esi, dword ptr [edi + 0x10]
// 0065c419  807e1501             cmp byte ptr [esi + 0x15], 1
// 0065c41d  7718                 ja 0x65c437
// 0065c41f  33c0                 xor eax, eax
// 0065c421  8d4e1c               lea ecx, [esi + 0x1c]
// 0065c424  894618               mov dword ptr [esi + 0x18], eax
// 0065c427  894e20               mov dword ptr [esi + 0x20], ecx
// 0065c42a  894624               mov dword ptr [esi + 0x24], eax
// 0065c42d  894628               mov dword ptr [esi + 0x28], eax
// 0065c430  89462c               mov dword ptr [esi + 0x2c], eax
// 0065c433  c6461502             mov byte ptr [esi + 0x15], 2
// 0065c437  807e1504             cmp byte ptr [esi + 0x15], 4
// 0065c43b  7410                 je 0x65c44d
// 0065c43d  8d4900               lea ecx, [ecx]
// 0065c440  8bc7                 mov eax, edi
// 0065c442  e849feffff           call 0x65c290
// 0065c447  807e1504             cmp byte ptr [esi + 0x15], 4
// 0065c44b  75f3                 jne 0x65c440
// 0065c44d  e80efcffff           call 0x65c060
// 0065c452  807e1500             cmp byte ptr [esi + 0x15], 0
// 0065c456  740d                 je 0x65c465
// 0065c458  8bc7                 mov eax, edi
// 0065c45a  e831feffff           call 0x65c290
// 0065c45f  807e1500             cmp byte ptr [esi + 0x15], 0
// 0065c463  75f3                 jne 0x65c458
// 0065c465  b81f85eb51           mov eax, 0x51eb851f
// 0065c46a  f76648               mul dword ptr [esi + 0x48]
// 0065c46d  c1ea05               shr edx, 5
// 0065c470  0faf5650             imul edx, dword ptr [esi + 0x50]
// 0065c474  5f                   pop edi
// 0065c475  895640               mov dword ptr [esi + 0x40], edx
// 0065c478  5e                   pop esi
// 0065c479  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_fullgc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
