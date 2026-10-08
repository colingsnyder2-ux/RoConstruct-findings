// roc 2007-03 00475b80  unit: seg_00470000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475b80
//
// 00475b80  53                   push ebx
// 00475b81  56                   push esi
// 00475b82  57                   push edi
// 00475b83  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00475b87  d907                 fld dword ptr [edi]
// 00475b89  8bf1                 mov esi, ecx
// 00475b8b  d91e                 fstp dword ptr [esi]
// 00475b8d  8d4e10               lea ecx, [esi + 0x10]
// 00475b90  d94704               fld dword ptr [edi + 4]
// 00475b93  d95e04               fstp dword ptr [esi + 4]
// 00475b96  d94708               fld dword ptr [edi + 8]
// 00475b99  d95e08               fstp dword ptr [esi + 8]
// 00475b9c  d9470c               fld dword ptr [edi + 0xc]
// 00475b9f  d95e0c               fstp dword ptr [esi + 0xc]
// 00475ba2  8b4710               mov eax, dword ptr [edi + 0x10]
// 00475ba5  50                   push eax
// 00475ba6  e8e5f4ffff           call 0x475090
// 00475bab  8bd7                 mov edx, edi
// 00475bad  8d4f1c               lea ecx, [edi + 0x1c]
// 00475bb0  8d4614               lea eax, [esi + 0x14]
// 00475bb3  2bd6                 sub edx, esi
// 00475bb5  bb02000000           mov ebx, 2
// 00475bba  8d9b00000000         lea ebx, [ebx]
// 00475bc0  d90402               fld dword ptr [edx + eax]
// 00475bc3  83c020               add eax, 0x20
// 00475bc6  d958e0               fstp dword ptr [eax - 0x20]
// 00475bc9  83c120               add ecx, 0x20
// 00475bcc  83eb01               sub ebx, 1
// 00475bcf  d941dc               fld dword ptr [ecx - 0x24]
// 00475bd2  d958e4               fstp dword ptr [eax - 0x1c]
// 00475bd5  d941e0               fld dword ptr [ecx - 0x20]
// 00475bd8  d958e8               fstp dword ptr [eax - 0x18]
// 00475bdb  d941e4               fld dword ptr [ecx - 0x1c]
// 00475bde  d958ec               fstp dword ptr [eax - 0x14]
// 00475be1  d941e8               fld dword ptr [ecx - 0x18]
// 00475be4  d958f0               fstp dword ptr [eax - 0x10]
// 00475be7  d941ec               fld dword ptr [ecx - 0x14]
// 00475bea  d958f4               fstp dword ptr [eax - 0xc]
// 00475bed  d941f0               fld dword ptr [ecx - 0x10]
// 00475bf0  d958f8               fstp dword ptr [eax - 8]
// 00475bf3  d941f4               fld dword ptr [ecx - 0xc]
// 00475bf6  d958fc               fstp dword ptr [eax - 4]
// 00475bf9  75c5                 jne 0x475bc0
// 00475bfb  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00475bfe  894e54               mov dword ptr [esi + 0x54], ecx
// 00475c01  d94758               fld dword ptr [edi + 0x58]
// 00475c04  5f                   pop edi
// 00475c05  d95e58               fstp dword ptr [esi + 0x58]
// 00475c08  8bc6                 mov eax, esi
// 00475c0a  5e                   pop esi
// 00475c0b  5b                   pop ebx
// 00475c0c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??4TextureUnit@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
