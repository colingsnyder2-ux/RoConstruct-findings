// from server: 100% by auto
// roc 2009-06 004afa60  unit: G3D::Shader  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004afa60
//
// 004afa60  64a100000000         mov eax, dword ptr fs:[0]
// 004afa66  6aff                 push -1
// 004afa68  68f17d8600           push 0x867df1
// 004afa6d  50                   push eax
// 004afa6e  64892500000000       mov dword ptr fs:[0], esp
// 004afa75  83ec08               sub esp, 8
// 004afa78  55                   push ebp
// 004afa79  56                   push esi
// 004afa7a  57                   push edi
// 004afa7b  8bf9                 mov edi, ecx
// 004afa7d  8b4708               mov eax, dword ptr [edi + 8]
// 004afa80  8b2f                 mov ebp, dword ptr [edi]
// 004afa82  8d0440               lea eax, [eax + eax*2]
// 004afa85  c1e004               shl eax, 4
// 004afa88  6a10                 push 0x10
// 004afa8a  50                   push eax
// 004afa8b  e8e0b60b00           call 0x56b170
// 004afa90  8b4f08               mov ecx, dword ptr [edi + 8]
// 004afa93  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004afa97  83c408               add esp, 8
// 004afa9a  3bd1                 cmp edx, ecx
// 004afa9c  8907                 mov dword ptr [edi], eax
// 004afa9e  7d02                 jge 0x4afaa2
// 004afaa0  8bca                 mov ecx, edx
// 004afaa2  53                   push ebx
// 004afaa3  8d1c49               lea ebx, [ecx + ecx*2]
// 004afaa6  c1e304               shl ebx, 4
// 004afaa9  8bf0                 mov esi, eax
// 004afaab  03d8                 add ebx, eax
// 004afaad  89742410             mov dword ptr [esp + 0x10], esi
// 004afab1  3bf3                 cmp esi, ebx
// 004afab3  735c                 jae 0x4afb11
// 004afab5  8d7d08               lea edi, [ebp + 8]
// 004afab8  eb06                 jmp 0x4afac0
// 004afaba  8d9b00000000         lea ebx, [ebx]
// 004afac0  89742414             mov dword ptr [esp + 0x14], esi
// 004afac4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004afacc  85f6                 test esi, esi
// 004aface  742b                 je 0x4afafb
// 004afad0  8a4ff8               mov cl, byte ptr [edi - 8]
// 004afad3  880e                 mov byte ptr [esi], cl
// 004afad5  8b57fc               mov edx, dword ptr [edi - 4]
// 004afad8  57                   push edi
// 004afad9  8d4e08               lea ecx, [esi + 8]
// 004afadc  895604               mov dword ptr [esi + 4], edx
// 004afadf  ff15b8e48900         call dword ptr [0x89e4b8]
// 004afae5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004afae8  894624               mov dword ptr [esi + 0x24], eax
// 004afaeb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004afaee  894e28               mov dword ptr [esi + 0x28], ecx
// 004afaf1  8b5724               mov edx, dword ptr [edi + 0x24]
// 004afaf4  89562c               mov dword ptr [esi + 0x2c], edx
// 004afaf7  8b542428             mov edx, dword ptr [esp + 0x28]
// 004afafb  83c630               add esi, 0x30
// 004afafe  83c730               add edi, 0x30
// 004afb01  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004afb09  89742410             mov dword ptr [esp + 0x10], esi
// 004afb0d  3bf3                 cmp esi, ebx
// 004afb0f  72af                 jb 0x4afac0
// 004afb11  8d3452               lea esi, [edx + edx*2]
// 004afb14  c1e604               shl esi, 4
// 004afb17  03f5                 add esi, ebp
// 004afb19  8bfd                 mov edi, ebp
// 004afb1b  5b                   pop ebx
// 004afb1c  3bee                 cmp ebp, esi
// 004afb1e  7310                 jae 0x4afb30
// 004afb20  8d4f08               lea ecx, [edi + 8]
// 004afb23  ff15c4e48900         call dword ptr [0x89e4c4]
// 004afb29  83c730               add edi, 0x30
// 004afb2c  3bfe                 cmp edi, esi
// 004afb2e  72f0                 jb 0x4afb20
// 004afb30  55                   push ebp
// 004afb31  e85ab70b00           call 0x56b290
// 004afb36  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004afb3a  83c404               add esp, 4
// 004afb3d  5f                   pop edi
// 004afb3e  5e                   pop esi
// 004afb3f  5d                   pop ebp
// 004afb40  64890d00000000       mov dword ptr fs:[0], ecx
// 004afb47  83c414               add esp, 0x14
// 004afb4a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?realloc@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
