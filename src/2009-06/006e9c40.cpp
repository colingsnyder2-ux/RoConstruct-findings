// roc 2009-06 006e9c40  unit: RBX::PartDropTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9c40
//
// 006e9c40  56                   push esi
// 006e9c41  57                   push edi
// 006e9c42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e9c46  8b7710               mov esi, dword ptr [edi + 0x10]
// 006e9c49  807e1501             cmp byte ptr [esi + 0x15], 1
// 006e9c4d  7718                 ja 0x6e9c67
// 006e9c4f  33c0                 xor eax, eax
// 006e9c51  8d4e1c               lea ecx, [esi + 0x1c]
// 006e9c54  894618               mov dword ptr [esi + 0x18], eax
// 006e9c57  894e20               mov dword ptr [esi + 0x20], ecx
// 006e9c5a  894624               mov dword ptr [esi + 0x24], eax
// 006e9c5d  894628               mov dword ptr [esi + 0x28], eax
// 006e9c60  89462c               mov dword ptr [esi + 0x2c], eax
// 006e9c63  c6461502             mov byte ptr [esi + 0x15], 2
// 006e9c67  807e1504             cmp byte ptr [esi + 0x15], 4
// 006e9c6b  7410                 je 0x6e9c7d
// 006e9c6d  8d4900               lea ecx, [ecx]
// 006e9c70  8bc7                 mov eax, edi
// 006e9c72  e849feffff           call 0x6e9ac0
// 006e9c77  807e1504             cmp byte ptr [esi + 0x15], 4
// 006e9c7b  75f3                 jne 0x6e9c70
// 006e9c7d  e80efcffff           call 0x6e9890
// 006e9c82  807e1500             cmp byte ptr [esi + 0x15], 0
// 006e9c86  740d                 je 0x6e9c95
// 006e9c88  8bc7                 mov eax, edi
// 006e9c8a  e831feffff           call 0x6e9ac0
// 006e9c8f  807e1500             cmp byte ptr [esi + 0x15], 0
// 006e9c93  75f3                 jne 0x6e9c88
// 006e9c95  b81f85eb51           mov eax, 0x51eb851f
// 006e9c9a  f76648               mul dword ptr [esi + 0x48]
// 006e9c9d  c1ea05               shr edx, 5
// 006e9ca0  0faf5650             imul edx, dword ptr [esi + 0x50]
// 006e9ca4  5f                   pop edi
// 006e9ca5  895640               mov dword ptr [esi + 0x40], edx
// 006e9ca8  5e                   pop esi
// 006e9ca9  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_fullgc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
