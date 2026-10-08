// from server: 100% by auto
// roc 2008-06 00485b70  unit: G3D::Shader  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485b70
//
// 00485b70  64a100000000         mov eax, dword ptr fs:[0]
// 00485b76  6aff                 push -1
// 00485b78  6881757d00           push 0x7d7581
// 00485b7d  50                   push eax
// 00485b7e  64892500000000       mov dword ptr fs:[0], esp
// 00485b85  83ec08               sub esp, 8
// 00485b88  55                   push ebp
// 00485b89  56                   push esi
// 00485b8a  57                   push edi
// 00485b8b  8bf9                 mov edi, ecx
// 00485b8d  8b4708               mov eax, dword ptr [edi + 8]
// 00485b90  8b2f                 mov ebp, dword ptr [edi]
// 00485b92  8d0440               lea eax, [eax + eax*2]
// 00485b95  c1e004               shl eax, 4
// 00485b98  6a10                 push 0x10
// 00485b9a  50                   push eax
// 00485b9b  e8e0290800           call 0x508580
// 00485ba0  8b4f08               mov ecx, dword ptr [edi + 8]
// 00485ba3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00485ba7  83c408               add esp, 8
// 00485baa  3bd1                 cmp edx, ecx
// 00485bac  8907                 mov dword ptr [edi], eax
// 00485bae  7d02                 jge 0x485bb2
// 00485bb0  8bca                 mov ecx, edx
// 00485bb2  53                   push ebx
// 00485bb3  8d1c49               lea ebx, [ecx + ecx*2]
// 00485bb6  c1e304               shl ebx, 4
// 00485bb9  8bf0                 mov esi, eax
// 00485bbb  03d8                 add ebx, eax
// 00485bbd  89742410             mov dword ptr [esp + 0x10], esi
// 00485bc1  3bf3                 cmp esi, ebx
// 00485bc3  735c                 jae 0x485c21
// 00485bc5  8d7d08               lea edi, [ebp + 8]
// 00485bc8  eb06                 jmp 0x485bd0
// 00485bca  8d9b00000000         lea ebx, [ebx]
// 00485bd0  89742414             mov dword ptr [esp + 0x14], esi
// 00485bd4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00485bdc  85f6                 test esi, esi
// 00485bde  742b                 je 0x485c0b
// 00485be0  8a4ff8               mov cl, byte ptr [edi - 8]
// 00485be3  880e                 mov byte ptr [esi], cl
// 00485be5  8b57fc               mov edx, dword ptr [edi - 4]
// 00485be8  57                   push edi
// 00485be9  8d4e08               lea ecx, [esi + 8]
// 00485bec  895604               mov dword ptr [esi + 4], edx
// 00485bef  ff155c248000         call dword ptr [0x80245c]
// 00485bf5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00485bf8  894624               mov dword ptr [esi + 0x24], eax
// 00485bfb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00485bfe  894e28               mov dword ptr [esi + 0x28], ecx
// 00485c01  8b5724               mov edx, dword ptr [edi + 0x24]
// 00485c04  89562c               mov dword ptr [esi + 0x2c], edx
// 00485c07  8b542428             mov edx, dword ptr [esp + 0x28]
// 00485c0b  83c630               add esi, 0x30
// 00485c0e  83c730               add edi, 0x30
// 00485c11  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00485c19  89742410             mov dword ptr [esp + 0x10], esi
// 00485c1d  3bf3                 cmp esi, ebx
// 00485c1f  72af                 jb 0x485bd0
// 00485c21  8d3452               lea esi, [edx + edx*2]
// 00485c24  c1e604               shl esi, 4
// 00485c27  03f5                 add esi, ebp
// 00485c29  8bfd                 mov edi, ebp
// 00485c2b  5b                   pop ebx
// 00485c2c  3bee                 cmp ebp, esi
// 00485c2e  7310                 jae 0x485c40
// 00485c30  8d4f08               lea ecx, [edi + 8]
// 00485c33  ff1568248000         call dword ptr [0x802468]
// 00485c39  83c730               add edi, 0x30
// 00485c3c  3bfe                 cmp edi, esi
// 00485c3e  72f0                 jb 0x485c30
// 00485c40  55                   push ebp
// 00485c41  e8da200800           call 0x507d20
// 00485c46  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00485c4a  83c404               add esp, 4
// 00485c4d  5f                   pop edi
// 00485c4e  5e                   pop esi
// 00485c4f  5d                   pop ebp
// 00485c50  64890d00000000       mov dword ptr fs:[0], ecx
// 00485c57  83c414               add esp, 0x14
// 00485c5a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?realloc@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
