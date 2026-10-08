// roc 2009-12 004dc5a0  unit: G3D::Shader  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc5a0
//
// 004dc5a0  64a100000000         mov eax, dword ptr fs:[0]
// 004dc5a6  6aff                 push -1
// 004dc5a8  68012b9300           push 0x932b01
// 004dc5ad  50                   push eax
// 004dc5ae  64892500000000       mov dword ptr fs:[0], esp
// 004dc5b5  83ec08               sub esp, 8
// 004dc5b8  55                   push ebp
// 004dc5b9  56                   push esi
// 004dc5ba  57                   push edi
// 004dc5bb  8bf9                 mov edi, ecx
// 004dc5bd  8b4708               mov eax, dword ptr [edi + 8]
// 004dc5c0  8b2f                 mov ebp, dword ptr [edi]
// 004dc5c2  8d0440               lea eax, [eax + eax*2]
// 004dc5c5  c1e004               shl eax, 4
// 004dc5c8  6a10                 push 0x10
// 004dc5ca  50                   push eax
// 004dc5cb  e8f0dc1000           call 0x5ea2c0
// 004dc5d0  8b4f08               mov ecx, dword ptr [edi + 8]
// 004dc5d3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004dc5d7  83c408               add esp, 8
// 004dc5da  3bd1                 cmp edx, ecx
// 004dc5dc  8907                 mov dword ptr [edi], eax
// 004dc5de  7d02                 jge 0x4dc5e2
// 004dc5e0  8bca                 mov ecx, edx
// 004dc5e2  53                   push ebx
// 004dc5e3  8d1c49               lea ebx, [ecx + ecx*2]
// 004dc5e6  c1e304               shl ebx, 4
// 004dc5e9  8bf0                 mov esi, eax
// 004dc5eb  03d8                 add ebx, eax
// 004dc5ed  89742410             mov dword ptr [esp + 0x10], esi
// 004dc5f1  3bf3                 cmp esi, ebx
// 004dc5f3  735c                 jae 0x4dc651
// 004dc5f5  8d7d08               lea edi, [ebp + 8]
// 004dc5f8  eb06                 jmp 0x4dc600
// 004dc5fa  8d9b00000000         lea ebx, [ebx]
// 004dc600  89742414             mov dword ptr [esp + 0x14], esi
// 004dc604  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004dc60c  85f6                 test esi, esi
// 004dc60e  742b                 je 0x4dc63b
// 004dc610  8a4ff8               mov cl, byte ptr [edi - 8]
// 004dc613  880e                 mov byte ptr [esi], cl
// 004dc615  8b57fc               mov edx, dword ptr [edi - 4]
// 004dc618  57                   push edi
// 004dc619  8d4e08               lea ecx, [esi + 8]
// 004dc61c  895604               mov dword ptr [esi + 4], edx
// 004dc61f  ff15f0b69800         call dword ptr [0x98b6f0]
// 004dc625  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004dc628  894624               mov dword ptr [esi + 0x24], eax
// 004dc62b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004dc62e  894e28               mov dword ptr [esi + 0x28], ecx
// 004dc631  8b5724               mov edx, dword ptr [edi + 0x24]
// 004dc634  89562c               mov dword ptr [esi + 0x2c], edx
// 004dc637  8b542428             mov edx, dword ptr [esp + 0x28]
// 004dc63b  83c630               add esi, 0x30
// 004dc63e  83c730               add edi, 0x30
// 004dc641  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004dc649  89742410             mov dword ptr [esp + 0x10], esi
// 004dc64d  3bf3                 cmp esi, ebx
// 004dc64f  72af                 jb 0x4dc600
// 004dc651  8d3452               lea esi, [edx + edx*2]
// 004dc654  c1e604               shl esi, 4
// 004dc657  03f5                 add esi, ebp
// 004dc659  8bfd                 mov edi, ebp
// 004dc65b  5b                   pop ebx
// 004dc65c  3bee                 cmp ebp, esi
// 004dc65e  7310                 jae 0x4dc670
// 004dc660  8d4f08               lea ecx, [edi + 8]
// 004dc663  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc669  83c730               add edi, 0x30
// 004dc66c  3bfe                 cmp edi, esi
// 004dc66e  72f0                 jb 0x4dc660
// 004dc670  55                   push ebp
// 004dc671  e86add1000           call 0x5ea3e0
// 004dc676  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004dc67a  83c404               add esp, 4
// 004dc67d  5f                   pop edi
// 004dc67e  5e                   pop esi
// 004dc67f  5d                   pop ebp
// 004dc680  64890d00000000       mov dword ptr fs:[0], ecx
// 004dc687  83c414               add esp, 0x14
// 004dc68a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?realloc@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
