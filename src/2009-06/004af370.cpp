// roc 2009-06 004af370  unit: G3D::Shader  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af370
//
// 004af370  83ec10               sub esp, 0x10
// 004af373  53                   push ebx
// 004af374  56                   push esi
// 004af375  8bd9                 mov ebx, ecx
// 004af377  8b4364               mov eax, dword ptr [ebx + 0x64]
// 004af37a  57                   push edi
// 004af37b  33f6                 xor esi, esi
// 004af37d  50                   push eax
// 004af37e  8974241c             mov dword ptr [esp + 0x1c], esi
// 004af382  ff1580d2a300         call dword ptr [0xa3d280]
// 004af388  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004af38b  89433c               mov dword ptr [ebx + 0x3c], eax
// 004af38e  837b3410             cmp dword ptr [ebx + 0x34], 0x10
// 004af392  894c2410             mov dword ptr [esp + 0x10], ecx
// 004af396  7209                 jb 0x4af3a1
// 004af398  8b5320               mov edx, dword ptr [ebx + 0x20]
// 004af39b  8954240c             mov dword ptr [esp + 0xc], edx
// 004af39f  eb07                 jmp 0x4af3a8
// 004af3a1  8d4b20               lea ecx, [ebx + 0x20]
// 004af3a4  894c240c             mov dword ptr [esp + 0xc], ecx
// 004af3a8  8d542410             lea edx, [esp + 0x10]
// 004af3ac  52                   push edx
// 004af3ad  8d4c2410             lea ecx, [esp + 0x10]
// 004af3b1  51                   push ecx
// 004af3b2  6a01                 push 1
// 004af3b4  50                   push eax
// 004af3b5  ff1584d2a300         call dword ptr [0xa3d284]
// 004af3bb  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004af3be  52                   push edx
// 004af3bf  ff1588d2a300         call dword ptr [0xa3d288]
// 004af3c5  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 004af3c8  8d442418             lea eax, [esp + 0x18]
// 004af3cc  50                   push eax
// 004af3cd  68818b0000           push 0x8b81
// 004af3d2  51                   push ecx
// 004af3d3  ff15d8d2a300         call dword ptr [0xa3d2d8]
// 004af3d9  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 004af3dc  8d542414             lea edx, [esp + 0x14]
// 004af3e0  52                   push edx
// 004af3e1  68848b0000           push 0x8b84
// 004af3e6  50                   push eax
// 004af3e7  ff15d8d2a300         call dword ptr [0xa3d2d8]
// 004af3ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004af3f1  51                   push ecx
// 004af3f2  ff1594e98900         call dword ptr [0x89e994]
// 004af3f8  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 004af3fb  83c404               add esp, 4
// 004af3fe  8bf8                 mov edi, eax
// 004af400  8b442414             mov eax, dword ptr [esp + 0x14]
// 004af404  57                   push edi
// 004af405  8d542414             lea edx, [esp + 0x14]
// 004af409  52                   push edx
// 004af40a  50                   push eax
// 004af40b  51                   push ecx
// 004af40c  ff15ccd2a300         call dword ptr [0xa3d2cc]
// 004af412  803f00               cmp byte ptr [edi], 0
// 004af415  7478                 je 0x4af48f
// 004af417  55                   push ebp
// 004af418  8d6b44               lea ebp, [ebx + 0x44]
// 004af41b  eb03                 jmp 0x4af420
// 004af41d  8d4900               lea ecx, [ecx]
// 004af420  53                   push ebx
// 004af421  8bcd                 mov ecx, ebp
// 004af423  ff15ace48900         call dword ptr [0x89e4ac]
// 004af429  0fb6043e             movzx eax, byte ptr [esi + edi]
// 004af42d  3c0a                 cmp al, 0xa
// 004af42f  741a                 je 0x4af44b
// 004af431  3c0d                 cmp al, 0xd
// 004af433  7416                 je 0x4af44b
// 004af435  84c0                 test al, al
// 004af437  7412                 je 0x4af44b
// 004af439  50                   push eax
// 004af43a  8bcd                 mov ecx, ebp
// 004af43c  ff1558e58900         call dword ptr [0x89e558]
// 004af442  8a443e01             mov al, byte ptr [esi + edi + 1]
// 004af446  46                   inc esi
// 004af447  3c0a                 cmp al, 0xa
// 004af449  75e6                 jne 0x4af431
// 004af44b  8a043e               mov al, byte ptr [esi + edi]
// 004af44e  3c0d                 cmp al, 0xd
// 004af450  7524                 jne 0x4af476
// 004af452  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004af457  7512                 jne 0x4af46b
// 004af459  68e8d18a00           push 0x8ad1e8
// 004af45e  8bcd                 mov ecx, ebp
// 004af460  ff15a4e48900         call dword ptr [0x89e4a4]
// 004af466  83c602               add esi, 2
// 004af469  eb1d                 jmp 0x4af488
// 004af46b  3c0d                 cmp al, 0xd
// 004af46d  7507                 jne 0x4af476
// 004af46f  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004af474  7504                 jne 0x4af47a
// 004af476  3c0a                 cmp al, 0xa
// 004af478  750e                 jne 0x4af488
// 004af47a  68e8d18a00           push 0x8ad1e8
// 004af47f  8bcd                 mov ecx, ebp
// 004af481  ff15a4e48900         call dword ptr [0x89e4a4]
// 004af487  46                   inc esi
// 004af488  803c3e00             cmp byte ptr [esi + edi], 0
// 004af48c  7592                 jne 0x4af420
// 004af48e  5d                   pop ebp
// 004af48f  57                   push edi
// 004af490  ff15cce98900         call dword ptr [0x89e9cc]
// 004af496  83c404               add esp, 4
// 004af499  837c241801           cmp dword ptr [esp + 0x18], 1
// 004af49e  5f                   pop edi
// 004af49f  0f94c2               sete dl
// 004af4a2  5e                   pop esi
// 004af4a3  885340               mov byte ptr [ebx + 0x40], dl
// 004af4a6  5b                   pop ebx
// 004af4a7  83c410               add esp, 0x10
// 004af4aa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?compile@GPUShader@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
