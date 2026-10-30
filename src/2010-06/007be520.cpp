// roc 2010-06 007be520  unit: CXTPImageManagerResource::CBitmapDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007be520
//
// 007be520  6aff                 push -1
// 007be522  68f8f59a00           push 0x9af5f8
// 007be527  64a100000000         mov eax, dword ptr fs:[0]
// 007be52d  50                   push eax
// 007be52e  83ec1c               sub esp, 0x1c
// 007be531  53                   push ebx
// 007be532  55                   push ebp
// 007be533  56                   push esi
// 007be534  57                   push edi
// 007be535  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007be53a  33c4                 xor eax, esp
// 007be53c  50                   push eax
// 007be53d  8d442430             lea eax, [esp + 0x30]
// 007be541  64a300000000         mov dword ptr fs:[0], eax
// 007be547  8b442444             mov eax, dword ptr [esp + 0x44]
// 007be54b  8b742440             mov esi, dword ptr [esp + 0x40]
// 007be54f  6a02                 push 2
// 007be551  50                   push eax
// 007be552  56                   push esi
// 007be553  ff155ca39e00         call dword ptr [0x9ea35c]
// 007be559  8be8                 mov ebp, eax
// 007be55b  85ed                 test ebp, ebp
// 007be55d  0f849a000000         je 0x7be5fd
// 007be563  55                   push ebp
// 007be564  56                   push esi
// 007be565  ff1560a39e00         call dword ptr [0x9ea360]
// 007be56b  8bd8                 mov ebx, eax
// 007be56d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007be571  85db                 test ebx, ebx
// 007be573  0f8484000000         je 0x7be5fd
// 007be579  53                   push ebx
// 007be57a  ff15eca29e00         call dword ptr [0x9ea2ec]
// 007be580  8bf8                 mov edi, eax
// 007be582  85ff                 test edi, edi
// 007be584  7477                 je 0x7be5fd
// 007be586  8b7708               mov esi, dword ptr [edi + 8]
// 007be589  0faf7704             imul esi, dword ptr [edi + 4]
// 007be58d  03f6                 add esi, esi
// 007be58f  03f6                 add esi, esi
// 007be591  66837f0e20           cmp word ptr [edi + 0xe], 0x20
// 007be596  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007be59e  0f85d5000000         jne 0x7be679
// 007be5a4  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007be5a8  55                   push ebp
// 007be5a9  51                   push ecx
// 007be5aa  ff1564a39e00         call dword ptr [0x9ea364]
// 007be5b0  8d5628               lea edx, [esi + 0x28]
// 007be5b3  3bc2                 cmp eax, edx
// 007be5b5  0f82be000000         jb 0x7be679
// 007be5bb  8d4c2420             lea ecx, [esp + 0x20]
// 007be5bf  e8eae71b00           call 0x97cdae
// 007be5c4  33ed                 xor ebp, ebp
// 007be5c6  55                   push ebp
// 007be5c7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007be5cb  ff15aca09e00         call dword ptr [0x9ea0ac]
// 007be5d1  50                   push eax
// 007be5d2  8d4c2424             lea ecx, [esp + 0x24]
// 007be5d6  e8b5e71b00           call 0x97cd90
// 007be5db  6a34                 push 0x34
// 007be5dd  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 007be5e3  8bd8                 mov ebx, eax
// 007be5e5  83c404               add esp, 4
// 007be5e8  3bdd                 cmp ebx, ebp
// 007be5ea  7527                 jne 0x7be613
// 007be5ec  8d4c2420             lea ecx, [esp + 0x20]
// 007be5f0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007be5f8  e8abe71b00           call 0x97cda8
// 007be5fd  33c0                 xor eax, eax
// 007be5ff  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007be603  64890d00000000       mov dword ptr fs:[0], ecx
// 007be60a  59                   pop ecx
// 007be60b  5f                   pop edi
// 007be60c  5e                   pop esi
// 007be60d  5d                   pop ebp
// 007be60e  5b                   pop ebx
// 007be60f  83c428               add esp, 0x28
// 007be612  c3                   ret 
// 007be613  6a28                 push 0x28
// 007be615  57                   push edi
// 007be616  53                   push ebx
// 007be617  e894e1ffff           call 0x7bc7b0
// 007be61c  83c40c               add esp, 0xc
// 007be61f  55                   push ebp
// 007be620  55                   push ebp
// 007be621  8d44241c             lea eax, [esp + 0x1c]
// 007be625  50                   push eax
// 007be626  55                   push ebp
// 007be627  897314               mov dword ptr [ebx + 0x14], esi
// 007be62a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007be62e  53                   push ebx
// 007be62f  51                   push ecx
// 007be630  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007be634  ff15b0a09e00         call dword ptr [0x9ea0b0]
// 007be63a  8be8                 mov ebp, eax
// 007be63c  85ed                 test ebp, ebp
// 007be63e  741a                 je 0x7be65a
// 007be640  8b442414             mov eax, dword ptr [esp + 0x14]
// 007be644  85c0                 test eax, eax
// 007be646  7412                 je 0x7be65a
// 007be648  56                   push esi
// 007be649  83c728               add edi, 0x28
// 007be64c  57                   push edi
// 007be64d  50                   push eax
// 007be64e  e85de1ffff           call 0x7bc7b0
// 007be653  83c40c               add esp, 0xc
// 007be656  896c2418             mov dword ptr [esp + 0x18], ebp
// 007be65a  53                   push ebx
// 007be65b  ff1508aa9e00         call dword ptr [0x9eaa08]
// 007be661  83c404               add esp, 4
// 007be664  8d4c2420             lea ecx, [esp + 0x20]
// 007be668  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007be670  e833e71b00           call 0x97cda8
// 007be675  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007be679  53                   push ebx
// 007be67a  ff15f0a29e00         call dword ptr [0x9ea2f0]
// 007be680  8b442418             mov eax, dword ptr [esp + 0x18]
// 007be684  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007be688  64890d00000000       mov dword ptr fs:[0], ecx
// 007be68f  59                   pop ecx
// 007be690  5f                   pop edi
// 007be691  5e                   pop esi
// 007be692  5d                   pop ebp
// 007be693  5b                   pop ebx
// 007be694  83c428               add esp, 0x28
// 007be697  c3                   ret 
// copied from an identical function in another client (function ?LoadAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAUHINSTANCE__@@PBD@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp