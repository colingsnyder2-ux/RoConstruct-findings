// from server: 100% by auto
// roc 2008-06 00478d40  unit: CInstanceRecord::CNameItem  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478d40
//
// 00478d40  53                   push ebx
// 00478d41  56                   push esi
// 00478d42  57                   push edi
// 00478d43  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00478d47  d907                 fld dword ptr [edi]
// 00478d49  8bf1                 mov esi, ecx
// 00478d4b  d91e                 fstp dword ptr [esi]
// 00478d4d  8d4e10               lea ecx, [esi + 0x10]
// 00478d50  d94704               fld dword ptr [edi + 4]
// 00478d53  d95e04               fstp dword ptr [esi + 4]
// 00478d56  d94708               fld dword ptr [edi + 8]
// 00478d59  d95e08               fstp dword ptr [esi + 8]
// 00478d5c  d9470c               fld dword ptr [edi + 0xc]
// 00478d5f  d95e0c               fstp dword ptr [esi + 0xc]
// 00478d62  8b4710               mov eax, dword ptr [edi + 0x10]
// 00478d65  50                   push eax
// 00478d66  e835021200           call 0x598fa0
// 00478d6b  8bd7                 mov edx, edi
// 00478d6d  8d4f1c               lea ecx, [edi + 0x1c]
// 00478d70  8d4614               lea eax, [esi + 0x14]
// 00478d73  2bd6                 sub edx, esi
// 00478d75  bb02000000           mov ebx, 2
// 00478d7a  8d9b00000000         lea ebx, [ebx]
// 00478d80  d90402               fld dword ptr [edx + eax]
// 00478d83  83c020               add eax, 0x20
// 00478d86  d958e0               fstp dword ptr [eax - 0x20]
// 00478d89  83c120               add ecx, 0x20
// 00478d8c  83eb01               sub ebx, 1
// 00478d8f  d941dc               fld dword ptr [ecx - 0x24]
// 00478d92  d958e4               fstp dword ptr [eax - 0x1c]
// 00478d95  d941e0               fld dword ptr [ecx - 0x20]
// 00478d98  d958e8               fstp dword ptr [eax - 0x18]
// 00478d9b  d941e4               fld dword ptr [ecx - 0x1c]
// 00478d9e  d958ec               fstp dword ptr [eax - 0x14]
// 00478da1  d941e8               fld dword ptr [ecx - 0x18]
// 00478da4  d958f0               fstp dword ptr [eax - 0x10]
// 00478da7  d941ec               fld dword ptr [ecx - 0x14]
// 00478daa  d958f4               fstp dword ptr [eax - 0xc]
// 00478dad  d941f0               fld dword ptr [ecx - 0x10]
// 00478db0  d958f8               fstp dword ptr [eax - 8]
// 00478db3  d941f4               fld dword ptr [ecx - 0xc]
// 00478db6  d958fc               fstp dword ptr [eax - 4]
// 00478db9  75c5                 jne 0x478d80
// 00478dbb  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00478dbe  894e54               mov dword ptr [esi + 0x54], ecx
// 00478dc1  d94758               fld dword ptr [edi + 0x58]
// 00478dc4  5f                   pop edi
// 00478dc5  d95e58               fstp dword ptr [esi + 0x58]
// 00478dc8  8bc6                 mov eax, esi
// 00478dca  5e                   pop esi
// 00478dcb  5b                   pop ebx
// 00478dcc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4TextureUnit@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
