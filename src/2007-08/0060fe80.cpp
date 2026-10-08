// from server: 100% by auto
// roc 2007-08 0060fe80  unit: RBX::Ball  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fe80
//
// 0060fe80  56                   push esi
// 0060fe81  57                   push edi
// 0060fe82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060fe86  8b7710               mov esi, dword ptr [edi + 0x10]
// 0060fe89  807e1501             cmp byte ptr [esi + 0x15], 1
// 0060fe8d  7718                 ja 0x60fea7
// 0060fe8f  33c0                 xor eax, eax
// 0060fe91  8d4e1c               lea ecx, [esi + 0x1c]
// 0060fe94  894618               mov dword ptr [esi + 0x18], eax
// 0060fe97  894e20               mov dword ptr [esi + 0x20], ecx
// 0060fe9a  894624               mov dword ptr [esi + 0x24], eax
// 0060fe9d  894628               mov dword ptr [esi + 0x28], eax
// 0060fea0  89462c               mov dword ptr [esi + 0x2c], eax
// 0060fea3  c6461502             mov byte ptr [esi + 0x15], 2
// 0060fea7  807e1504             cmp byte ptr [esi + 0x15], 4
// 0060feab  7410                 je 0x60febd
// 0060fead  8d4900               lea ecx, [ecx]
// 0060feb0  8bc7                 mov eax, edi
// 0060feb2  e849feffff           call 0x60fd00
// 0060feb7  807e1504             cmp byte ptr [esi + 0x15], 4
// 0060febb  75f3                 jne 0x60feb0
// 0060febd  e80efcffff           call 0x60fad0
// 0060fec2  807e1500             cmp byte ptr [esi + 0x15], 0
// 0060fec6  740d                 je 0x60fed5
// 0060fec8  8bc7                 mov eax, edi
// 0060feca  e831feffff           call 0x60fd00
// 0060fecf  807e1500             cmp byte ptr [esi + 0x15], 0
// 0060fed3  75f3                 jne 0x60fec8
// 0060fed5  b81f85eb51           mov eax, 0x51eb851f
// 0060feda  f76648               mul dword ptr [esi + 0x48]
// 0060fedd  c1ea05               shr edx, 5
// 0060fee0  0faf5650             imul edx, dword ptr [esi + 0x50]
// 0060fee4  5f                   pop edi
// 0060fee5  895640               mov dword ptr [esi + 0x40], edx
// 0060fee8  5e                   pop esi
// 0060fee9  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_fullgc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
