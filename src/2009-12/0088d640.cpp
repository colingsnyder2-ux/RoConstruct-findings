// roc 2009-12 0088d640  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d640
//
// 0088d640  6aff                 push -1
// 0088d642  68688a9500           push 0x958a68
// 0088d647  64a100000000         mov eax, dword ptr fs:[0]
// 0088d64d  50                   push eax
// 0088d64e  83ec18               sub esp, 0x18
// 0088d651  53                   push ebx
// 0088d652  55                   push ebp
// 0088d653  56                   push esi
// 0088d654  57                   push edi
// 0088d655  a10052b600           mov eax, dword ptr [0xb65200]
// 0088d65a  33c4                 xor eax, esp
// 0088d65c  50                   push eax
// 0088d65d  8d44242c             lea eax, [esp + 0x2c]
// 0088d661  64a300000000         mov dword ptr fs:[0], eax
// 0088d667  8bd9                 mov ebx, ecx
// 0088d669  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088d66d  8b03                 mov eax, dword ptr [ebx]
// 0088d66f  50                   push eax
// 0088d670  8d4c241c             lea ecx, [esp + 0x1c]
// 0088d674  e85d70f6ff           call 0x7f46d6
// 0088d679  33ed                 xor ebp, ebp
// 0088d67b  396b24               cmp dword ptr [ebx + 0x24], ebp
// 0088d67e  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0088d686  0f8e98000000         jle 0x88d724
// 0088d68c  8d642400             lea esp, [esp]
// 0088d690  85ed                 test ebp, ebp
// 0088d692  0f8cd5000000         jl 0x88d76d
// 0088d698  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 0088d69b  0f8dcc000000         jge 0x88d76d
// 0088d6a1  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0088d6a4  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 0088d6a7  8d04a9               lea eax, [ecx + ebp*4]
// 0088d6aa  33ff                 xor edi, edi
// 0088d6ac  397e2c               cmp dword ptr [esi + 0x2c], edi
// 0088d6af  7e2f                 jle 0x88d6e0
// 0088d6b1  33db                 xor ebx, ebx
// 0088d6b3  85db                 test ebx, ebx
// 0088d6b5  0f8cb2000000         jl 0x88d76d
// 0088d6bb  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0088d6be  0f8da9000000         jge 0x88d76d
// 0088d6c4  8b4628               mov eax, dword ptr [esi + 0x28]
// 0088d6c7  03c3                 add eax, ebx
// 0088d6c9  50                   push eax
// 0088d6ca  8d4c241c             lea ecx, [esp + 0x1c]
// 0088d6ce  e8e1930900           call 0x926ab4
// 0088d6d3  47                   inc edi
// 0088d6d4  83c310               add ebx, 0x10
// 0088d6d7  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0088d6da  7cd7                 jl 0x88d6b3
// 0088d6dc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0088d6e0  56                   push esi
// 0088d6e1  8d54241c             lea edx, [esp + 0x1c]
// 0088d6e5  52                   push edx
// 0088d6e6  8bcb                 mov ecx, ebx
// 0088d6e8  e863fcffff           call 0x88d350
// 0088d6ed  6a00                 push 0
// 0088d6ef  8d4c241c             lea ecx, [esp + 0x1c]
// 0088d6f3  e86c8f0900           call 0x926664
// 0088d6f8  837e2006             cmp dword ptr [esi + 0x20], 6
// 0088d6fc  7e1c                 jle 0x88d71a
// 0088d6fe  6a01                 push 1
// 0088d700  55                   push ebp
// 0088d701  8d4b1c               lea ecx, [ebx + 0x1c]
// 0088d704  e877fbf9ff           call 0x82d280
// 0088d709  8bce                 mov ecx, esi
// 0088d70b  e8d0feffff           call 0x88d5e0
// 0088d710  56                   push esi
// 0088d711  e84461f6ff           call 0x7f385a
// 0088d716  83c404               add esp, 4
// 0088d719  4d                   dec ebp
// 0088d71a  45                   inc ebp
// 0088d71b  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 0088d71e  0f8c6cffffff         jl 0x88d690
// 0088d724  837b2400             cmp dword ptr [ebx + 0x24], 0
// 0088d728  751e                 jne 0x88d748
// 0088d72a  837b1000             cmp dword ptr [ebx + 0x10], 0
// 0088d72e  7418                 je 0x88d748
// 0088d730  8b03                 mov eax, dword ptr [ebx]
// 0088d732  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088d735  6843cd0a00           push 0xacd43
// 0088d73a  50                   push eax
// 0088d73b  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0088d741  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0088d748  8d4c2418             lea ecx, [esp + 0x18]
// 0088d74c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0088d754  e8776ff6ff           call 0x7f46d0
// 0088d759  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088d75d  64890d00000000       mov dword ptr fs:[0], ecx
// 0088d764  59                   pop ecx
// 0088d765  5f                   pop edi
// 0088d766  5e                   pop esi
// 0088d767  5d                   pop ebp
// 0088d768  5b                   pop ebx
// 0088d769  83c424               add esp, 0x24
// 0088d76c  c3                   ret 
// 0088d76d  e89a63f6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnAnimate@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp