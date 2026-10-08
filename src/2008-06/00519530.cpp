// from server: 100% by auto
// roc 2008-06 00519530  unit: G3D::_internal::DialogTemplate  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519530
//
// 00519530  83ec18               sub esp, 0x18
// 00519533  53                   push ebx
// 00519534  55                   push ebp
// 00519535  56                   push esi
// 00519536  57                   push edi
// 00519537  8bf8                 mov edi, eax
// 00519539  b88b000000           mov eax, 0x8b
// 0051953e  2bc7                 sub eax, edi
// 00519540  03c0                 add eax, eax
// 00519542  99                   cdq 
// 00519543  f7ff                 idiv edi
// 00519545  6a08                 push 8
// 00519547  68708c8200           push 0x828c70
// 0051954c  6880000000           push 0x80
// 00519551  6818010000           push 0x118
// 00519556  6a0a                 push 0xa
// 00519558  6a0a                 push 0xa
// 0051955a  680008c800           push 0xc80800
// 0051955f  8d4c2434             lea ecx, [esp + 0x34]
// 00519563  8bd8                 mov ebx, eax
// 00519565  8b442448             mov eax, dword ptr [esp + 0x48]
// 00519569  50                   push eax
// 0051956a  e861fdffff           call 0x5192d0
// 0051956f  68e8030000           push 0x3e8
// 00519574  6a6c                 push 0x6c
// 00519576  6814010000           push 0x114
// 0051957b  6a02                 push 2
// 0051957d  6a02                 push 2
// 0051957f  6800000200           push 0x20000
// 00519584  68040c0110           push 0x10010c04
// 00519589  68688c8200           push 0x828c68
// 0051958e  8d4c2438             lea ecx, [esp + 0x38]
// 00519592  e8c9feffff           call 0x519460
// 00519597  33f6                 xor esi, esi
// 00519599  85ff                 test edi, edi
// 0051959b  7e32                 jle 0x5195cf
// 0051959d  8d6e02               lea ebp, [esi + 2]
// 005195a0  8b542434             mov edx, dword ptr [esp + 0x34]
// 005195a4  8b04b2               mov eax, dword ptr [edx + esi*4]
// 005195a7  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 005195ad  51                   push ecx
// 005195ae  6a0d                 push 0xd
// 005195b0  53                   push ebx
// 005195b1  6a71                 push 0x71
// 005195b3  55                   push ebp
// 005195b4  6a00                 push 0
// 005195b6  6800000110           push 0x10010000
// 005195bb  50                   push eax
// 005195bc  8d4c2438             lea ecx, [esp + 0x38]
// 005195c0  e8cbfdffff           call 0x519390
// 005195c5  8d4302               lea eax, [ebx + 2]
// 005195c8  46                   inc esi
// 005195c9  03e8                 add ebp, eax
// 005195cb  3bf7                 cmp esi, edi
// 005195cd  7cd1                 jl 0x5195a0
// 005195cf  8b742430             mov esi, dword ptr [esp + 0x30]
// 005195d3  8a0e                 mov cl, byte ptr [esi]
// 005195d5  33d2                 xor edx, edx
// 005195d7  8bc6                 mov eax, esi
// 005195d9  84c9                 test cl, cl
// 005195db  741c                 je 0x5195f9
// 005195dd  8d4900               lea ecx, [ecx]
// 005195e0  80f90a               cmp cl, 0xa
// 005195e3  750b                 jne 0x5195f0
// 005195e5  3bc6                 cmp eax, esi
// 005195e7  7407                 je 0x5195f0
// 005195e9  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 005195ed  7401                 je 0x5195f0
// 005195ef  42                   inc edx
// 005195f0  8a4801               mov cl, byte ptr [eax + 1]
// 005195f3  40                   inc eax
// 005195f4  42                   inc edx
// 005195f5  84c9                 test cl, cl
// 005195f7  75e7                 jne 0x5195e0
// 005195f9  42                   inc edx
// 005195fa  52                   push edx
// 005195fb  ff15b0288000         call dword ptr [0x8028b0]
// 00519601  8be8                 mov ebp, eax
// 00519603  83c404               add esp, 4
// 00519606  803e00               cmp byte ptr [esi], 0
// 00519609  8bc6                 mov eax, esi
// 0051960b  8bcd                 mov ecx, ebp
// 0051960d  741f                 je 0x51962e
// 0051960f  90                   nop 
// 00519610  80380a               cmp byte ptr [eax], 0xa
// 00519613  750e                 jne 0x519623
// 00519615  3bc6                 cmp eax, esi
// 00519617  740a                 je 0x519623
// 00519619  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 0051961d  7404                 je 0x519623
// 0051961f  c6010d               mov byte ptr [ecx], 0xd
// 00519622  41                   inc ecx
// 00519623  8a10                 mov dl, byte ptr [eax]
// 00519625  8811                 mov byte ptr [ecx], dl
// 00519627  40                   inc eax
// 00519628  41                   inc ecx
// 00519629  803800               cmp byte ptr [eax], 0
// 0051962c  75e2                 jne 0x519610
// 0051962e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00519632  c60100               mov byte ptr [ecx], 0
// 00519635  6a00                 push 0
// 00519637  896c2414             mov dword ptr [esp + 0x14], ebp
// 0051963b  89442418             mov dword ptr [esp + 0x18], eax
// 0051963f  ff15bc218000         call dword ptr [0x8021bc]
// 00519645  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00519649  8d4c2410             lea ecx, [esp + 0x10]
// 0051964d  51                   push ecx
// 0051964e  6850905100           push 0x519050
// 00519653  6a00                 push 0
// 00519655  56                   push esi
// 00519656  50                   push eax
// 00519657  ff159c2c8000         call dword ptr [0x802c9c]
// 0051965d  8b1dc0288000         mov ebx, dword ptr [0x8028c0]
// 00519663  55                   push ebp
// 00519664  8bf8                 mov edi, eax
// 00519666  ffd3                 call ebx
// 00519668  56                   push esi
// 00519669  ffd3                 call ebx
// 0051966b  83c408               add esp, 8
// 0051966e  8bc7                 mov eax, edi
// 00519670  5f                   pop edi
// 00519671  5e                   pop esi
// 00519672  5d                   pop ebp
// 00519673  5b                   pop ebx
// 00519674  83c418               add esp, 0x18
// 00519677  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
