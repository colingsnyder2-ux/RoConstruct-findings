// roc 2007-08 004f8860  unit: G3D::Sphere  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8860
//
// 004f8860  83ec40               sub esp, 0x40
// 004f8863  53                   push ebx
// 004f8864  55                   push ebp
// 004f8865  56                   push esi
// 004f8866  8bf1                 mov esi, ecx
// 004f8868  8d9e10020000         lea ebx, [esi + 0x210]
// 004f886e  57                   push edi
// 004f886f  8bcb                 mov ecx, ebx
// 004f8871  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f8875  e846f90000           call 0x5081c0
// 004f887a  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004f887e  6a00                 push 0
// 004f8880  6a00                 push 0
// 004f8882  8bcd                 mov ecx, ebp
// 004f8884  e867b8ffff           call 0x4f40f0
// 004f8889  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004f888d  6a00                 push 0
// 004f888f  6a00                 push 0
// 004f8891  e82a47f8ff           call 0x47cfc0
// 004f8896  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004f889a  8d442438             lea eax, [esp + 0x38]
// 004f889e  50                   push eax
// 004f889f  8d4c2448             lea ecx, [esp + 0x48]
// 004f88a3  51                   push ecx
// 004f88a4  8bcf                 mov ecx, edi
// 004f88a6  e885270100           call 0x50b030
// 004f88ab  8bc8                 mov ecx, eax
// 004f88ad  e83ef5feff           call 0x4e7df0
// 004f88b2  d900                 fld dword ptr [eax]
// 004f88b4  d9e0                 fchs 
// 004f88b6  8d542420             lea edx, [esp + 0x20]
// 004f88ba  d95c2414             fstp dword ptr [esp + 0x14]
// 004f88be  52                   push edx
// 004f88bf  d94004               fld dword ptr [eax + 4]
// 004f88c2  8bcd                 mov ecx, ebp
// 004f88c4  d9e0                 fchs 
// 004f88c6  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f88ca  d94008               fld dword ptr [eax + 8]
// 004f88cd  d9e0                 fchs 
// 004f88cf  d95c2420             fstp dword ptr [esp + 0x20]
// 004f88d3  d9442418             fld dword ptr [esp + 0x18]
// 004f88d7  d9442468             fld dword ptr [esp + 0x68]
// 004f88db  d9c0                 fld st(0)
// 004f88dd  deca                 fmulp st(2)
// 004f88df  d9c9                 fxch st(1)
// 004f88e1  d95c2424             fstp dword ptr [esp + 0x24]
// 004f88e5  d944241c             fld dword ptr [esp + 0x1c]
// 004f88e9  d8c9                 fmul st(1)
// 004f88eb  d95c2428             fstp dword ptr [esp + 0x28]
// 004f88ef  d84c2420             fmul dword ptr [esp + 0x20]
// 004f88f3  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f88f7  e824c0ffff           call 0x4f4920
// 004f88fc  8d44242c             lea eax, [esp + 0x2c]
// 004f8900  50                   push eax
// 004f8901  8d4c2448             lea ecx, [esp + 0x48]
// 004f8905  51                   push ecx
// 004f8906  8bcf                 mov ecx, edi
// 004f8908  e823270100           call 0x50b030
// 004f890d  8bc8                 mov ecx, eax
// 004f890f  e8dcf4feff           call 0x4e7df0
// 004f8914  33ff                 xor edi, edi
// 004f8916  397e34               cmp dword ptr [esi + 0x34], edi
// 004f8919  7e33                 jle 0x4f894e
// 004f891b  33db                 xor ebx, ebx
// 004f891d  8d4900               lea ecx, [ecx]
// 004f8920  8b542460             mov edx, dword ptr [esp + 0x60]
// 004f8924  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004f8928  8b4630               mov eax, dword ptr [esi + 0x30]
// 004f892b  52                   push edx
// 004f892c  55                   push ebp
// 004f892d  51                   push ecx
// 004f892e  8b4c1840             mov ecx, dword ptr [eax + ebx + 0x40]
// 004f8932  8d542438             lea edx, [esp + 0x38]
// 004f8936  03c3                 add eax, ebx
// 004f8938  52                   push edx
// 004f8939  50                   push eax
// 004f893a  e8b1d2ffff           call 0x4f5bf0
// 004f893f  83c701               add edi, 1
// 004f8942  83c344               add ebx, 0x44
// 004f8945  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 004f8948  7cd6                 jl 0x4f8920
// 004f894a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f894e  8bcb                 mov ecx, ebx
// 004f8950  e87bf90000           call 0x5082d0
// 004f8955  5f                   pop edi
// 004f8956  5e                   pop esi
// 004f8957  5d                   pop ebp
// 004f8958  5b                   pop ebx
// 004f8959  83c440               add esp, 0x40
// 004f895c  c21400               ret 0x14
// library rbxgs-render/RenderScene.cpp (function ?computeShadowVolumeGeometry@RenderScene@Render@RBX@@ABEXAAV?$Array@I@G3D@@AAV?$Array@VVector3@G3D@@@5@ABVGLight@5@_NM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
