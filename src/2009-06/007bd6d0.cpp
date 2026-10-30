// roc 2009-06 007bd6d0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd6d0
//
// 007bd6d0  6aff                 push -1
// 007bd6d2  68c8448700           push 0x8744c8
// 007bd6d7  64a100000000         mov eax, dword ptr fs:[0]
// 007bd6dd  50                   push eax
// 007bd6de  83ec18               sub esp, 0x18
// 007bd6e1  53                   push ebx
// 007bd6e2  55                   push ebp
// 007bd6e3  56                   push esi
// 007bd6e4  57                   push edi
// 007bd6e5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007bd6ea  33c4                 xor eax, esp
// 007bd6ec  50                   push eax
// 007bd6ed  8d44242c             lea eax, [esp + 0x2c]
// 007bd6f1  64a300000000         mov dword ptr fs:[0], eax
// 007bd6f7  8bd9                 mov ebx, ecx
// 007bd6f9  895c2414             mov dword ptr [esp + 0x14], ebx
// 007bd6fd  8b03                 mov eax, dword ptr [ebx]
// 007bd6ff  50                   push eax
// 007bd700  8d4c241c             lea ecx, [esp + 0x1c]
// 007bd704  e899c1f5ff           call 0x7198a2
// 007bd709  33ed                 xor ebp, ebp
// 007bd70b  396b24               cmp dword ptr [ebx + 0x24], ebp
// 007bd70e  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007bd716  0f8e98000000         jle 0x7bd7b4
// 007bd71c  8d642400             lea esp, [esp]
// 007bd720  85ed                 test ebp, ebp
// 007bd722  0f8cd5000000         jl 0x7bd7fd
// 007bd728  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 007bd72b  0f8dcc000000         jge 0x7bd7fd
// 007bd731  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007bd734  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 007bd737  8d04a9               lea eax, [ecx + ebp*4]
// 007bd73a  33ff                 xor edi, edi
// 007bd73c  397e2c               cmp dword ptr [esi + 0x2c], edi
// 007bd73f  7e2f                 jle 0x7bd770
// 007bd741  33db                 xor ebx, ebx
// 007bd743  85db                 test ebx, ebx
// 007bd745  0f8cb2000000         jl 0x7bd7fd
// 007bd74b  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 007bd74e  0f8da9000000         jge 0x7bd7fd
// 007bd754  8b4628               mov eax, dword ptr [esi + 0x28]
// 007bd757  03c3                 add eax, ebx
// 007bd759  50                   push eax
// 007bd75a  8d4c241c             lea ecx, [esp + 0x1c]
// 007bd75e  e8e5ed0800           call 0x84c548
// 007bd763  47                   inc edi
// 007bd764  83c310               add ebx, 0x10
// 007bd767  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 007bd76a  7cd7                 jl 0x7bd743
// 007bd76c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007bd770  56                   push esi
// 007bd771  8d54241c             lea edx, [esp + 0x1c]
// 007bd775  52                   push edx
// 007bd776  8bcb                 mov ecx, ebx
// 007bd778  e863fcffff           call 0x7bd3e0
// 007bd77d  6a00                 push 0
// 007bd77f  8d4c241c             lea ecx, [esp + 0x1c]
// 007bd783  e870e90800           call 0x84c0f8
// 007bd788  837e2006             cmp dword ptr [esi + 0x20], 6
// 007bd78c  7e1c                 jle 0x7bd7aa
// 007bd78e  6a01                 push 1
// 007bd790  55                   push ebp
// 007bd791  8d4b1c               lea ecx, [ebx + 0x1c]
// 007bd794  e8c74ef9ff           call 0x752660
// 007bd799  8bce                 mov ecx, esi
// 007bd79b  e8d0feffff           call 0x7bd670
// 007bd7a0  56                   push esi
// 007bd7a1  e88cb2f5ff           call 0x718a32
// 007bd7a6  83c404               add esp, 4
// 007bd7a9  4d                   dec ebp
// 007bd7aa  45                   inc ebp
// 007bd7ab  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 007bd7ae  0f8c6cffffff         jl 0x7bd720
// 007bd7b4  837b2400             cmp dword ptr [ebx + 0x24], 0
// 007bd7b8  751e                 jne 0x7bd7d8
// 007bd7ba  837b1000             cmp dword ptr [ebx + 0x10], 0
// 007bd7be  7418                 je 0x7bd7d8
// 007bd7c0  8b03                 mov eax, dword ptr [ebx]
// 007bd7c2  8b4020               mov eax, dword ptr [eax + 0x20]
// 007bd7c5  6843cd0a00           push 0xacd43
// 007bd7ca  50                   push eax
// 007bd7cb  ff1584ee8900         call dword ptr [0x89ee84]
// 007bd7d1  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 007bd7d8  8d4c2418             lea ecx, [esp + 0x18]
// 007bd7dc  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 007bd7e4  e8b3c0f5ff           call 0x71989c
// 007bd7e9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007bd7ed  64890d00000000       mov dword ptr fs:[0], ecx
// 007bd7f4  59                   pop ecx
// 007bd7f5  5f                   pop edi
// 007bd7f6  5e                   pop esi
// 007bd7f7  5d                   pop ebp
// 007bd7f8  5b                   pop ebx
// 007bd7f9  83c424               add esp, 0x24
// 007bd7fc  c3                   ret 
// 007bd7fd  e8e2b4f5ff           call 0x718ce4
// copied from an identical function in another client (function ?OnAnimate@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp