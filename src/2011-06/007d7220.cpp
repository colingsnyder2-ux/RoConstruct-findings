// from server: 100% by auto
// roc 2011-06 007d7220  unit: RBX::EquationDisplay  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d7220
//
// 007d7220  56                   push esi
// 007d7221  57                   push edi
// 007d7222  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d7226  8b7710               mov esi, dword ptr [edi + 0x10]
// 007d7229  807e1501             cmp byte ptr [esi + 0x15], 1
// 007d722d  7718                 ja 0x7d7247
// 007d722f  33c0                 xor eax, eax
// 007d7231  8d4e1c               lea ecx, [esi + 0x1c]
// 007d7234  894618               mov dword ptr [esi + 0x18], eax
// 007d7237  894e20               mov dword ptr [esi + 0x20], ecx
// 007d723a  894624               mov dword ptr [esi + 0x24], eax
// 007d723d  894628               mov dword ptr [esi + 0x28], eax
// 007d7240  89462c               mov dword ptr [esi + 0x2c], eax
// 007d7243  c6461502             mov byte ptr [esi + 0x15], 2
// 007d7247  807e1504             cmp byte ptr [esi + 0x15], 4
// 007d724b  7410                 je 0x7d725d
// 007d724d  8d4900               lea ecx, [ecx]
// 007d7250  8bc7                 mov eax, edi
// 007d7252  e849feffff           call 0x7d70a0
// 007d7257  807e1504             cmp byte ptr [esi + 0x15], 4
// 007d725b  75f3                 jne 0x7d7250
// 007d725d  e80efcffff           call 0x7d6e70
// 007d7262  807e1500             cmp byte ptr [esi + 0x15], 0
// 007d7266  740d                 je 0x7d7275
// 007d7268  8bc7                 mov eax, edi
// 007d726a  e831feffff           call 0x7d70a0
// 007d726f  807e1500             cmp byte ptr [esi + 0x15], 0
// 007d7273  75f3                 jne 0x7d7268
// 007d7275  b81f85eb51           mov eax, 0x51eb851f
// 007d727a  f76648               mul dword ptr [esi + 0x48]
// 007d727d  c1ea05               shr edx, 5
// 007d7280  0faf5650             imul edx, dword ptr [esi + 0x50]
// 007d7284  5f                   pop edi
// 007d7285  895640               mov dword ptr [esi + 0x40], edx
// 007d7288  5e                   pop esi
// 007d7289  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_fullgc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
