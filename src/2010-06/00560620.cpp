// from server: 100% by auto
// roc 2010-06 00560620  unit: G3D::_internal::DialogTemplate  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560620
//
// 00560620  83ec18               sub esp, 0x18
// 00560623  53                   push ebx
// 00560624  55                   push ebp
// 00560625  56                   push esi
// 00560626  57                   push edi
// 00560627  8bf8                 mov edi, eax
// 00560629  b88b000000           mov eax, 0x8b
// 0056062e  2bc7                 sub eax, edi
// 00560630  03c0                 add eax, eax
// 00560632  99                   cdq 
// 00560633  f7ff                 idiv edi
// 00560635  6a08                 push 8
// 00560637  68500da200           push 0xa20d50
// 0056063c  6880000000           push 0x80
// 00560641  6818010000           push 0x118
// 00560646  6a0a                 push 0xa
// 00560648  6a0a                 push 0xa
// 0056064a  680008c800           push 0xc80800
// 0056064f  8d4c2434             lea ecx, [esp + 0x34]
// 00560653  8bd8                 mov ebx, eax
// 00560655  8b442448             mov eax, dword ptr [esp + 0x48]
// 00560659  50                   push eax
// 0056065a  e861fdffff           call 0x5603c0
// 0056065f  68e8030000           push 0x3e8
// 00560664  6a6c                 push 0x6c
// 00560666  6814010000           push 0x114
// 0056066b  6a02                 push 2
// 0056066d  6a02                 push 2
// 0056066f  6800000200           push 0x20000
// 00560674  68040c0110           push 0x10010c04
// 00560679  68480da200           push 0xa20d48
// 0056067e  8d4c2438             lea ecx, [esp + 0x38]
// 00560682  e8c9feffff           call 0x560550
// 00560687  33f6                 xor esi, esi
// 00560689  85ff                 test edi, edi
// 0056068b  7e32                 jle 0x5606bf
// 0056068d  8d6e02               lea ebp, [esi + 2]
// 00560690  8b542434             mov edx, dword ptr [esp + 0x34]
// 00560694  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00560697  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 0056069d  51                   push ecx
// 0056069e  6a0d                 push 0xd
// 005606a0  53                   push ebx
// 005606a1  6a71                 push 0x71
// 005606a3  55                   push ebp
// 005606a4  6a00                 push 0
// 005606a6  6800000110           push 0x10010000
// 005606ab  50                   push eax
// 005606ac  8d4c2438             lea ecx, [esp + 0x38]
// 005606b0  e8cbfdffff           call 0x560480
// 005606b5  8d4302               lea eax, [ebx + 2]
// 005606b8  46                   inc esi
// 005606b9  03e8                 add ebp, eax
// 005606bb  3bf7                 cmp esi, edi
// 005606bd  7cd1                 jl 0x560690
// 005606bf  8b742430             mov esi, dword ptr [esp + 0x30]
// 005606c3  8a0e                 mov cl, byte ptr [esi]
// 005606c5  33d2                 xor edx, edx
// 005606c7  8bc6                 mov eax, esi
// 005606c9  84c9                 test cl, cl
// 005606cb  741c                 je 0x5606e9
// 005606cd  8d4900               lea ecx, [ecx]
// 005606d0  80f90a               cmp cl, 0xa
// 005606d3  750b                 jne 0x5606e0
// 005606d5  3bc6                 cmp eax, esi
// 005606d7  7407                 je 0x5606e0
// 005606d9  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 005606dd  7401                 je 0x5606e0
// 005606df  42                   inc edx
// 005606e0  8a4801               mov cl, byte ptr [eax + 1]
// 005606e3  40                   inc eax
// 005606e4  42                   inc edx
// 005606e5  84c9                 test cl, cl
// 005606e7  75e7                 jne 0x5606d0
// 005606e9  42                   inc edx
// 005606ea  52                   push edx
// 005606eb  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 005606f1  8be8                 mov ebp, eax
// 005606f3  83c404               add esp, 4
// 005606f6  803e00               cmp byte ptr [esi], 0
// 005606f9  8bc6                 mov eax, esi
// 005606fb  8bcd                 mov ecx, ebp
// 005606fd  741f                 je 0x56071e
// 005606ff  90                   nop 
// 00560700  80380a               cmp byte ptr [eax], 0xa
// 00560703  750e                 jne 0x560713
// 00560705  3bc6                 cmp eax, esi
// 00560707  740a                 je 0x560713
// 00560709  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 0056070d  7404                 je 0x560713
// 0056070f  c6010d               mov byte ptr [ecx], 0xd
// 00560712  41                   inc ecx
// 00560713  8a10                 mov dl, byte ptr [eax]
// 00560715  8811                 mov byte ptr [ecx], dl
// 00560717  40                   inc eax
// 00560718  41                   inc ecx
// 00560719  803800               cmp byte ptr [eax], 0
// 0056071c  75e2                 jne 0x560700
// 0056071e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00560722  c60100               mov byte ptr [ecx], 0
// 00560725  6a00                 push 0
// 00560727  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056072b  89442418             mov dword ptr [esp + 0x18], eax
// 0056072f  ff158ca39e00         call dword ptr [0x9ea38c]
// 00560735  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00560739  8d4c2410             lea ecx, [esp + 0x10]
// 0056073d  51                   push ecx
// 0056073e  6840015600           push 0x560140
// 00560743  6a00                 push 0
// 00560745  56                   push esi
// 00560746  50                   push eax
// 00560747  ff1560bb9e00         call dword ptr [0x9ebb60]
// 0056074d  8b1d08aa9e00         mov ebx, dword ptr [0x9eaa08]
// 00560753  55                   push ebp
// 00560754  8bf8                 mov edi, eax
// 00560756  ffd3                 call ebx
// 00560758  56                   push esi
// 00560759  ffd3                 call ebx
// 0056075b  83c408               add esp, 8
// 0056075e  8bc7                 mov eax, edi
// 00560760  5f                   pop edi
// 00560761  5e                   pop esi
// 00560762  5d                   pop ebp
// 00560763  5b                   pop ebx
// 00560764  83c418               add esp, 0x18
// 00560767  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
