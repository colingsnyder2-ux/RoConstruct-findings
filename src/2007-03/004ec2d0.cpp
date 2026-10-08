// roc 2007-03 004ec2d0  unit: seg_004e0000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ec2d0
//
// 004ec2d0  83ec40               sub esp, 0x40
// 004ec2d3  53                   push ebx
// 004ec2d4  55                   push ebp
// 004ec2d5  56                   push esi
// 004ec2d6  8bf1                 mov esi, ecx
// 004ec2d8  8d9e10020000         lea ebx, [esi + 0x210]
// 004ec2de  57                   push edi
// 004ec2df  8bcb                 mov ecx, ebx
// 004ec2e1  895c2410             mov dword ptr [esp + 0x10], ebx
// 004ec2e5  e8860e0100           call 0x4fd170
// 004ec2ea  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004ec2ee  6a00                 push 0
// 004ec2f0  6a00                 push 0
// 004ec2f2  8bcd                 mov ecx, ebp
// 004ec2f4  e877b7ffff           call 0x4e7a70
// 004ec2f9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004ec2fd  6a00                 push 0
// 004ec2ff  6a00                 push 0
// 004ec301  e89af2f8ff           call 0x47b5a0
// 004ec306  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004ec30a  8d442438             lea eax, [esp + 0x38]
// 004ec30e  50                   push eax
// 004ec30f  8d4c2448             lea ecx, [esp + 0x48]
// 004ec313  51                   push ecx
// 004ec314  8bcf                 mov ecx, edi
// 004ec316  e835440100           call 0x500750
// 004ec31b  8bc8                 mov ecx, eax
// 004ec31d  e86ef5feff           call 0x4db890
// 004ec322  d900                 fld dword ptr [eax]
// 004ec324  d9e0                 fchs 
// 004ec326  8d542420             lea edx, [esp + 0x20]
// 004ec32a  d95c2414             fstp dword ptr [esp + 0x14]
// 004ec32e  52                   push edx
// 004ec32f  d94004               fld dword ptr [eax + 4]
// 004ec332  8bcd                 mov ecx, ebp
// 004ec334  d9e0                 fchs 
// 004ec336  d95c241c             fstp dword ptr [esp + 0x1c]
// 004ec33a  d94008               fld dword ptr [eax + 8]
// 004ec33d  d9e0                 fchs 
// 004ec33f  d95c2420             fstp dword ptr [esp + 0x20]
// 004ec343  d9442418             fld dword ptr [esp + 0x18]
// 004ec347  d9442468             fld dword ptr [esp + 0x68]
// 004ec34b  d9c0                 fld st(0)
// 004ec34d  deca                 fmulp st(2)
// 004ec34f  d9c9                 fxch st(1)
// 004ec351  d95c2424             fstp dword ptr [esp + 0x24]
// 004ec355  d944241c             fld dword ptr [esp + 0x1c]
// 004ec359  d8c9                 fmul st(1)
// 004ec35b  d95c2428             fstp dword ptr [esp + 0x28]
// 004ec35f  d84c2420             fmul dword ptr [esp + 0x20]
// 004ec363  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ec367  e814c0ffff           call 0x4e8380
// 004ec36c  8d44242c             lea eax, [esp + 0x2c]
// 004ec370  50                   push eax
// 004ec371  8d4c2448             lea ecx, [esp + 0x48]
// 004ec375  51                   push ecx
// 004ec376  8bcf                 mov ecx, edi
// 004ec378  e8d3430100           call 0x500750
// 004ec37d  8bc8                 mov ecx, eax
// 004ec37f  e80cf5feff           call 0x4db890
// 004ec384  33ff                 xor edi, edi
// 004ec386  397e34               cmp dword ptr [esi + 0x34], edi
// 004ec389  7e33                 jle 0x4ec3be
// 004ec38b  33db                 xor ebx, ebx
// 004ec38d  8d4900               lea ecx, [ecx]
// 004ec390  8b542460             mov edx, dword ptr [esp + 0x60]
// 004ec394  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004ec398  8b4630               mov eax, dword ptr [esi + 0x30]
// 004ec39b  52                   push edx
// 004ec39c  55                   push ebp
// 004ec39d  51                   push ecx
// 004ec39e  8b4c1840             mov ecx, dword ptr [eax + ebx + 0x40]
// 004ec3a2  8d542438             lea edx, [esp + 0x38]
// 004ec3a6  03c3                 add eax, ebx
// 004ec3a8  52                   push edx
// 004ec3a9  50                   push eax
// 004ec3aa  e871d2ffff           call 0x4e9620
// 004ec3af  83c701               add edi, 1
// 004ec3b2  83c344               add ebx, 0x44
// 004ec3b5  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 004ec3b8  7cd6                 jl 0x4ec390
// 004ec3ba  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004ec3be  8bcb                 mov ecx, ebx
// 004ec3c0  e8bb0e0100           call 0x4fd280
// 004ec3c5  5f                   pop edi
// 004ec3c6  5e                   pop esi
// 004ec3c7  5d                   pop ebp
// 004ec3c8  5b                   pop ebx
// 004ec3c9  83c440               add esp, 0x40
// 004ec3cc  c21400               ret 0x14
// library rbxgs-render/RenderScene.cpp (function ?computeShadowVolumeGeometry@RenderScene@Render@RBX@@ABEXAAV?$Array@I@G3D@@AAV?$Array@VVector3@G3D@@@5@ABVGLight@5@_NM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
