// from server: 100% by auto
// roc 2009-06 004a0220  unit: G3D::VARArea  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0220
//
// 004a0220  53                   push ebx
// 004a0221  56                   push esi
// 004a0222  57                   push edi
// 004a0223  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a0227  d907                 fld dword ptr [edi]
// 004a0229  8bf1                 mov esi, ecx
// 004a022b  d91e                 fstp dword ptr [esi]
// 004a022d  8d4e10               lea ecx, [esi + 0x10]
// 004a0230  d94704               fld dword ptr [edi + 4]
// 004a0233  d95e04               fstp dword ptr [esi + 4]
// 004a0236  d94708               fld dword ptr [edi + 8]
// 004a0239  d95e08               fstp dword ptr [esi + 8]
// 004a023c  d9470c               fld dword ptr [edi + 0xc]
// 004a023f  d95e0c               fstp dword ptr [esi + 0xc]
// 004a0242  8b4710               mov eax, dword ptr [edi + 0x10]
// 004a0245  50                   push eax
// 004a0246  e815f6ffff           call 0x49f860
// 004a024b  8bd7                 mov edx, edi
// 004a024d  8d4f1c               lea ecx, [edi + 0x1c]
// 004a0250  8d4614               lea eax, [esi + 0x14]
// 004a0253  2bd6                 sub edx, esi
// 004a0255  bb02000000           mov ebx, 2
// 004a025a  8d9b00000000         lea ebx, [ebx]
// 004a0260  d90402               fld dword ptr [edx + eax]
// 004a0263  83c020               add eax, 0x20
// 004a0266  d958e0               fstp dword ptr [eax - 0x20]
// 004a0269  83c120               add ecx, 0x20
// 004a026c  83eb01               sub ebx, 1
// 004a026f  d941dc               fld dword ptr [ecx - 0x24]
// 004a0272  d958e4               fstp dword ptr [eax - 0x1c]
// 004a0275  d941e0               fld dword ptr [ecx - 0x20]
// 004a0278  d958e8               fstp dword ptr [eax - 0x18]
// 004a027b  d941e4               fld dword ptr [ecx - 0x1c]
// 004a027e  d958ec               fstp dword ptr [eax - 0x14]
// 004a0281  d941e8               fld dword ptr [ecx - 0x18]
// 004a0284  d958f0               fstp dword ptr [eax - 0x10]
// 004a0287  d941ec               fld dword ptr [ecx - 0x14]
// 004a028a  d958f4               fstp dword ptr [eax - 0xc]
// 004a028d  d941f0               fld dword ptr [ecx - 0x10]
// 004a0290  d958f8               fstp dword ptr [eax - 8]
// 004a0293  d941f4               fld dword ptr [ecx - 0xc]
// 004a0296  d958fc               fstp dword ptr [eax - 4]
// 004a0299  75c5                 jne 0x4a0260
// 004a029b  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 004a029e  894e54               mov dword ptr [esi + 0x54], ecx
// 004a02a1  d94758               fld dword ptr [edi + 0x58]
// 004a02a4  5f                   pop edi
// 004a02a5  d95e58               fstp dword ptr [esi + 0x58]
// 004a02a8  8bc6                 mov eax, esi
// 004a02aa  5e                   pop esi
// 004a02ab  5b                   pop ebx
// 004a02ac  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4TextureUnit@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
