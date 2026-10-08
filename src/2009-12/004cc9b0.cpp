// roc 2009-12 004cc9b0  unit: G3D::VARArea  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc9b0
//
// 004cc9b0  53                   push ebx
// 004cc9b1  56                   push esi
// 004cc9b2  57                   push edi
// 004cc9b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cc9b7  d907                 fld dword ptr [edi]
// 004cc9b9  8bf1                 mov esi, ecx
// 004cc9bb  d91e                 fstp dword ptr [esi]
// 004cc9bd  8d4e10               lea ecx, [esi + 0x10]
// 004cc9c0  d94704               fld dword ptr [edi + 4]
// 004cc9c3  d95e04               fstp dword ptr [esi + 4]
// 004cc9c6  d94708               fld dword ptr [edi + 8]
// 004cc9c9  d95e08               fstp dword ptr [esi + 8]
// 004cc9cc  d9470c               fld dword ptr [edi + 0xc]
// 004cc9cf  d95e0c               fstp dword ptr [esi + 0xc]
// 004cc9d2  8b4710               mov eax, dword ptr [edi + 0x10]
// 004cc9d5  50                   push eax
// 004cc9d6  e895f1f7ff           call 0x44bb70
// 004cc9db  8bd7                 mov edx, edi
// 004cc9dd  8d4f1c               lea ecx, [edi + 0x1c]
// 004cc9e0  8d4614               lea eax, [esi + 0x14]
// 004cc9e3  2bd6                 sub edx, esi
// 004cc9e5  bb02000000           mov ebx, 2
// 004cc9ea  8d9b00000000         lea ebx, [ebx]
// 004cc9f0  d90402               fld dword ptr [edx + eax]
// 004cc9f3  83c020               add eax, 0x20
// 004cc9f6  d958e0               fstp dword ptr [eax - 0x20]
// 004cc9f9  83c120               add ecx, 0x20
// 004cc9fc  83eb01               sub ebx, 1
// 004cc9ff  d941dc               fld dword ptr [ecx - 0x24]
// 004cca02  d958e4               fstp dword ptr [eax - 0x1c]
// 004cca05  d941e0               fld dword ptr [ecx - 0x20]
// 004cca08  d958e8               fstp dword ptr [eax - 0x18]
// 004cca0b  d941e4               fld dword ptr [ecx - 0x1c]
// 004cca0e  d958ec               fstp dword ptr [eax - 0x14]
// 004cca11  d941e8               fld dword ptr [ecx - 0x18]
// 004cca14  d958f0               fstp dword ptr [eax - 0x10]
// 004cca17  d941ec               fld dword ptr [ecx - 0x14]
// 004cca1a  d958f4               fstp dword ptr [eax - 0xc]
// 004cca1d  d941f0               fld dword ptr [ecx - 0x10]
// 004cca20  d958f8               fstp dword ptr [eax - 8]
// 004cca23  d941f4               fld dword ptr [ecx - 0xc]
// 004cca26  d958fc               fstp dword ptr [eax - 4]
// 004cca29  75c5                 jne 0x4cc9f0
// 004cca2b  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 004cca2e  894e54               mov dword ptr [esi + 0x54], ecx
// 004cca31  d94758               fld dword ptr [edi + 0x58]
// 004cca34  5f                   pop edi
// 004cca35  d95e58               fstp dword ptr [esi + 0x58]
// 004cca38  8bc6                 mov eax, esi
// 004cca3a  5e                   pop esi
// 004cca3b  5b                   pop ebx
// 004cca3c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4TextureUnit@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
