// roc 2008-06 00533d20  unit: seg_00530000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533d20
//
// 00533d20  56                   push esi
// 00533d21  8b742408             mov esi, dword ptr [esp + 8]
// 00533d25  8b4604               mov eax, dword ptr [esi + 4]
// 00533d28  8b08                 mov ecx, dword ptr [eax]
// 00533d2a  57                   push edi
// 00533d2b  6a1c                 push 0x1c
// 00533d2d  6a01                 push 1
// 00533d2f  56                   push esi
// 00533d30  ffd1                 call ecx
// 00533d32  8bf8                 mov edi, eax
// 00533d34  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 00533d3a  83c40c               add esp, 0xc
// 00533d3d  c707203c5300         mov dword ptr [edi], 0x533c20
// 00533d43  c7470800000000       mov dword ptr [edi + 8], 0
// 00533d4a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00533d51  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00533d55  7459                 je 0x533db0
// 00533d57  807c241000           cmp byte ptr [esp + 0x10], 0
// 00533d5c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00533d62  894710               mov dword ptr [edi + 0x10], eax
// 00533d65  742f                 je 0x533d96
// 00533d67  8b5660               mov edx, dword ptr [esi + 0x60]
// 00533d6a  55                   push ebp
// 00533d6b  8b6e04               mov ebp, dword ptr [esi + 4]
// 00533d6e  50                   push eax
// 00533d6f  50                   push eax
// 00533d70  52                   push edx
// 00533d71  e89a1dffff           call 0x525b10
// 00533d76  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00533d79  83c408               add esp, 8
// 00533d7c  50                   push eax
// 00533d7d  8b4664               mov eax, dword ptr [esi + 0x64]
// 00533d80  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00533d84  50                   push eax
// 00533d85  6a00                 push 0
// 00533d87  6a01                 push 1
// 00533d89  56                   push esi
// 00533d8a  ffd1                 call ecx
// 00533d8c  83c418               add esp, 0x18
// 00533d8f  5d                   pop ebp
// 00533d90  894708               mov dword ptr [edi + 8], eax
// 00533d93  5f                   pop edi
// 00533d94  5e                   pop esi
// 00533d95  c3                   ret 
// 00533d96  8b5604               mov edx, dword ptr [esi + 4]
// 00533d99  8b4a08               mov ecx, dword ptr [edx + 8]
// 00533d9c  50                   push eax
// 00533d9d  8b4664               mov eax, dword ptr [esi + 0x64]
// 00533da0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00533da4  50                   push eax
// 00533da5  6a01                 push 1
// 00533da7  56                   push esi
// 00533da8  ffd1                 call ecx
// 00533daa  83c410               add esp, 0x10
// 00533dad  89470c               mov dword ptr [edi + 0xc], eax
// 00533db0  5f                   pop edi
// 00533db1  5e                   pop esi
// 00533db2  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
