// roc 2011-06 007d6e70  unit: RBX::EquationDisplay  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6e70
//
// 007d6e70  33c0                 xor eax, eax
// 007d6e72  56                   push esi
// 007d6e73  8b7710               mov esi, dword ptr [edi + 0x10]
// 007d6e76  894624               mov dword ptr [esi + 0x24], eax
// 007d6e79  894628               mov dword ptr [esi + 0x28], eax
// 007d6e7c  89462c               mov dword ptr [esi + 0x2c], eax
// 007d6e7f  8b4670               mov eax, dword ptr [esi + 0x70]
// 007d6e82  f6400503             test byte ptr [eax + 5], 3
// 007d6e86  740a                 je 0x7d6e92
// 007d6e88  50                   push eax
// 007d6e89  56                   push esi
// 007d6e8a  e841f5ffff           call 0x7d63d0
// 007d6e8f  83c408               add esp, 8
// 007d6e92  8b4670               mov eax, dword ptr [esi + 0x70]
// 007d6e95  83785004             cmp dword ptr [eax + 0x50], 4
// 007d6e99  7c13                 jl 0x7d6eae
// 007d6e9b  8b4048               mov eax, dword ptr [eax + 0x48]
// 007d6e9e  f6400503             test byte ptr [eax + 5], 3
// 007d6ea2  740a                 je 0x7d6eae
// 007d6ea4  50                   push eax
// 007d6ea5  56                   push esi
// 007d6ea6  e825f5ffff           call 0x7d63d0
// 007d6eab  83c408               add esp, 8
// 007d6eae  8b4710               mov eax, dword ptr [edi + 0x10]
// 007d6eb1  83786804             cmp dword ptr [eax + 0x68], 4
// 007d6eb5  7c13                 jl 0x7d6eca
// 007d6eb7  8b4060               mov eax, dword ptr [eax + 0x60]
// 007d6eba  f6400503             test byte ptr [eax + 5], 3
// 007d6ebe  740a                 je 0x7d6eca
// 007d6ec0  50                   push eax
// 007d6ec1  56                   push esi
// 007d6ec2  e809f5ffff           call 0x7d63d0
// 007d6ec7  83c408               add esp, 8
// 007d6eca  56                   push esi
// 007d6ecb  e860ffffff           call 0x7d6e30
// 007d6ed0  83c404               add esp, 4
// 007d6ed3  c6461501             mov byte ptr [esi + 0x15], 1
// 007d6ed7  5e                   pop esi
// 007d6ed8  c3                   ret 
// library lua-5.1.4/lgc.c (function _markroot)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
