// roc 2008-06 00660e70  unit: RBX::FilterStairs  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660e70
//
// 00660e70  55                   push ebp
// 00660e71  56                   push esi
// 00660e72  57                   push edi
// 00660e73  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 00660e76  57                   push edi
// 00660e77  8bf0                 mov esi, eax
// 00660e79  e822e8ffff           call 0x65f6a0
// 00660e7e  8be8                 mov ebp, eax
// 00660e80  892e                 mov dword ptr [esi], ebp
// 00660e82  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00660e85  894608               mov dword ptr [esi + 8], eax
// 00660e88  33c0                 xor eax, eax
// 00660e8a  895e0c               mov dword ptr [esi + 0xc], ebx
// 00660e8d  897e10               mov dword ptr [esi + 0x10], edi
// 00660e90  897330               mov dword ptr [ebx + 0x30], esi
// 00660e93  83c9ff               or ecx, 0xffffffff
// 00660e96  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00660e99  894e20               mov dword ptr [esi + 0x20], ecx
// 00660e9c  50                   push eax
// 00660e9d  894618               mov dword ptr [esi + 0x18], eax
// 00660ea0  894624               mov dword ptr [esi + 0x24], eax
// 00660ea3  894628               mov dword ptr [esi + 0x28], eax
// 00660ea6  89462c               mov dword ptr [esi + 0x2c], eax
// 00660ea9  33c9                 xor ecx, ecx
// 00660eab  66894e30             mov word ptr [esi + 0x30], cx
// 00660eaf  884632               mov byte ptr [esi + 0x32], al
// 00660eb2  894614               mov dword ptr [esi + 0x14], eax
// 00660eb5  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00660eb8  50                   push eax
// 00660eb9  57                   push edi
// 00660eba  895520               mov dword ptr [ebp + 0x20], edx
// 00660ebd  c6454b02             mov byte ptr [ebp + 0x4b], 2
// 00660ec1  e84adaffff           call 0x65e910
// 00660ec6  894604               mov dword ptr [esi + 4], eax
// 00660ec9  8b4f08               mov ecx, dword ptr [edi + 8]
// 00660ecc  8901                 mov dword ptr [ecx], eax
// 00660ece  c7410805000000       mov dword ptr [ecx + 8], 5
// 00660ed5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00660ed8  2b4708               sub eax, dword ptr [edi + 8]
// 00660edb  be10000000           mov esi, 0x10
// 00660ee0  83c410               add esp, 0x10
// 00660ee3  3bc6                 cmp eax, esi
// 00660ee5  7f0b                 jg 0x660ef2
// 00660ee7  6a01                 push 1
// 00660ee9  57                   push edi
// 00660eea  e8610cfcff           call 0x621b50
// 00660eef  83c408               add esp, 8
// 00660ef2  017708               add dword ptr [edi + 8], esi
// 00660ef5  8b4708               mov eax, dword ptr [edi + 8]
// 00660ef8  8928                 mov dword ptr [eax], ebp
// 00660efa  c7400809000000       mov dword ptr [eax + 8], 9
// 00660f01  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00660f04  2b4f08               sub ecx, dword ptr [edi + 8]
// 00660f07  3bce                 cmp ecx, esi
// 00660f09  7f0b                 jg 0x660f16
// 00660f0b  6a01                 push 1
// 00660f0d  57                   push edi
// 00660f0e  e83d0cfcff           call 0x621b50
// 00660f13  83c408               add esp, 8
// 00660f16  017708               add dword ptr [edi + 8], esi
// 00660f19  5f                   pop edi
// 00660f1a  5e                   pop esi
// 00660f1b  5d                   pop ebp
// 00660f1c  c3                   ret 
// library lua-5.1.4/lparser.c (function _open_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
