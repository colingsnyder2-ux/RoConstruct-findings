// from server: 100% by auto
// roc 2012-06 00933330  unit: RBX::BallCellContact  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933330
//
// 00933330  56                   push esi
// 00933331  57                   push edi
// 00933332  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00933336  8b7710               mov esi, dword ptr [edi + 0x10]
// 00933339  807e1501             cmp byte ptr [esi + 0x15], 1
// 0093333d  7718                 ja 0x933357
// 0093333f  33c0                 xor eax, eax
// 00933341  8d4e1c               lea ecx, [esi + 0x1c]
// 00933344  894618               mov dword ptr [esi + 0x18], eax
// 00933347  894e20               mov dword ptr [esi + 0x20], ecx
// 0093334a  894624               mov dword ptr [esi + 0x24], eax
// 0093334d  894628               mov dword ptr [esi + 0x28], eax
// 00933350  89462c               mov dword ptr [esi + 0x2c], eax
// 00933353  c6461502             mov byte ptr [esi + 0x15], 2
// 00933357  807e1504             cmp byte ptr [esi + 0x15], 4
// 0093335b  7410                 je 0x93336d
// 0093335d  8d4900               lea ecx, [ecx]
// 00933360  8bc7                 mov eax, edi
// 00933362  e849feffff           call 0x9331b0
// 00933367  807e1504             cmp byte ptr [esi + 0x15], 4
// 0093336b  75f3                 jne 0x933360
// 0093336d  e80efcffff           call 0x932f80
// 00933372  807e1500             cmp byte ptr [esi + 0x15], 0
// 00933376  740d                 je 0x933385
// 00933378  8bc7                 mov eax, edi
// 0093337a  e831feffff           call 0x9331b0
// 0093337f  807e1500             cmp byte ptr [esi + 0x15], 0
// 00933383  75f3                 jne 0x933378
// 00933385  b81f85eb51           mov eax, 0x51eb851f
// 0093338a  f76648               mul dword ptr [esi + 0x48]
// 0093338d  c1ea05               shr edx, 5
// 00933390  0faf5650             imul edx, dword ptr [esi + 0x50]
// 00933394  5f                   pop edi
// 00933395  895640               mov dword ptr [esi + 0x40], edx
// 00933398  5e                   pop esi
// 00933399  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_fullgc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
