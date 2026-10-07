// roc 2007-08 00511c70  unit: G3D::_internal::DialogTemplate  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511c70
//
// 00511c70  83ec18               sub esp, 0x18
// 00511c73  53                   push ebx
// 00511c74  55                   push ebp
// 00511c75  56                   push esi
// 00511c76  57                   push edi
// 00511c77  8bf8                 mov edi, eax
// 00511c79  b88b000000           mov eax, 0x8b
// 00511c7e  2bc7                 sub eax, edi
// 00511c80  03c0                 add eax, eax
// 00511c82  99                   cdq 
// 00511c83  f7ff                 idiv edi
// 00511c85  6a08                 push 8
// 00511c87  68d40f7a00           push 0x7a0fd4
// 00511c8c  6880000000           push 0x80
// 00511c91  6818010000           push 0x118
// 00511c96  6a0a                 push 0xa
// 00511c98  6a0a                 push 0xa
// 00511c9a  680008c800           push 0xc80800
// 00511c9f  8d4c2434             lea ecx, [esp + 0x34]
// 00511ca3  8bd8                 mov ebx, eax
// 00511ca5  8b442448             mov eax, dword ptr [esp + 0x48]
// 00511ca9  50                   push eax
// 00511caa  e851fdffff           call 0x511a00
// 00511caf  68e8030000           push 0x3e8
// 00511cb4  6a6c                 push 0x6c
// 00511cb6  6814010000           push 0x114
// 00511cbb  6a02                 push 2
// 00511cbd  6a02                 push 2
// 00511cbf  6800000200           push 0x20000
// 00511cc4  68040c0110           push 0x10010c04
// 00511cc9  68cc0f7a00           push 0x7a0fcc
// 00511cce  8d4c2438             lea ecx, [esp + 0x38]
// 00511cd2  e8c9feffff           call 0x511ba0
// 00511cd7  33f6                 xor esi, esi
// 00511cd9  85ff                 test edi, edi
// 00511cdb  7e36                 jle 0x511d13
// 00511cdd  bd02000000           mov ebp, 2
// 00511ce2  8b542434             mov edx, dword ptr [esp + 0x34]
// 00511ce6  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00511ce9  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 00511cef  51                   push ecx
// 00511cf0  6a0d                 push 0xd
// 00511cf2  53                   push ebx
// 00511cf3  6a71                 push 0x71
// 00511cf5  55                   push ebp
// 00511cf6  6a00                 push 0
// 00511cf8  6800000110           push 0x10010000
// 00511cfd  50                   push eax
// 00511cfe  8d4c2438             lea ecx, [esp + 0x38]
// 00511d02  e8c9fdffff           call 0x511ad0
// 00511d07  8d4302               lea eax, [ebx + 2]
// 00511d0a  83c601               add esi, 1
// 00511d0d  03e8                 add ebp, eax
// 00511d0f  3bf7                 cmp esi, edi
// 00511d11  7ccf                 jl 0x511ce2
// 00511d13  8b742430             mov esi, dword ptr [esp + 0x30]
// 00511d17  8a0e                 mov cl, byte ptr [esi]
// 00511d19  33d2                 xor edx, edx
// 00511d1b  84c9                 test cl, cl
// 00511d1d  8bc6                 mov eax, esi
// 00511d1f  741f                 je 0x511d40
// 00511d21  80f90a               cmp cl, 0xa
// 00511d24  750d                 jne 0x511d33
// 00511d26  3bc6                 cmp eax, esi
// 00511d28  7409                 je 0x511d33
// 00511d2a  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 00511d2e  7403                 je 0x511d33
// 00511d30  83c201               add edx, 1
// 00511d33  8a4801               mov cl, byte ptr [eax + 1]
// 00511d36  83c001               add eax, 1
// 00511d39  83c201               add edx, 1
// 00511d3c  84c9                 test cl, cl
// 00511d3e  75e1                 jne 0x511d21
// 00511d40  83c201               add edx, 1
// 00511d43  52                   push edx
// 00511d44  ff15d0e67700         call dword ptr [0x77e6d0]
// 00511d4a  8be8                 mov ebp, eax
// 00511d4c  83c404               add esp, 4
// 00511d4f  803e00               cmp byte ptr [esi], 0
// 00511d52  8bc6                 mov eax, esi
// 00511d54  8bcd                 mov ecx, ebp
// 00511d56  7424                 je 0x511d7c
// 00511d58  80380a               cmp byte ptr [eax], 0xa
// 00511d5b  7510                 jne 0x511d6d
// 00511d5d  3bc6                 cmp eax, esi
// 00511d5f  740c                 je 0x511d6d
// 00511d61  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 00511d65  7406                 je 0x511d6d
// 00511d67  c6010d               mov byte ptr [ecx], 0xd
// 00511d6a  83c101               add ecx, 1
// 00511d6d  8a10                 mov dl, byte ptr [eax]
// 00511d6f  8811                 mov byte ptr [ecx], dl
// 00511d71  83c001               add eax, 1
// 00511d74  83c101               add ecx, 1
// 00511d77  803800               cmp byte ptr [eax], 0
// 00511d7a  75dc                 jne 0x511d58
// 00511d7c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00511d80  c60100               mov byte ptr [ecx], 0
// 00511d83  6a00                 push 0
// 00511d85  896c2414             mov dword ptr [esp + 0x14], ebp
// 00511d89  89442418             mov dword ptr [esp + 0x18], eax
// 00511d8d  ff15c8d27700         call dword ptr [0x77d2c8]
// 00511d93  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00511d97  8d4c2410             lea ecx, [esp + 0x10]
// 00511d9b  51                   push ecx
// 00511d9c  6880175100           push 0x511780
// 00511da1  6a00                 push 0
// 00511da3  56                   push esi
// 00511da4  50                   push eax
// 00511da5  ff1500ed7700         call dword ptr [0x77ed00]
// 00511dab  8b1dc4e67700         mov ebx, dword ptr [0x77e6c4]
// 00511db1  55                   push ebp
// 00511db2  8bf8                 mov edi, eax
// 00511db4  ffd3                 call ebx
// 00511db6  56                   push esi
// 00511db7  ffd3                 call ebx
// 00511db9  83c408               add esp, 8
// 00511dbc  8bc7                 mov eax, edi
// 00511dbe  5f                   pop edi
// 00511dbf  5e                   pop esi
// 00511dc0  5d                   pop ebp
// 00511dc1  5b                   pop ebx
// 00511dc2  83c418               add esp, 0x18
// 00511dc5  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
