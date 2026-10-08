// roc 2009-12 005fecb0  unit: G3D::_internal::DialogTemplate  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fecb0
//
// 005fecb0  83ec18               sub esp, 0x18
// 005fecb3  53                   push ebx
// 005fecb4  55                   push ebp
// 005fecb5  56                   push esi
// 005fecb6  57                   push edi
// 005fecb7  8bf8                 mov edi, eax
// 005fecb9  b88b000000           mov eax, 0x8b
// 005fecbe  2bc7                 sub eax, edi
// 005fecc0  03c0                 add eax, eax
// 005fecc2  99                   cdq 
// 005fecc3  f7ff                 idiv edi
// 005fecc5  6a08                 push 8
// 005fecc7  68f82f9c00           push 0x9c2ff8
// 005feccc  6880000000           push 0x80
// 005fecd1  6818010000           push 0x118
// 005fecd6  6a0a                 push 0xa
// 005fecd8  6a0a                 push 0xa
// 005fecda  680008c800           push 0xc80800
// 005fecdf  8d4c2434             lea ecx, [esp + 0x34]
// 005fece3  8bd8                 mov ebx, eax
// 005fece5  8b442448             mov eax, dword ptr [esp + 0x48]
// 005fece9  50                   push eax
// 005fecea  e861fdffff           call 0x5fea50
// 005fecef  68e8030000           push 0x3e8
// 005fecf4  6a6c                 push 0x6c
// 005fecf6  6814010000           push 0x114
// 005fecfb  6a02                 push 2
// 005fecfd  6a02                 push 2
// 005fecff  6800000200           push 0x20000
// 005fed04  68040c0110           push 0x10010c04
// 005fed09  68f02f9c00           push 0x9c2ff0
// 005fed0e  8d4c2438             lea ecx, [esp + 0x38]
// 005fed12  e8c9feffff           call 0x5febe0
// 005fed17  33f6                 xor esi, esi
// 005fed19  85ff                 test edi, edi
// 005fed1b  7e32                 jle 0x5fed4f
// 005fed1d  8d6e02               lea ebp, [esi + 2]
// 005fed20  8b542434             mov edx, dword ptr [esp + 0x34]
// 005fed24  8b04b2               mov eax, dword ptr [edx + esi*4]
// 005fed27  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 005fed2d  51                   push ecx
// 005fed2e  6a0d                 push 0xd
// 005fed30  53                   push ebx
// 005fed31  6a71                 push 0x71
// 005fed33  55                   push ebp
// 005fed34  6a00                 push 0
// 005fed36  6800000110           push 0x10010000
// 005fed3b  50                   push eax
// 005fed3c  8d4c2438             lea ecx, [esp + 0x38]
// 005fed40  e8cbfdffff           call 0x5feb10
// 005fed45  8d4302               lea eax, [ebx + 2]
// 005fed48  46                   inc esi
// 005fed49  03e8                 add ebp, eax
// 005fed4b  3bf7                 cmp esi, edi
// 005fed4d  7cd1                 jl 0x5fed20
// 005fed4f  8b742430             mov esi, dword ptr [esp + 0x30]
// 005fed53  8a0e                 mov cl, byte ptr [esi]
// 005fed55  33d2                 xor edx, edx
// 005fed57  8bc6                 mov eax, esi
// 005fed59  84c9                 test cl, cl
// 005fed5b  741c                 je 0x5fed79
// 005fed5d  8d4900               lea ecx, [ecx]
// 005fed60  80f90a               cmp cl, 0xa
// 005fed63  750b                 jne 0x5fed70
// 005fed65  3bc6                 cmp eax, esi
// 005fed67  7407                 je 0x5fed70
// 005fed69  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 005fed6d  7401                 je 0x5fed70
// 005fed6f  42                   inc edx
// 005fed70  8a4801               mov cl, byte ptr [eax + 1]
// 005fed73  40                   inc eax
// 005fed74  42                   inc edx
// 005fed75  84c9                 test cl, cl
// 005fed77  75e7                 jne 0x5fed60
// 005fed79  42                   inc edx
// 005fed7a  52                   push edx
// 005fed7b  ff1578b79800         call dword ptr [0x98b778]
// 005fed81  8be8                 mov ebp, eax
// 005fed83  83c404               add esp, 4
// 005fed86  803e00               cmp byte ptr [esi], 0
// 005fed89  8bc6                 mov eax, esi
// 005fed8b  8bcd                 mov ecx, ebp
// 005fed8d  741f                 je 0x5fedae
// 005fed8f  90                   nop 
// 005fed90  80380a               cmp byte ptr [eax], 0xa
// 005fed93  750e                 jne 0x5feda3
// 005fed95  3bc6                 cmp eax, esi
// 005fed97  740a                 je 0x5feda3
// 005fed99  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 005fed9d  7404                 je 0x5feda3
// 005fed9f  c6010d               mov byte ptr [ecx], 0xd
// 005feda2  41                   inc ecx
// 005feda3  8a10                 mov dl, byte ptr [eax]
// 005feda5  8811                 mov byte ptr [ecx], dl
// 005feda7  40                   inc eax
// 005feda8  41                   inc ecx
// 005feda9  803800               cmp byte ptr [eax], 0
// 005fedac  75e2                 jne 0x5fed90
// 005fedae  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005fedb2  c60100               mov byte ptr [ecx], 0
// 005fedb5  6a00                 push 0
// 005fedb7  896c2414             mov dword ptr [esp + 0x14], ebp
// 005fedbb  89442418             mov dword ptr [esp + 0x18], eax
// 005fedbf  ff151cb29800         call dword ptr [0x98b21c]
// 005fedc5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005fedc9  8d4c2410             lea ecx, [esp + 0x10]
// 005fedcd  51                   push ecx
// 005fedce  68d0e75f00           push 0x5fe7d0
// 005fedd3  6a00                 push 0
// 005fedd5  56                   push esi
// 005fedd6  50                   push eax
// 005fedd7  ff15a4c99800         call dword ptr [0x98c9a4]
// 005feddd  8b1d40b79800         mov ebx, dword ptr [0x98b740]
// 005fede3  55                   push ebp
// 005fede4  8bf8                 mov edi, eax
// 005fede6  ffd3                 call ebx
// 005fede8  56                   push esi
// 005fede9  ffd3                 call ebx
// 005fedeb  83c408               add esp, 8
// 005fedee  8bc7                 mov eax, edi
// 005fedf0  5f                   pop edi
// 005fedf1  5e                   pop esi
// 005fedf2  5d                   pop ebp
// 005fedf3  5b                   pop ebx
// 005fedf4  83c418               add esp, 0x18
// 005fedf7  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
