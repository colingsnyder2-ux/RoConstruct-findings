// from server: 100% by auto
// roc 2010-06 0077f180  unit: seg_00770000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f180
//
// 0077f180  55                   push ebp
// 0077f181  56                   push esi
// 0077f182  57                   push edi
// 0077f183  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 0077f186  57                   push edi
// 0077f187  8bf0                 mov esi, eax
// 0077f189  e802f0ffff           call 0x77e190
// 0077f18e  8be8                 mov ebp, eax
// 0077f190  892e                 mov dword ptr [esi], ebp
// 0077f192  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0077f195  894608               mov dword ptr [esi + 8], eax
// 0077f198  33c0                 xor eax, eax
// 0077f19a  895e0c               mov dword ptr [esi + 0xc], ebx
// 0077f19d  897e10               mov dword ptr [esi + 0x10], edi
// 0077f1a0  897330               mov dword ptr [ebx + 0x30], esi
// 0077f1a3  83c9ff               or ecx, 0xffffffff
// 0077f1a6  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0077f1a9  894e20               mov dword ptr [esi + 0x20], ecx
// 0077f1ac  50                   push eax
// 0077f1ad  894618               mov dword ptr [esi + 0x18], eax
// 0077f1b0  894624               mov dword ptr [esi + 0x24], eax
// 0077f1b3  894628               mov dword ptr [esi + 0x28], eax
// 0077f1b6  89462c               mov dword ptr [esi + 0x2c], eax
// 0077f1b9  33c9                 xor ecx, ecx
// 0077f1bb  66894e30             mov word ptr [esi + 0x30], cx
// 0077f1bf  884632               mov byte ptr [esi + 0x32], al
// 0077f1c2  894614               mov dword ptr [esi + 0x14], eax
// 0077f1c5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0077f1c8  50                   push eax
// 0077f1c9  57                   push edi
// 0077f1ca  895520               mov dword ptr [ebp + 0x20], edx
// 0077f1cd  c6454b02             mov byte ptr [ebp + 0x4b], 2
// 0077f1d1  e80ae2ffff           call 0x77d3e0
// 0077f1d6  894604               mov dword ptr [esi + 4], eax
// 0077f1d9  8b4f08               mov ecx, dword ptr [edi + 8]
// 0077f1dc  8901                 mov dword ptr [ecx], eax
// 0077f1de  c7410805000000       mov dword ptr [ecx + 8], 5
// 0077f1e5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0077f1e8  2b4708               sub eax, dword ptr [edi + 8]
// 0077f1eb  be10000000           mov esi, 0x10
// 0077f1f0  83c410               add esp, 0x10
// 0077f1f3  3bc6                 cmp eax, esi
// 0077f1f5  7f0b                 jg 0x77f202
// 0077f1f7  6a01                 push 1
// 0077f1f9  57                   push edi
// 0077f1fa  e89109fbff           call 0x72fb90
// 0077f1ff  83c408               add esp, 8
// 0077f202  017708               add dword ptr [edi + 8], esi
// 0077f205  8b4708               mov eax, dword ptr [edi + 8]
// 0077f208  8928                 mov dword ptr [eax], ebp
// 0077f20a  c7400809000000       mov dword ptr [eax + 8], 9
// 0077f211  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0077f214  2b4f08               sub ecx, dword ptr [edi + 8]
// 0077f217  3bce                 cmp ecx, esi
// 0077f219  7f0b                 jg 0x77f226
// 0077f21b  6a01                 push 1
// 0077f21d  57                   push edi
// 0077f21e  e86d09fbff           call 0x72fb90
// 0077f223  83c408               add esp, 8
// 0077f226  017708               add dword ptr [edi + 8], esi
// 0077f229  5f                   pop edi
// 0077f22a  5e                   pop esi
// 0077f22b  5d                   pop ebp
// 0077f22c  c3                   ret 
// library lua-5.1.4/lparser.c (function _open_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
