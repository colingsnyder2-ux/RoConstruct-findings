// from server: 100% by auto
// roc 2010-06 004989d0  unit: G3D::Shader  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004989d0
//
// 004989d0  64a100000000         mov eax, dword ptr fs:[0]
// 004989d6  6aff                 push -1
// 004989d8  6891299a00           push 0x9a2991
// 004989dd  50                   push eax
// 004989de  64892500000000       mov dword ptr fs:[0], esp
// 004989e5  83ec08               sub esp, 8
// 004989e8  55                   push ebp
// 004989e9  56                   push esi
// 004989ea  57                   push edi
// 004989eb  8bf9                 mov edi, ecx
// 004989ed  8b4708               mov eax, dword ptr [edi + 8]
// 004989f0  8b2f                 mov ebp, dword ptr [edi]
// 004989f2  8d0440               lea eax, [eax + eax*2]
// 004989f5  c1e004               shl eax, 4
// 004989f8  6a10                 push 0x10
// 004989fa  50                   push eax
// 004989fb  e8a04e0b00           call 0x54d8a0
// 00498a00  8b4f08               mov ecx, dword ptr [edi + 8]
// 00498a03  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00498a07  83c408               add esp, 8
// 00498a0a  3bd1                 cmp edx, ecx
// 00498a0c  8907                 mov dword ptr [edi], eax
// 00498a0e  7d02                 jge 0x498a12
// 00498a10  8bca                 mov ecx, edx
// 00498a12  53                   push ebx
// 00498a13  8d1c49               lea ebx, [ecx + ecx*2]
// 00498a16  c1e304               shl ebx, 4
// 00498a19  8bf0                 mov esi, eax
// 00498a1b  03d8                 add ebx, eax
// 00498a1d  89742410             mov dword ptr [esp + 0x10], esi
// 00498a21  3bf3                 cmp esi, ebx
// 00498a23  735c                 jae 0x498a81
// 00498a25  8d7d08               lea edi, [ebp + 8]
// 00498a28  eb06                 jmp 0x498a30
// 00498a2a  8d9b00000000         lea ebx, [ebx]
// 00498a30  89742414             mov dword ptr [esp + 0x14], esi
// 00498a34  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00498a3c  85f6                 test esi, esi
// 00498a3e  742b                 je 0x498a6b
// 00498a40  8a4ff8               mov cl, byte ptr [edi - 8]
// 00498a43  880e                 mov byte ptr [esi], cl
// 00498a45  8b57fc               mov edx, dword ptr [edi - 4]
// 00498a48  57                   push edi
// 00498a49  8d4e08               lea ecx, [esi + 8]
// 00498a4c  895604               mov dword ptr [esi + 4], edx
// 00498a4f  ff150ca49e00         call dword ptr [0x9ea40c]
// 00498a55  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00498a58  894624               mov dword ptr [esi + 0x24], eax
// 00498a5b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00498a5e  894e28               mov dword ptr [esi + 0x28], ecx
// 00498a61  8b5724               mov edx, dword ptr [edi + 0x24]
// 00498a64  89562c               mov dword ptr [esi + 0x2c], edx
// 00498a67  8b542428             mov edx, dword ptr [esp + 0x28]
// 00498a6b  83c630               add esi, 0x30
// 00498a6e  83c730               add edi, 0x30
// 00498a71  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00498a79  89742410             mov dword ptr [esp + 0x10], esi
// 00498a7d  3bf3                 cmp esi, ebx
// 00498a7f  72af                 jb 0x498a30
// 00498a81  8d3452               lea esi, [edx + edx*2]
// 00498a84  c1e604               shl esi, 4
// 00498a87  03f5                 add esi, ebp
// 00498a89  8bfd                 mov edi, ebp
// 00498a8b  5b                   pop ebx
// 00498a8c  3bee                 cmp ebp, esi
// 00498a8e  7310                 jae 0x498aa0
// 00498a90  8d4f08               lea ecx, [edi + 8]
// 00498a93  ff1500a49e00         call dword ptr [0x9ea400]
// 00498a99  83c730               add edi, 0x30
// 00498a9c  3bfe                 cmp edi, esi
// 00498a9e  72f0                 jb 0x498a90
// 00498aa0  55                   push ebp
// 00498aa1  e81a4f0b00           call 0x54d9c0
// 00498aa6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00498aaa  83c404               add esp, 4
// 00498aad  5f                   pop edi
// 00498aae  5e                   pop esi
// 00498aaf  5d                   pop ebp
// 00498ab0  64890d00000000       mov dword ptr fs:[0], ecx
// 00498ab7  83c414               add esp, 0x14
// 00498aba  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?realloc@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
