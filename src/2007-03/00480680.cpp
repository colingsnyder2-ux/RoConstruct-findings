// roc 2007-03 00480680  unit: seg_00480000  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480680
//
// 00480680  83ec10               sub esp, 0x10
// 00480683  53                   push ebx
// 00480684  56                   push esi
// 00480685  8bd9                 mov ebx, ecx
// 00480687  8b4364               mov eax, dword ptr [ebx + 0x64]
// 0048068a  57                   push edi
// 0048068b  33f6                 xor esi, esi
// 0048068d  50                   push eax
// 0048068e  8974241c             mov dword ptr [esp + 0x1c], esi
// 00480692  ff15c4808b00         call dword ptr [0x8b80c4]
// 00480698  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0048069b  89433c               mov dword ptr [ebx + 0x3c], eax
// 0048069e  837b3410             cmp dword ptr [ebx + 0x34], 0x10
// 004806a2  894c2410             mov dword ptr [esp + 0x10], ecx
// 004806a6  7209                 jb 0x4806b1
// 004806a8  8b5320               mov edx, dword ptr [ebx + 0x20]
// 004806ab  8954240c             mov dword ptr [esp + 0xc], edx
// 004806af  eb07                 jmp 0x4806b8
// 004806b1  8d4b20               lea ecx, [ebx + 0x20]
// 004806b4  894c240c             mov dword ptr [esp + 0xc], ecx
// 004806b8  8d542410             lea edx, [esp + 0x10]
// 004806bc  52                   push edx
// 004806bd  8d4c2410             lea ecx, [esp + 0x10]
// 004806c1  51                   push ecx
// 004806c2  6a01                 push 1
// 004806c4  50                   push eax
// 004806c5  ff15c8808b00         call dword ptr [0x8b80c8]
// 004806cb  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004806ce  52                   push edx
// 004806cf  ff15cc808b00         call dword ptr [0x8b80cc]
// 004806d5  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 004806d8  8d442418             lea eax, [esp + 0x18]
// 004806dc  50                   push eax
// 004806dd  68818b0000           push 0x8b81
// 004806e2  51                   push ecx
// 004806e3  ff151c818b00         call dword ptr [0x8b811c]
// 004806e9  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 004806ec  8d542414             lea edx, [esp + 0x14]
// 004806f0  52                   push edx
// 004806f1  68848b0000           push 0x8b84
// 004806f6  50                   push eax
// 004806f7  ff151c818b00         call dword ptr [0x8b811c]
// 004806fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00480701  51                   push ecx
// 00480702  ff153ce97700         call dword ptr [0x77e93c]
// 00480708  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0048070b  83c404               add esp, 4
// 0048070e  8bf8                 mov edi, eax
// 00480710  8b442414             mov eax, dword ptr [esp + 0x14]
// 00480714  57                   push edi
// 00480715  8d542414             lea edx, [esp + 0x14]
// 00480719  52                   push edx
// 0048071a  50                   push eax
// 0048071b  51                   push ecx
// 0048071c  ff1510818b00         call dword ptr [0x8b8110]
// 00480722  803f00               cmp byte ptr [edi], 0
// 00480725  747c                 je 0x4807a3
// 00480727  55                   push ebp
// 00480728  8d6b44               lea ebp, [ebx + 0x44]
// 0048072b  eb03                 jmp 0x480730
// 0048072d  8d4900               lea ecx, [ecx]
// 00480730  53                   push ebx
// 00480731  8bcd                 mov ecx, ebp
// 00480733  ff1540e77700         call dword ptr [0x77e740]
// 00480739  0fb6043e             movzx eax, byte ptr [esi + edi]
// 0048073d  3c0a                 cmp al, 0xa
// 0048073f  741c                 je 0x48075d
// 00480741  3c0d                 cmp al, 0xd
// 00480743  7418                 je 0x48075d
// 00480745  84c0                 test al, al
// 00480747  7414                 je 0x48075d
// 00480749  50                   push eax
// 0048074a  8bcd                 mov ecx, ebp
// 0048074c  ff1520e67700         call dword ptr [0x77e620]
// 00480752  8a443e01             mov al, byte ptr [esi + edi + 1]
// 00480756  83c601               add esi, 1
// 00480759  3c0a                 cmp al, 0xa
// 0048075b  75e4                 jne 0x480741
// 0048075d  8a043e               mov al, byte ptr [esi + edi]
// 00480760  3c0d                 cmp al, 0xd
// 00480762  7524                 jne 0x480788
// 00480764  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 00480769  7512                 jne 0x48077d
// 0048076b  68e0607800           push 0x7860e0
// 00480770  8bcd                 mov ecx, ebp
// 00480772  ff153ce77700         call dword ptr [0x77e73c]
// 00480778  83c602               add esi, 2
// 0048077b  eb1f                 jmp 0x48079c
// 0048077d  3c0d                 cmp al, 0xd
// 0048077f  7507                 jne 0x480788
// 00480781  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 00480786  7504                 jne 0x48078c
// 00480788  3c0a                 cmp al, 0xa
// 0048078a  7510                 jne 0x48079c
// 0048078c  68e0607800           push 0x7860e0
// 00480791  8bcd                 mov ecx, ebp
// 00480793  ff153ce77700         call dword ptr [0x77e73c]
// 00480799  83c601               add esi, 1
// 0048079c  803c3e00             cmp byte ptr [esi + edi], 0
// 004807a0  758e                 jne 0x480730
// 004807a2  5d                   pop ebp
// 004807a3  57                   push edi
// 004807a4  ff1530e97700         call dword ptr [0x77e930]
// 004807aa  83c404               add esp, 4
// 004807ad  837c241801           cmp dword ptr [esp + 0x18], 1
// 004807b2  5f                   pop edi
// 004807b3  0f94c2               sete dl
// 004807b6  5e                   pop esi
// 004807b7  885340               mov byte ptr [ebx + 0x40], dl
// 004807ba  5b                   pop ebx
// 004807bb  83c410               add esp, 0x10
// 004807be  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?compile@GPUShader@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
