// from server: 100% by auto
// roc 2010-06 00493520  unit: seg_00490000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493520
//
// 00493520  53                   push ebx
// 00493521  56                   push esi
// 00493522  57                   push edi
// 00493523  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00493527  d907                 fld dword ptr [edi]
// 00493529  8bf1                 mov esi, ecx
// 0049352b  d91e                 fstp dword ptr [esi]
// 0049352d  8d4e10               lea ecx, [esi + 0x10]
// 00493530  d94704               fld dword ptr [edi + 4]
// 00493533  d95e04               fstp dword ptr [esi + 4]
// 00493536  d94708               fld dword ptr [edi + 8]
// 00493539  d95e08               fstp dword ptr [esi + 8]
// 0049353c  d9470c               fld dword ptr [edi + 0xc]
// 0049353f  d95e0c               fstp dword ptr [esi + 0xc]
// 00493542  8b4710               mov eax, dword ptr [edi + 0x10]
// 00493545  50                   push eax
// 00493546  e8d537ffff           call 0x486d20
// 0049354b  8bd7                 mov edx, edi
// 0049354d  8d4f1c               lea ecx, [edi + 0x1c]
// 00493550  8d4614               lea eax, [esi + 0x14]
// 00493553  2bd6                 sub edx, esi
// 00493555  bb02000000           mov ebx, 2
// 0049355a  8d9b00000000         lea ebx, [ebx]
// 00493560  d90402               fld dword ptr [edx + eax]
// 00493563  83c020               add eax, 0x20
// 00493566  d958e0               fstp dword ptr [eax - 0x20]
// 00493569  83c120               add ecx, 0x20
// 0049356c  83eb01               sub ebx, 1
// 0049356f  d941dc               fld dword ptr [ecx - 0x24]
// 00493572  d958e4               fstp dword ptr [eax - 0x1c]
// 00493575  d941e0               fld dword ptr [ecx - 0x20]
// 00493578  d958e8               fstp dword ptr [eax - 0x18]
// 0049357b  d941e4               fld dword ptr [ecx - 0x1c]
// 0049357e  d958ec               fstp dword ptr [eax - 0x14]
// 00493581  d941e8               fld dword ptr [ecx - 0x18]
// 00493584  d958f0               fstp dword ptr [eax - 0x10]
// 00493587  d941ec               fld dword ptr [ecx - 0x14]
// 0049358a  d958f4               fstp dword ptr [eax - 0xc]
// 0049358d  d941f0               fld dword ptr [ecx - 0x10]
// 00493590  d958f8               fstp dword ptr [eax - 8]
// 00493593  d941f4               fld dword ptr [ecx - 0xc]
// 00493596  d958fc               fstp dword ptr [eax - 4]
// 00493599  75c5                 jne 0x493560
// 0049359b  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0049359e  894e54               mov dword ptr [esi + 0x54], ecx
// 004935a1  d94758               fld dword ptr [edi + 0x58]
// 004935a4  5f                   pop edi
// 004935a5  d95e58               fstp dword ptr [esi + 0x58]
// 004935a8  8bc6                 mov eax, esi
// 004935aa  5e                   pop esi
// 004935ab  5b                   pop ebx
// 004935ac  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4TextureUnit@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
