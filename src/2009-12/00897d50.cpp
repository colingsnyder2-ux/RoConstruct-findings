// roc 2009-12 00897d50  unit: CXTPRibbonBar  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897d50
//
// 00897d50  6aff                 push -1
// 00897d52  68b8189600           push 0x9618b8
// 00897d57  64a100000000         mov eax, dword ptr fs:[0]
// 00897d5d  50                   push eax
// 00897d5e  83ec08               sub esp, 8
// 00897d61  53                   push ebx
// 00897d62  55                   push ebp
// 00897d63  56                   push esi
// 00897d64  57                   push edi
// 00897d65  a10052b600           mov eax, dword ptr [0xb65200]
// 00897d6a  33c4                 xor eax, esp
// 00897d6c  50                   push eax
// 00897d6d  8d44241c             lea eax, [esp + 0x1c]
// 00897d71  64a300000000         mov dword ptr fs:[0], eax
// 00897d77  8bf9                 mov edi, ecx
// 00897d79  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00897d7d  8b4628               mov eax, dword ptr [esi + 0x28]
// 00897d80  85c0                 test eax, eax
// 00897d82  7410                 je 0x897d94
// 00897d84  8b4620               mov eax, dword ptr [esi + 0x20]
// 00897d87  85c0                 test eax, eax
// 00897d89  7409                 je 0x897d94
// 00897d8b  8b4024               mov eax, dword ptr [eax + 0x24]
// 00897d8e  898704010000         mov dword ptr [edi + 0x104], eax
// 00897d94  6a00                 push 0
// 00897d96  8d8748020000         lea eax, [edi + 0x248]
// 00897d9c  50                   push eax
// 00897d9d  68bc50a000           push 0xa050bc
// 00897da2  56                   push esi
// 00897da3  e8b88cfbff           call 0x850a60
// 00897da8  83c410               add esp, 0x10
// 00897dab  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 00897daf  7617                 jbe 0x897dc8
// 00897db1  6a00                 push 0
// 00897db3  8d8f8c020000         lea ecx, [edi + 0x28c]
// 00897db9  51                   push ecx
// 00897dba  68b050a000           push 0xa050b0
// 00897dbf  56                   push esi
// 00897dc0  e89b8cfbff           call 0x850a60
// 00897dc5  83c410               add esp, 0x10
// 00897dc8  837e2c17             cmp dword ptr [esi + 0x2c], 0x17
// 00897dcc  7617                 jbe 0x897de5
// 00897dce  6a00                 push 0
// 00897dd0  8d9738010000         lea edx, [edi + 0x138]
// 00897dd6  52                   push edx
// 00897dd7  68d07a9f00           push 0x9f7ad0
// 00897ddc  56                   push esi
// 00897ddd  e87e8cfbff           call 0x850a60
// 00897de2  83c410               add esp, 0x10
// 00897de5  8b07                 mov eax, dword ptr [edi]
// 00897de7  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00897ded  8bcf                 mov ecx, edi
// 00897def  ffd2                 call edx
// 00897df1  85c0                 test eax, eax
// 00897df3  0f84f4000000         je 0x897eed
// 00897df9  56                   push esi
// 00897dfa  8bcf                 mov ecx, edi
// 00897dfc  e89fe0f9ff           call 0x835ea0
// 00897e01  8b06                 mov eax, dword ptr [esi]
// 00897e03  8b5070               mov edx, dword ptr [eax + 0x70]
// 00897e06  68a050a000           push 0xa050a0
// 00897e0b  8bce                 mov ecx, esi
// 00897e0d  ffd2                 call edx
// 00897e0f  8bd8                 mov ebx, eax
// 00897e11  895c2414             mov dword ptr [esp + 0x14], ebx
// 00897e15  33c0                 xor eax, eax
// 00897e17  398774020000         cmp dword ptr [edi + 0x274], eax
// 00897e1d  8daf74020000         lea ebp, [edi + 0x274]
// 00897e23  0f95c0               setne al
// 00897e26  6a01                 push 1
// 00897e28  8d4c2430             lea ecx, [esp + 0x30]
// 00897e2c  51                   push ecx
// 00897e2d  68a050a000           push 0xa050a0
// 00897e32  53                   push ebx
// 00897e33  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00897e3b  8944243c             mov dword ptr [esp + 0x3c], eax
// 00897e3f  e81c8cfbff           call 0x850a60
// 00897e44  83c410               add esp, 0x10
// 00897e47  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00897e4c  7452                 je 0x897ea0
// 00897e4e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00897e51  85c0                 test eax, eax
// 00897e53  743b                 je 0x897e90
// 00897e55  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00897e5b  8b11                 mov edx, dword ptr [ecx]
// 00897e5d  8b4500               mov eax, dword ptr [ebp]
// 00897e60  8b5258               mov edx, dword ptr [edx + 0x58]
// 00897e63  50                   push eax
// 00897e64  ffd2                 call edx
// 00897e66  c7450000000000       mov dword ptr [ebp], 0
// 00897e6d  e8ae9a0500           call 0x8f1920
// 00897e72  50                   push eax
// 00897e73  55                   push ebp
// 00897e74  53                   push ebx
// 00897e75  e8f6d9ffff           call 0x895870
// 00897e7a  8b4500               mov eax, dword ptr [ebp]
// 00897e7d  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00897e83  83c40c               add esp, 0xc
// 00897e86  6a00                 push 0
// 00897e88  50                   push eax
// 00897e89  e8d2f3faff           call 0x847260
// 00897e8e  eb10                 jmp 0x897ea0
// 00897e90  e88b9a0500           call 0x8f1920
// 00897e95  50                   push eax
// 00897e96  55                   push ebp
// 00897e97  53                   push ebx
// 00897e98  e8d3d9ffff           call 0x895870
// 00897e9d  83c40c               add esp, 0xc
// 00897ea0  8b16                 mov edx, dword ptr [esi]
// 00897ea2  8b4270               mov eax, dword ptr [edx + 0x70]
// 00897ea5  689850a000           push 0xa05098
// 00897eaa  8bce                 mov ecx, esi
// 00897eac  ffd0                 call eax
// 00897eae  8be8                 mov ebp, eax
// 00897eb0  896c2418             mov dword ptr [esp + 0x18], ebp
// 00897eb4  8b8f68020000         mov ecx, dword ptr [edi + 0x268]
// 00897eba  8b11                 mov edx, dword ptr [ecx]
// 00897ebc  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00897ec2  55                   push ebp
// 00897ec3  c644242801           mov byte ptr [esp + 0x28], 1
// 00897ec8  ffd0                 call eax
// 00897eca  c644242400           mov byte ptr [esp + 0x24], 0
// 00897ecf  85ed                 test ebp, ebp
// 00897ed1  7407                 je 0x897eda
// 00897ed3  8bcd                 mov ecx, ebp
// 00897ed5  e802bff5ff           call 0x7f3ddc
// 00897eda  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00897ee2  85db                 test ebx, ebx
// 00897ee4  7407                 je 0x897eed
// 00897ee6  8bcb                 mov ecx, ebx
// 00897ee8  e8efbef5ff           call 0x7f3ddc
// 00897eed  8b16                 mov edx, dword ptr [esi]
// 00897eef  8b4270               mov eax, dword ptr [edx + 0x70]
// 00897ef2  688450a000           push 0xa05084
// 00897ef7  8bce                 mov ecx, esi
// 00897ef9  ffd0                 call eax
// 00897efb  8bf0                 mov esi, eax
// 00897efd  89742418             mov dword ptr [esp + 0x18], esi
// 00897f01  8bbf64020000         mov edi, dword ptr [edi + 0x264]
// 00897f07  8b17                 mov edx, dword ptr [edi]
// 00897f09  8b4260               mov eax, dword ptr [edx + 0x60]
// 00897f0c  56                   push esi
// 00897f0d  8bcf                 mov ecx, edi
// 00897f0f  c744242802000000     mov dword ptr [esp + 0x28], 2
// 00897f17  ffd0                 call eax
// 00897f19  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00897f21  85f6                 test esi, esi
// 00897f23  7407                 je 0x897f2c
// 00897f25  8bce                 mov ecx, esi
// 00897f27  e8b0bef5ff           call 0x7f3ddc
// 00897f2c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00897f30  64890d00000000       mov dword ptr fs:[0], ecx
// 00897f37  59                   pop ecx
// 00897f38  5f                   pop edi
// 00897f39  5e                   pop esi
// 00897f3a  5d                   pop ebp
// 00897f3b  5b                   pop ebx
// 00897f3c  83c414               add esp, 0x14
// 00897f3f  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp