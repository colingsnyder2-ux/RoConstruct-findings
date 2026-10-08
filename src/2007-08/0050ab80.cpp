// from server: 100% by auto
// roc 2007-08 0050ab80  unit: G3D::GCamera  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ab80
//
// 0050ab80  83ec1c               sub esp, 0x1c
// 0050ab83  56                   push esi
// 0050ab84  8b742424             mov esi, dword ptr [esp + 0x24]
// 0050ab88  8bce                 mov ecx, esi
// 0050ab8a  e871feffff           call 0x50aa00
// 0050ab8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050ab93  8d442404             lea eax, [esp + 4]
// 0050ab97  50                   push eax
// 0050ab98  e853d2fdff           call 0x4e7df0
// 0050ab9d  d900                 fld dword ptr [eax]
// 0050ab9f  d95c2410             fstp dword ptr [esp + 0x10]
// 0050aba3  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 0050aba7  d94004               fld dword ptr [eax + 4]
// 0050abaa  8a542434             mov dl, byte ptr [esp + 0x34]
// 0050abae  d95c2414             fstp dword ptr [esp + 0x14]
// 0050abb2  d94008               fld dword ptr [eax + 8]
// 0050abb5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0050abb9  d95c2418             fstp dword ptr [esp + 0x18]
// 0050abbd  d9442410             fld dword ptr [esp + 0x10]
// 0050abc1  d91e                 fstp dword ptr [esi]
// 0050abc3  d9442414             fld dword ptr [esp + 0x14]
// 0050abc7  d95e04               fstp dword ptr [esi + 4]
// 0050abca  d9442418             fld dword ptr [esp + 0x18]
// 0050abce  d95e08               fstp dword ptr [esi + 8]
// 0050abd1  d9ee                 fldz 
// 0050abd3  d95e0c               fstp dword ptr [esi + 0xc]
// 0050abd6  d900                 fld dword ptr [eax]
// 0050abd8  d95e40               fstp dword ptr [esi + 0x40]
// 0050abdb  d94004               fld dword ptr [eax + 4]
// 0050abde  d95e44               fstp dword ptr [esi + 0x44]
// 0050abe1  d94008               fld dword ptr [eax + 8]
// 0050abe4  d95e48               fstp dword ptr [esi + 0x48]
// 0050abe7  8bc6                 mov eax, esi
// 0050abe9  884e4d               mov byte ptr [esi + 0x4d], cl
// 0050abec  88564e               mov byte ptr [esi + 0x4e], dl
// 0050abef  5e                   pop esi
// 0050abf0  83c41c               add esp, 0x1c
// 0050abf3  c3                   ret 
// library g3d-6.09/G3Dcpp\GLight.cpp (function ?directional@GLight@G3D@@SA?AV12@ABVVector3@2@ABVColor3@2@_N2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
