// roc 2012-06 006392d0  unit: G3D::_internal::DialogTemplate  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006392d0
//
// 006392d0  83ec18               sub esp, 0x18
// 006392d3  53                   push ebx
// 006392d4  55                   push ebp
// 006392d5  56                   push esi
// 006392d6  57                   push edi
// 006392d7  8bf8                 mov edi, eax
// 006392d9  b88b000000           mov eax, 0x8b
// 006392de  2bc7                 sub eax, edi
// 006392e0  03c0                 add eax, eax
// 006392e2  99                   cdq 
// 006392e3  f7ff                 idiv edi
// 006392e5  6a08                 push 8
// 006392e7  68003fb800           push 0xb83f00
// 006392ec  6880000000           push 0x80
// 006392f1  6818010000           push 0x118
// 006392f6  6a0a                 push 0xa
// 006392f8  6a0a                 push 0xa
// 006392fa  680008c800           push 0xc80800
// 006392ff  8d4c2434             lea ecx, [esp + 0x34]
// 00639303  8bd8                 mov ebx, eax
// 00639305  8b442448             mov eax, dword ptr [esp + 0x48]
// 00639309  50                   push eax
// 0063930a  e861fdffff           call 0x639070
// 0063930f  68e8030000           push 0x3e8
// 00639314  6a6c                 push 0x6c
// 00639316  6814010000           push 0x114
// 0063931b  6a02                 push 2
// 0063931d  6a02                 push 2
// 0063931f  6800000200           push 0x20000
// 00639324  68040c0110           push 0x10010c04
// 00639329  68e801b500           push 0xb501e8
// 0063932e  8d4c2438             lea ecx, [esp + 0x38]
// 00639332  e8c9feffff           call 0x639200
// 00639337  33f6                 xor esi, esi
// 00639339  85ff                 test edi, edi
// 0063933b  7e32                 jle 0x63936f
// 0063933d  8d6e02               lea ebp, [esi + 2]
// 00639340  8b542434             mov edx, dword ptr [esp + 0x34]
// 00639344  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00639347  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 0063934d  51                   push ecx
// 0063934e  6a0d                 push 0xd
// 00639350  53                   push ebx
// 00639351  6a71                 push 0x71
// 00639353  55                   push ebp
// 00639354  6a00                 push 0
// 00639356  6800000110           push 0x10010000
// 0063935b  50                   push eax
// 0063935c  8d4c2438             lea ecx, [esp + 0x38]
// 00639360  e8cbfdffff           call 0x639130
// 00639365  8d4302               lea eax, [ebx + 2]
// 00639368  46                   inc esi
// 00639369  03e8                 add ebp, eax
// 0063936b  3bf7                 cmp esi, edi
// 0063936d  7cd1                 jl 0x639340
// 0063936f  8b742430             mov esi, dword ptr [esp + 0x30]
// 00639373  8a0e                 mov cl, byte ptr [esi]
// 00639375  33d2                 xor edx, edx
// 00639377  8bc6                 mov eax, esi
// 00639379  84c9                 test cl, cl
// 0063937b  741c                 je 0x639399
// 0063937d  8d4900               lea ecx, [ecx]
// 00639380  80f90a               cmp cl, 0xa
// 00639383  750b                 jne 0x639390
// 00639385  3bc6                 cmp eax, esi
// 00639387  7407                 je 0x639390
// 00639389  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 0063938d  7401                 je 0x639390
// 0063938f  42                   inc edx
// 00639390  8a4801               mov cl, byte ptr [eax + 1]
// 00639393  40                   inc eax
// 00639394  42                   inc edx
// 00639395  84c9                 test cl, cl
// 00639397  75e7                 jne 0x639380
// 00639399  42                   inc edx
// 0063939a  52                   push edx
// 0063939b  ff15f829b200         call dword ptr [0xb229f8]
// 006393a1  8be8                 mov ebp, eax
// 006393a3  83c404               add esp, 4
// 006393a6  803e00               cmp byte ptr [esi], 0
// 006393a9  8bc6                 mov eax, esi
// 006393ab  8bcd                 mov ecx, ebp
// 006393ad  741f                 je 0x6393ce
// 006393af  90                   nop 
// 006393b0  80380a               cmp byte ptr [eax], 0xa
// 006393b3  750e                 jne 0x6393c3
// 006393b5  3bc6                 cmp eax, esi
// 006393b7  740a                 je 0x6393c3
// 006393b9  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 006393bd  7404                 je 0x6393c3
// 006393bf  c6010d               mov byte ptr [ecx], 0xd
// 006393c2  41                   inc ecx
// 006393c3  8a10                 mov dl, byte ptr [eax]
// 006393c5  8811                 mov byte ptr [ecx], dl
// 006393c7  40                   inc eax
// 006393c8  41                   inc ecx
// 006393c9  803800               cmp byte ptr [eax], 0
// 006393cc  75e2                 jne 0x6393b0
// 006393ce  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006393d2  c60100               mov byte ptr [ecx], 0
// 006393d5  6a00                 push 0
// 006393d7  896c2414             mov dword ptr [esp + 0x14], ebp
// 006393db  89442418             mov dword ptr [esp + 0x18], eax
// 006393df  ff15ac21b200         call dword ptr [0xb221ac]
// 006393e5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006393e9  8d4c2410             lea ecx, [esp + 0x10]
// 006393ed  51                   push ecx
// 006393ee  68f08d6300           push 0x638df0
// 006393f3  6a00                 push 0
// 006393f5  56                   push esi
// 006393f6  50                   push eax
// 006393f7  ff15b03bb200         call dword ptr [0xb23bb0]
// 006393fd  8b1dc829b200         mov ebx, dword ptr [0xb229c8]
// 00639403  55                   push ebp
// 00639404  8bf8                 mov edi, eax
// 00639406  ffd3                 call ebx
// 00639408  56                   push esi
// 00639409  ffd3                 call ebx
// 0063940b  83c408               add esp, 8
// 0063940e  8bc7                 mov eax, edi
// 00639410  5f                   pop edi
// 00639411  5e                   pop esi
// 00639412  5d                   pop ebp
// 00639413  5b                   pop ebx
// 00639414  83c418               add esp, 0x18
// 00639417  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
