// roc 2009-12 00836c30  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 667 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836c30
//
// 00836c30  6aff                 push -1
// 00836c32  686ac29500           push 0x95c26a
// 00836c37  64a100000000         mov eax, dword ptr fs:[0]
// 00836c3d  50                   push eax
// 00836c3e  83ec14               sub esp, 0x14
// 00836c41  53                   push ebx
// 00836c42  55                   push ebp
// 00836c43  56                   push esi
// 00836c44  57                   push edi
// 00836c45  a10052b600           mov eax, dword ptr [0xb65200]
// 00836c4a  33c4                 xor eax, esp
// 00836c4c  50                   push eax
// 00836c4d  8d442428             lea eax, [esp + 0x28]
// 00836c51  64a300000000         mov dword ptr fs:[0], eax
// 00836c57  8bd9                 mov ebx, ecx
// 00836c59  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00836c5d  8b07                 mov eax, dword ptr [edi]
// 00836c5f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00836c62  68a07d9f00           push 0x9f7da0
// 00836c67  8bcf                 mov ecx, edi
// 00836c69  ffd2                 call edx
// 00836c6b  8bf0                 mov esi, eax
// 00836c6d  89742418             mov dword ptr [esp + 0x18], esi
// 00836c71  33ed                 xor ebp, ebp
// 00836c73  896c2430             mov dword ptr [esp + 0x30], ebp
// 00836c77  396f28               cmp dword ptr [edi + 0x28], ebp
// 00836c7a  0f85e7000000         jne 0x836d67
// 00836c80  55                   push ebp
// 00836c81  53                   push ebx
// 00836c82  686cf49900           push 0x99f46c
// 00836c87  56                   push esi
// 00836c88  e8739d0100           call 0x850a00
// 00836c8d  83c410               add esp, 0x10
// 00836c90  8d442420             lea eax, [esp + 0x20]
// 00836c94  50                   push eax
// 00836c95  8bcb                 mov ecx, ebx
// 00836c97  e8e4e3ffff           call 0x835080
// 00836c9c  33c9                 xor ecx, ecx
// 00836c9e  51                   push ecx
// 00836c9f  33c0                 xor eax, eax
// 00836ca1  50                   push eax
// 00836ca2  8d4c2428             lea ecx, [esp + 0x28]
// 00836ca6  51                   push ecx
// 00836ca7  68947d9f00           push 0x9f7d94
// 00836cac  56                   push esi
// 00836cad  e89e9e0100           call 0x850b50
// 00836cb2  0fb7530c             movzx edx, word ptr [ebx + 0xc]
// 00836cb6  55                   push ebp
// 00836cb7  8d44242c             lea eax, [esp + 0x2c]
// 00836cbb  50                   push eax
// 00836cbc  688c7d9f00           push 0x9f7d8c
// 00836cc1  56                   push esi
// 00836cc2  89542438             mov dword ptr [esp + 0x38], edx
// 00836cc6  e8d59c0100           call 0x8509a0
// 00836ccb  83c424               add esp, 0x24
// 00836cce  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00836cd1  0f8ecb010000         jle 0x836ea2
// 00836cd7  eb07                 jmp 0x836ce0
// 00836cd9  8da42400000000       lea esp, [esp]
// 00836ce0  8d4c2438             lea ecx, [esp + 0x38]
// 00836ce4  ff1574de9800         call dword ptr [0x98de74]
// 00836cea  55                   push ebp
// 00836ceb  8d4c243c             lea ecx, [esp + 0x3c]
// 00836cef  68807d9f00           push 0x9f7d80
// 00836cf4  51                   push ecx
// 00836cf5  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00836cfa  ff157cde9800         call dword ptr [0x98de7c]
// 00836d00  8b3e                 mov edi, dword ptr [esi]
// 00836d02  83c40c               add esp, 0xc
// 00836d05  8d4c2438             lea ecx, [esp + 0x38]
// 00836d09  83c770               add edi, 0x70
// 00836d0c  ff1580de9800         call dword ptr [0x98de80]
// 00836d12  8b17                 mov edx, dword ptr [edi]
// 00836d14  50                   push eax
// 00836d15  8bce                 mov ecx, esi
// 00836d17  ffd2                 call edx
// 00836d19  8bf8                 mov edi, eax
// 00836d1b  897c241c             mov dword ptr [esp + 0x1c], edi
// 00836d1f  c644243002           mov byte ptr [esp + 0x30], 2
// 00836d24  85ed                 test ebp, ebp
// 00836d26  7c3a                 jl 0x836d62
// 00836d28  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00836d2b  7d35                 jge 0x836d62
// 00836d2d  8b4308               mov eax, dword ptr [ebx + 8]
// 00836d30  8b0ca8               mov ecx, dword ptr [eax + ebp*4]
// 00836d33  8d04a8               lea eax, [eax + ebp*4]
// 00836d36  53                   push ebx
// 00836d37  57                   push edi
// 00836d38  e823e6ffff           call 0x835360
// 00836d3d  c644243001           mov byte ptr [esp + 0x30], 1
// 00836d42  85ff                 test edi, edi
// 00836d44  7407                 je 0x836d4d
// 00836d46  8bcf                 mov ecx, edi
// 00836d48  e88fd0fbff           call 0x7f3ddc
// 00836d4d  8d4c2438             lea ecx, [esp + 0x38]
// 00836d51  ff15c0de9800         call dword ptr [0x98dec0]
// 00836d57  45                   inc ebp
// 00836d58  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00836d5b  7c83                 jl 0x836ce0
// 00836d5d  e940010000           jmp 0x836ea2
// 00836d62  e8a5cdfbff           call 0x7f3b0c
// 00836d67  8bcb                 mov ecx, ebx
// 00836d69  e872feffff           call 0x836be0
// 00836d6e  55                   push ebp
// 00836d6f  53                   push ebx
// 00836d70  686cf49900           push 0x99f46c
// 00836d75  56                   push esi
// 00836d76  e8859c0100           call 0x850a00
// 00836d7b  33c9                 xor ecx, ecx
// 00836d7d  51                   push ecx
// 00836d7e  33c0                 xor eax, eax
// 00836d80  50                   push eax
// 00836d81  8d4c2438             lea ecx, [esp + 0x38]
// 00836d85  51                   push ecx
// 00836d86  68947d9f00           push 0x9f7d94
// 00836d8b  56                   push esi
// 00836d8c  e8bf9d0100           call 0x850b50
// 00836d91  83c424               add esp, 0x24
// 00836d94  8d542420             lea edx, [esp + 0x20]
// 00836d98  52                   push edx
// 00836d99  8bcb                 mov ecx, ebx
// 00836d9b  e8d0e6ffff           call 0x835470
// 00836da0  55                   push ebp
// 00836da1  8d44243c             lea eax, [esp + 0x3c]
// 00836da5  50                   push eax
// 00836da6  688c7d9f00           push 0x9f7d8c
// 00836dab  56                   push esi
// 00836dac  896c2448             mov dword ptr [esp + 0x48], ebp
// 00836db0  e8eb9b0100           call 0x8509a0
// 00836db5  0fb7542448           movzx edx, word ptr [esp + 0x48]
// 00836dba  83c410               add esp, 0x10
// 00836dbd  6aff                 push -1
// 00836dbf  8d4b04               lea ecx, [ebx + 4]
// 00836dc2  52                   push edx
// 00836dc3  e8d8e50100           call 0x8553a0
// 00836dc8  33c0                 xor eax, eax
// 00836dca  663b442438           cmp ax, word ptr [esp + 0x38]
// 00836dcf  0f83c7000000         jae 0x836e9c
// 00836dd5  6a50                 push 0x50
// 00836dd7  e884cafbff           call 0x7f3860
// 00836ddc  83c404               add esp, 4
// 00836ddf  85c0                 test eax, eax
// 00836de1  7409                 je 0x836dec
// 00836de3  8bc8                 mov ecx, eax
// 00836de5  e816e5ffff           call 0x835300
// 00836dea  eb02                 jmp 0x836dee
// 00836dec  33c0                 xor eax, eax
// 00836dee  85ed                 test ebp, ebp
// 00836df0  0f8c6cffffff         jl 0x836d62
// 00836df6  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00836df9  0f8d63ffffff         jge 0x836d62
// 00836dff  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00836e02  8d14ad00000000       lea edx, [ebp*4]
// 00836e09  03ca                 add ecx, edx
// 00836e0b  8901                 mov dword ptr [ecx], eax
// 00836e0d  8d4c2414             lea ecx, [esp + 0x14]
// 00836e11  ff1574de9800         call dword ptr [0x98de74]
// 00836e17  55                   push ebp
// 00836e18  8d4c2418             lea ecx, [esp + 0x18]
// 00836e1c  68807d9f00           push 0x9f7d80
// 00836e21  51                   push ecx
// 00836e22  c644243c03           mov byte ptr [esp + 0x3c], 3
// 00836e27  ff157cde9800         call dword ptr [0x98de7c]
// 00836e2d  8b3e                 mov edi, dword ptr [esi]
// 00836e2f  83c40c               add esp, 0xc
// 00836e32  8d4c2414             lea ecx, [esp + 0x14]
// 00836e36  83c770               add edi, 0x70
// 00836e39  ff1580de9800         call dword ptr [0x98de80]
// 00836e3f  8b17                 mov edx, dword ptr [edi]
// 00836e41  50                   push eax
// 00836e42  8bce                 mov ecx, esi
// 00836e44  ffd2                 call edx
// 00836e46  8bf8                 mov edi, eax
// 00836e48  897c241c             mov dword ptr [esp + 0x1c], edi
// 00836e4c  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00836e4f  c644243004           mov byte ptr [esp + 0x30], 4
// 00836e54  0f8d08ffffff         jge 0x836d62
// 00836e5a  8b4308               mov eax, dword ptr [ebx + 8]
// 00836e5d  8d0cad00000000       lea ecx, [ebp*4]
// 00836e64  03c1                 add eax, ecx
// 00836e66  8b08                 mov ecx, dword ptr [eax]
// 00836e68  53                   push ebx
// 00836e69  57                   push edi
// 00836e6a  e8f1e4ffff           call 0x835360
// 00836e6f  c644243003           mov byte ptr [esp + 0x30], 3
// 00836e74  85ff                 test edi, edi
// 00836e76  7407                 je 0x836e7f
// 00836e78  8bcf                 mov ecx, edi
// 00836e7a  e85dcffbff           call 0x7f3ddc
// 00836e7f  8d4c2414             lea ecx, [esp + 0x14]
// 00836e83  c644243000           mov byte ptr [esp + 0x30], 0
// 00836e88  ff15c0de9800         call dword ptr [0x98dec0]
// 00836e8e  0fb7442438           movzx eax, word ptr [esp + 0x38]
// 00836e93  45                   inc ebp
// 00836e94  3be8                 cmp ebp, eax
// 00836e96  0f8c39ffffff         jl 0x836dd5
// 00836e9c  c70320000000         mov dword ptr [ebx], 0x20
// 00836ea2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00836eaa  85f6                 test esi, esi
// 00836eac  7407                 je 0x836eb5
// 00836eae  8bce                 mov ecx, esi
// 00836eb0  e827cffbff           call 0x7f3ddc
// 00836eb5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00836eb9  64890d00000000       mov dword ptr fs:[0], ecx
// 00836ec0  59                   pop ecx
// 00836ec1  5f                   pop edi
// 00836ec2  5e                   pop esi
// 00836ec3  5d                   pop ebp
// 00836ec4  5b                   pop ebx
// 00836ec5  83c420               add esp, 0x20
// 00836ec8  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPDockState@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPDockState.cpp