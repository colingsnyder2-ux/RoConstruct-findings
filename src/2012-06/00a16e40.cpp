// roc 2012-06 00a16e40  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16e40
//
// 00a16e40  6aff                 push -1
// 00a16e42  6828c4ad00           push 0xadc428
// 00a16e47  64a100000000         mov eax, dword ptr fs:[0]
// 00a16e4d  50                   push eax
// 00a16e4e  83ec18               sub esp, 0x18
// 00a16e51  53                   push ebx
// 00a16e52  55                   push ebp
// 00a16e53  56                   push esi
// 00a16e54  57                   push edi
// 00a16e55  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a16e5a  33c4                 xor eax, esp
// 00a16e5c  50                   push eax
// 00a16e5d  8d44242c             lea eax, [esp + 0x2c]
// 00a16e61  64a300000000         mov dword ptr fs:[0], eax
// 00a16e67  8bd9                 mov ebx, ecx
// 00a16e69  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a16e6d  8b03                 mov eax, dword ptr [ebx]
// 00a16e6f  50                   push eax
// 00a16e70  8d4c241c             lea ecx, [esp + 0x1c]
// 00a16e74  e823c1f6ff           call 0x982f9c
// 00a16e79  33ed                 xor ebp, ebp
// 00a16e7b  396b24               cmp dword ptr [ebx + 0x24], ebp
// 00a16e7e  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00a16e86  0f8e98000000         jle 0xa16f24
// 00a16e8c  8d642400             lea esp, [esp]
// 00a16e90  85ed                 test ebp, ebp
// 00a16e92  0f8cd5000000         jl 0xa16f6d
// 00a16e98  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 00a16e9b  0f8dcc000000         jge 0xa16f6d
// 00a16ea1  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a16ea4  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00a16ea7  8d04a9               lea eax, [ecx + ebp*4]
// 00a16eaa  33ff                 xor edi, edi
// 00a16eac  397e2c               cmp dword ptr [esi + 0x2c], edi
// 00a16eaf  7e2f                 jle 0xa16ee0
// 00a16eb1  33db                 xor ebx, ebx
// 00a16eb3  85db                 test ebx, ebx
// 00a16eb5  0f8cb2000000         jl 0xa16f6d
// 00a16ebb  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00a16ebe  0f8da9000000         jge 0xa16f6d
// 00a16ec4  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a16ec7  03c3                 add eax, ebx
// 00a16ec9  50                   push eax
// 00a16eca  8d4c241c             lea ecx, [esp + 0x1c]
// 00a16ece  e8c52a0800           call 0xa99998
// 00a16ed3  47                   inc edi
// 00a16ed4  83c310               add ebx, 0x10
// 00a16ed7  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00a16eda  7cd7                 jl 0xa16eb3
// 00a16edc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a16ee0  56                   push esi
// 00a16ee1  8d54241c             lea edx, [esp + 0x1c]
// 00a16ee5  52                   push edx
// 00a16ee6  8bcb                 mov ecx, ebx
// 00a16ee8  e863fcffff           call 0xa16b50
// 00a16eed  6a00                 push 0
// 00a16eef  8d4c241c             lea ecx, [esp + 0x1c]
// 00a16ef3  e8f6280800           call 0xa997ee
// 00a16ef8  837e2006             cmp dword ptr [esi + 0x20], 6
// 00a16efc  7e1c                 jle 0xa16f1a
// 00a16efe  6a01                 push 1
// 00a16f00  55                   push ebp
// 00a16f01  8d4b1c               lea ecx, [ebx + 0x1c]
// 00a16f04  e867c2f7ff           call 0x993170
// 00a16f09  8bce                 mov ecx, esi
// 00a16f0b  e8d0feffff           call 0xa16de0
// 00a16f10  56                   push esi
// 00a16f11  e8feb1f6ff           call 0x982114
// 00a16f16  83c404               add esp, 4
// 00a16f19  4d                   dec ebp
// 00a16f1a  45                   inc ebp
// 00a16f1b  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 00a16f1e  0f8c6cffffff         jl 0xa16e90
// 00a16f24  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00a16f28  751e                 jne 0xa16f48
// 00a16f2a  837b1000             cmp dword ptr [ebx + 0x10], 0
// 00a16f2e  7418                 je 0xa16f48
// 00a16f30  8b03                 mov eax, dword ptr [ebx]
// 00a16f32  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a16f35  6843cd0a00           push 0xacd43
// 00a16f3a  50                   push eax
// 00a16f3b  ff15083cb200         call dword ptr [0xb23c08]
// 00a16f41  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 00a16f48  8d4c2418             lea ecx, [esp + 0x18]
// 00a16f4c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00a16f54  e83dc0f6ff           call 0x982f96
// 00a16f59  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a16f5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00a16f64  59                   pop ecx
// 00a16f65  5f                   pop edi
// 00a16f66  5e                   pop esi
// 00a16f67  5d                   pop ebp
// 00a16f68  5b                   pop ebx
// 00a16f69  83c424               add esp, 0x24
// 00a16f6c  c3                   ret 
// 00a16f6d  e84eb4f6ff           call 0x9823c0
// copied from an identical function in another client (function ?OnAnimate@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp