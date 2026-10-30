// roc 2007-03 0054e530  unit: seg_00540000  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054e530
//
// 0054e530  6aff                 push -1
// 0054e532  64a100000000         mov eax, dword ptr fs:[0]
// 0054e538  68f8347500           push 0x7534f8
// 0054e53d  50                   push eax
// 0054e53e  64892500000000       mov dword ptr fs:[0], esp
// 0054e545  83ec6c               sub esp, 0x6c
// 0054e548  53                   push ebx
// 0054e549  55                   push ebp
// 0054e54a  56                   push esi
// 0054e54b  8bf1                 mov esi, ecx
// 0054e54d  f6461c02             test byte ptr [esi + 0x1c], 2
// 0054e551  57                   push edi
// 0054e552  0f84e5000000         je 0x54e63d
// 0054e558  8d4c2424             lea ecx, [esp + 0x24]
// 0054e55c  ff15e8e57700         call dword ptr [0x77e5e8]
// 0054e562  33db                 xor ebx, ebx
// 0054e564  885c2460             mov byte ptr [esp + 0x60], bl
// 0054e568  885c2465             mov byte ptr [esp + 0x65], bl
// 0054e56c  895c2468             mov dword ptr [esp + 0x68], ebx
// 0054e570  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0054e574  895c2470             mov dword ptr [esp + 0x70], ebx
// 0054e578  895c2474             mov dword ptr [esp + 0x74], ebx
// 0054e57c  c744247810000000     mov dword ptr [esp + 0x78], 0x10
// 0054e584  c7442424047a7a00     mov dword ptr [esp + 0x24], 0x7a7a04
// 0054e58c  f6461c01             test byte ptr [esi + 0x1c], 1
// 0054e590  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0054e596  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 0054e59d  7534                 jne 0x54e5d3
// 0054e59f  6aff                 push -1
// 0054e5a1  6aff                 push -1
// 0054e5a3  8d44241b             lea eax, [esp + 0x1b]
// 0054e5a7  50                   push eax
// 0054e5a8  8d4c2430             lea ecx, [esp + 0x30]
// 0054e5ac  e8efcaffff           call 0x54b0a0
// 0054e5b1  8b4604               mov eax, dword ptr [esi + 4]
// 0054e5b4  8b7804               mov edi, dword ptr [eax + 4]
// 0054e5b7  3bf8                 cmp edi, eax
// 0054e5b9  7502                 jne 0x54e5bd
// 0054e5bb  ffd5                 call ebp
// 0054e5bd  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054e5c0  7502                 jne 0x54e5c4
// 0054e5c2  ffd5                 call ebp
// 0054e5c4  8b4f08               mov ecx, dword ptr [edi + 8]
// 0054e5c7  8b11                 mov edx, dword ptr [ecx]
// 0054e5c9  8b5238               mov edx, dword ptr [edx + 0x38]
// 0054e5cc  8d442424             lea eax, [esp + 0x24]
// 0054e5d0  50                   push eax
// 0054e5d1  ffd2                 call edx
// 0054e5d3  8b4604               mov eax, dword ptr [esi + 4]
// 0054e5d6  8b38                 mov edi, dword ptr [eax]
// 0054e5d8  3bf8                 cmp edi, eax
// 0054e5da  7502                 jne 0x54e5de
// 0054e5dc  ffd5                 call ebp
// 0054e5de  8b4f08               mov ecx, dword ptr [edi + 8]
// 0054e5e1  ff1558e77700         call dword ptr [0x77e758]
// 0054e5e7  8b4604               mov eax, dword ptr [esi + 4]
// 0054e5ea  8b10                 mov edx, dword ptr [eax]
// 0054e5ec  b901000000           mov ecx, 1
// 0054e5f1  51                   push ecx
// 0054e5f2  89442424             mov dword ptr [esp + 0x24], eax
// 0054e5f6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054e5fa  83ec0c               sub esp, 0xc
// 0054e5fd  8bc4                 mov eax, esp
// 0054e5ff  33ff                 xor edi, edi
// 0054e601  8938                 mov dword ptr [eax], edi
// 0054e603  897004               mov dword ptr [eax + 4], esi
// 0054e606  895008               mov dword ptr [eax + 8], edx
// 0054e609  83ec0c               sub esp, 0xc
// 0054e60c  8bc4                 mov eax, esp
// 0054e60e  8918                 mov dword ptr [eax], ebx
// 0054e610  8d542430             lea edx, [esp + 0x30]
// 0054e614  8bee                 mov ebp, esi
// 0054e616  896804               mov dword ptr [eax + 4], ebp
// 0054e619  52                   push edx
// 0054e61a  894808               mov dword ptr [eax + 8], ecx
// 0054e61d  e8eef2ffff           call 0x54d910
// 0054e622  83661cfd             and dword ptr [esi + 0x1c], 0xfffffffd
// 0054e626  83c420               add esp, 0x20
// 0054e629  8d4c2424             lea ecx, [esp + 0x24]
// 0054e62d  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 0054e638  e8f3d1ffff           call 0x54b830
// 0054e63d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0054e641  5f                   pop edi
// 0054e642  5e                   pop esi
// 0054e643  5d                   pop ebp
// 0054e644  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e64b  5b                   pop ebx
// 0054e64c  83c478               add esp, 0x78
// 0054e64f  c3                   ret 
// copied from an identical function in another client (function ?close@chain_impl@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_ad9867ec1f020831.cpp