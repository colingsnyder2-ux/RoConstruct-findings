// from server: 100% by auto
// roc 2007-08 00475a20  unit: CInstanceRecord::CNameItem  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475a20
//
// 00475a20  53                   push ebx
// 00475a21  56                   push esi
// 00475a22  57                   push edi
// 00475a23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00475a27  d907                 fld dword ptr [edi]
// 00475a29  8bf1                 mov esi, ecx
// 00475a2b  d91e                 fstp dword ptr [esi]
// 00475a2d  8d4e10               lea ecx, [esi + 0x10]
// 00475a30  d94704               fld dword ptr [edi + 4]
// 00475a33  d95e04               fstp dword ptr [esi + 4]
// 00475a36  d94708               fld dword ptr [edi + 8]
// 00475a39  d95e08               fstp dword ptr [esi + 8]
// 00475a3c  d9470c               fld dword ptr [edi + 0xc]
// 00475a3f  d95e0c               fstp dword ptr [esi + 0xc]
// 00475a42  8b4710               mov eax, dword ptr [edi + 0x10]
// 00475a45  50                   push eax
// 00475a46  e825f5ffff           call 0x474f70
// 00475a4b  8bd7                 mov edx, edi
// 00475a4d  8d4f1c               lea ecx, [edi + 0x1c]
// 00475a50  8d4614               lea eax, [esi + 0x14]
// 00475a53  2bd6                 sub edx, esi
// 00475a55  bb02000000           mov ebx, 2
// 00475a5a  8d9b00000000         lea ebx, [ebx]
// 00475a60  d90402               fld dword ptr [edx + eax]
// 00475a63  83c020               add eax, 0x20
// 00475a66  d958e0               fstp dword ptr [eax - 0x20]
// 00475a69  83c120               add ecx, 0x20
// 00475a6c  83eb01               sub ebx, 1
// 00475a6f  d941dc               fld dword ptr [ecx - 0x24]
// 00475a72  d958e4               fstp dword ptr [eax - 0x1c]
// 00475a75  d941e0               fld dword ptr [ecx - 0x20]
// 00475a78  d958e8               fstp dword ptr [eax - 0x18]
// 00475a7b  d941e4               fld dword ptr [ecx - 0x1c]
// 00475a7e  d958ec               fstp dword ptr [eax - 0x14]
// 00475a81  d941e8               fld dword ptr [ecx - 0x18]
// 00475a84  d958f0               fstp dword ptr [eax - 0x10]
// 00475a87  d941ec               fld dword ptr [ecx - 0x14]
// 00475a8a  d958f4               fstp dword ptr [eax - 0xc]
// 00475a8d  d941f0               fld dword ptr [ecx - 0x10]
// 00475a90  d958f8               fstp dword ptr [eax - 8]
// 00475a93  d941f4               fld dword ptr [ecx - 0xc]
// 00475a96  d958fc               fstp dword ptr [eax - 4]
// 00475a99  75c5                 jne 0x475a60
// 00475a9b  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00475a9e  894e54               mov dword ptr [esi + 0x54], ecx
// 00475aa1  d94758               fld dword ptr [edi + 0x58]
// 00475aa4  5f                   pop edi
// 00475aa5  d95e58               fstp dword ptr [esi + 0x58]
// 00475aa8  8bc6                 mov eax, esi
// 00475aaa  5e                   pop esi
// 00475aab  5b                   pop ebx
// 00475aac  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??4TextureUnit@RenderState@RenderDevice@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
