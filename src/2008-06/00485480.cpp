// roc 2008-06 00485480  unit: G3D::Shader  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485480
//
// 00485480  83ec10               sub esp, 0x10
// 00485483  53                   push ebx
// 00485484  56                   push esi
// 00485485  8bd9                 mov ebx, ecx
// 00485487  8b4364               mov eax, dword ptr [ebx + 0x64]
// 0048548a  57                   push edi
// 0048548b  33f6                 xor esi, esi
// 0048548d  50                   push eax
// 0048548e  8974241c             mov dword ptr [esp + 0x1c], esi
// 00485492  ff1520f99600         call dword ptr [0x96f920]
// 00485498  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0048549b  89433c               mov dword ptr [ebx + 0x3c], eax
// 0048549e  837b3410             cmp dword ptr [ebx + 0x34], 0x10
// 004854a2  894c2410             mov dword ptr [esp + 0x10], ecx
// 004854a6  7209                 jb 0x4854b1
// 004854a8  8b5320               mov edx, dword ptr [ebx + 0x20]
// 004854ab  8954240c             mov dword ptr [esp + 0xc], edx
// 004854af  eb07                 jmp 0x4854b8
// 004854b1  8d4b20               lea ecx, [ebx + 0x20]
// 004854b4  894c240c             mov dword ptr [esp + 0xc], ecx
// 004854b8  8d542410             lea edx, [esp + 0x10]
// 004854bc  52                   push edx
// 004854bd  8d4c2410             lea ecx, [esp + 0x10]
// 004854c1  51                   push ecx
// 004854c2  6a01                 push 1
// 004854c4  50                   push eax
// 004854c5  ff1524f99600         call dword ptr [0x96f924]
// 004854cb  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004854ce  52                   push edx
// 004854cf  ff1528f99600         call dword ptr [0x96f928]
// 004854d5  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 004854d8  8d442418             lea eax, [esp + 0x18]
// 004854dc  50                   push eax
// 004854dd  68818b0000           push 0x8b81
// 004854e2  51                   push ecx
// 004854e3  ff1578f99600         call dword ptr [0x96f978]
// 004854e9  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 004854ec  8d542414             lea edx, [esp + 0x14]
// 004854f0  52                   push edx
// 004854f1  68848b0000           push 0x8b84
// 004854f6  50                   push eax
// 004854f7  ff1578f99600         call dword ptr [0x96f978]
// 004854fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00485501  51                   push ecx
// 00485502  ff15b0288000         call dword ptr [0x8028b0]
// 00485508  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0048550b  83c404               add esp, 4
// 0048550e  8bf8                 mov edi, eax
// 00485510  8b442414             mov eax, dword ptr [esp + 0x14]
// 00485514  57                   push edi
// 00485515  8d542414             lea edx, [esp + 0x14]
// 00485519  52                   push edx
// 0048551a  50                   push eax
// 0048551b  51                   push ecx
// 0048551c  ff156cf99600         call dword ptr [0x96f96c]
// 00485522  803f00               cmp byte ptr [edi], 0
// 00485525  7478                 je 0x48559f
// 00485527  55                   push ebp
// 00485528  8d6b44               lea ebp, [ebx + 0x44]
// 0048552b  eb03                 jmp 0x485530
// 0048552d  8d4900               lea ecx, [ecx]
// 00485530  53                   push ebx
// 00485531  8bcd                 mov ecx, ebp
// 00485533  ff1550248000         call dword ptr [0x802450]
// 00485539  0fb6043e             movzx eax, byte ptr [esi + edi]
// 0048553d  3c0a                 cmp al, 0xa
// 0048553f  741a                 je 0x48555b
// 00485541  3c0d                 cmp al, 0xd
// 00485543  7416                 je 0x48555b
// 00485545  84c0                 test al, al
// 00485547  7412                 je 0x48555b
// 00485549  50                   push eax
// 0048554a  8bcd                 mov ecx, ebp
// 0048554c  ff15b4248000         call dword ptr [0x8024b4]
// 00485552  8a443e01             mov al, byte ptr [esi + edi + 1]
// 00485556  46                   inc esi
// 00485557  3c0a                 cmp al, 0xa
// 00485559  75e6                 jne 0x485541
// 0048555b  8a043e               mov al, byte ptr [esi + edi]
// 0048555e  3c0d                 cmp al, 0xd
// 00485560  7524                 jne 0x485586
// 00485562  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 00485567  7512                 jne 0x48557b
// 00485569  68e8b68000           push 0x80b6e8
// 0048556e  8bcd                 mov ecx, ebp
// 00485570  ff1548248000         call dword ptr [0x802448]
// 00485576  83c602               add esi, 2
// 00485579  eb1d                 jmp 0x485598
// 0048557b  3c0d                 cmp al, 0xd
// 0048557d  7507                 jne 0x485586
// 0048557f  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 00485584  7504                 jne 0x48558a
// 00485586  3c0a                 cmp al, 0xa
// 00485588  750e                 jne 0x485598
// 0048558a  68e8b68000           push 0x80b6e8
// 0048558f  8bcd                 mov ecx, ebp
// 00485591  ff1548248000         call dword ptr [0x802448]
// 00485597  46                   inc esi
// 00485598  803c3e00             cmp byte ptr [esi + edi], 0
// 0048559c  7592                 jne 0x485530
// 0048559e  5d                   pop ebp
// 0048559f  57                   push edi
// 004855a0  ff15c0288000         call dword ptr [0x8028c0]
// 004855a6  83c404               add esp, 4
// 004855a9  837c241801           cmp dword ptr [esp + 0x18], 1
// 004855ae  5f                   pop edi
// 004855af  0f94c2               sete dl
// 004855b2  5e                   pop esi
// 004855b3  885340               mov byte ptr [ebx + 0x40], dl
// 004855b6  5b                   pop ebx
// 004855b7  83c410               add esp, 0x10
// 004855ba  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?compile@GPUShader@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
