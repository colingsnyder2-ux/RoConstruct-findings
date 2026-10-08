// roc 2007-03 005063a0  unit: seg_00500000  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005063a0
//
// 005063a0  83ec18               sub esp, 0x18
// 005063a3  53                   push ebx
// 005063a4  55                   push ebp
// 005063a5  56                   push esi
// 005063a6  57                   push edi
// 005063a7  8bf8                 mov edi, eax
// 005063a9  b88b000000           mov eax, 0x8b
// 005063ae  2bc7                 sub eax, edi
// 005063b0  03c0                 add eax, eax
// 005063b2  99                   cdq 
// 005063b3  f7ff                 idiv edi
// 005063b5  6a08                 push 8
// 005063b7  689c077a00           push 0x7a079c
// 005063bc  6880000000           push 0x80
// 005063c1  6818010000           push 0x118
// 005063c6  6a0a                 push 0xa
// 005063c8  6a0a                 push 0xa
// 005063ca  680008c800           push 0xc80800
// 005063cf  8d4c2434             lea ecx, [esp + 0x34]
// 005063d3  8bd8                 mov ebx, eax
// 005063d5  8b442448             mov eax, dword ptr [esp + 0x48]
// 005063d9  50                   push eax
// 005063da  e851fdffff           call 0x506130
// 005063df  68e8030000           push 0x3e8
// 005063e4  6a6c                 push 0x6c
// 005063e6  6814010000           push 0x114
// 005063eb  6a02                 push 2
// 005063ed  6a02                 push 2
// 005063ef  6800000200           push 0x20000
// 005063f4  68040c0110           push 0x10010c04
// 005063f9  6894077a00           push 0x7a0794
// 005063fe  8d4c2438             lea ecx, [esp + 0x38]
// 00506402  e8c9feffff           call 0x5062d0
// 00506407  33f6                 xor esi, esi
// 00506409  85ff                 test edi, edi
// 0050640b  7e36                 jle 0x506443
// 0050640d  bd02000000           mov ebp, 2
// 00506412  8b542434             mov edx, dword ptr [esp + 0x34]
// 00506416  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00506419  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 0050641f  51                   push ecx
// 00506420  6a0d                 push 0xd
// 00506422  53                   push ebx
// 00506423  6a71                 push 0x71
// 00506425  55                   push ebp
// 00506426  6a00                 push 0
// 00506428  6800000110           push 0x10010000
// 0050642d  50                   push eax
// 0050642e  8d4c2438             lea ecx, [esp + 0x38]
// 00506432  e8c9fdffff           call 0x506200
// 00506437  8d4302               lea eax, [ebx + 2]
// 0050643a  83c601               add esi, 1
// 0050643d  03e8                 add ebp, eax
// 0050643f  3bf7                 cmp esi, edi
// 00506441  7ccf                 jl 0x506412
// 00506443  8b742430             mov esi, dword ptr [esp + 0x30]
// 00506447  8a0e                 mov cl, byte ptr [esi]
// 00506449  33d2                 xor edx, edx
// 0050644b  84c9                 test cl, cl
// 0050644d  8bc6                 mov eax, esi
// 0050644f  741f                 je 0x506470
// 00506451  80f90a               cmp cl, 0xa
// 00506454  750d                 jne 0x506463
// 00506456  3bc6                 cmp eax, esi
// 00506458  7409                 je 0x506463
// 0050645a  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 0050645e  7403                 je 0x506463
// 00506460  83c201               add edx, 1
// 00506463  8a4801               mov cl, byte ptr [eax + 1]
// 00506466  83c001               add eax, 1
// 00506469  83c201               add edx, 1
// 0050646c  84c9                 test cl, cl
// 0050646e  75e1                 jne 0x506451
// 00506470  83c201               add edx, 1
// 00506473  52                   push edx
// 00506474  ff153ce97700         call dword ptr [0x77e93c]
// 0050647a  8be8                 mov ebp, eax
// 0050647c  83c404               add esp, 4
// 0050647f  803e00               cmp byte ptr [esi], 0
// 00506482  8bc6                 mov eax, esi
// 00506484  8bcd                 mov ecx, ebp
// 00506486  7424                 je 0x5064ac
// 00506488  80380a               cmp byte ptr [eax], 0xa
// 0050648b  7510                 jne 0x50649d
// 0050648d  3bc6                 cmp eax, esi
// 0050648f  740c                 je 0x50649d
// 00506491  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 00506495  7406                 je 0x50649d
// 00506497  c6010d               mov byte ptr [ecx], 0xd
// 0050649a  83c101               add ecx, 1
// 0050649d  8a10                 mov dl, byte ptr [eax]
// 0050649f  8811                 mov byte ptr [ecx], dl
// 005064a1  83c001               add eax, 1
// 005064a4  83c101               add ecx, 1
// 005064a7  803800               cmp byte ptr [eax], 0
// 005064aa  75dc                 jne 0x506488
// 005064ac  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005064b0  c60100               mov byte ptr [ecx], 0
// 005064b3  6a00                 push 0
// 005064b5  896c2414             mov dword ptr [esp + 0x14], ebp
// 005064b9  89442418             mov dword ptr [esp + 0x18], eax
// 005064bd  ff1588d27700         call dword ptr [0x77d288]
// 005064c3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005064c7  8d4c2410             lea ecx, [esp + 0x10]
// 005064cb  51                   push ecx
// 005064cc  68b05e5000           push 0x505eb0
// 005064d1  6a00                 push 0
// 005064d3  56                   push esi
// 005064d4  50                   push eax
// 005064d5  ff1530ee7700         call dword ptr [0x77ee30]
// 005064db  8b1d30e97700         mov ebx, dword ptr [0x77e930]
// 005064e1  55                   push ebp
// 005064e2  8bf8                 mov edi, eax
// 005064e4  ffd3                 call ebx
// 005064e6  56                   push esi
// 005064e7  ffd3                 call ebx
// 005064e9  83c408               add esp, 8
// 005064ec  8bc7                 mov eax, edi
// 005064ee  5f                   pop edi
// 005064ef  5e                   pop esi
// 005064f0  5d                   pop ebp
// 005064f1  5b                   pop ebx
// 005064f2  83c418               add esp, 0x18
// 005064f5  c3                   ret 
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
