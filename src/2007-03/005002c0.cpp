// roc 2007-03 005002c0  unit: seg_00500000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005002c0
//
// 005002c0  83ec1c               sub esp, 0x1c
// 005002c3  56                   push esi
// 005002c4  8b742424             mov esi, dword ptr [esp + 0x24]
// 005002c8  8bce                 mov ecx, esi
// 005002ca  e871feffff           call 0x500140
// 005002cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005002d3  8d442404             lea eax, [esp + 4]
// 005002d7  50                   push eax
// 005002d8  e8b3b5fdff           call 0x4db890
// 005002dd  d900                 fld dword ptr [eax]
// 005002df  d95c2410             fstp dword ptr [esp + 0x10]
// 005002e3  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 005002e7  d94004               fld dword ptr [eax + 4]
// 005002ea  8a542434             mov dl, byte ptr [esp + 0x34]
// 005002ee  d95c2414             fstp dword ptr [esp + 0x14]
// 005002f2  d94008               fld dword ptr [eax + 8]
// 005002f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005002f9  d95c2418             fstp dword ptr [esp + 0x18]
// 005002fd  d9442410             fld dword ptr [esp + 0x10]
// 00500301  d91e                 fstp dword ptr [esi]
// 00500303  d9442414             fld dword ptr [esp + 0x14]
// 00500307  d95e04               fstp dword ptr [esi + 4]
// 0050030a  d9442418             fld dword ptr [esp + 0x18]
// 0050030e  d95e08               fstp dword ptr [esi + 8]
// 00500311  d9ee                 fldz 
// 00500313  d95e0c               fstp dword ptr [esi + 0xc]
// 00500316  d900                 fld dword ptr [eax]
// 00500318  d95e40               fstp dword ptr [esi + 0x40]
// 0050031b  d94004               fld dword ptr [eax + 4]
// 0050031e  d95e44               fstp dword ptr [esi + 0x44]
// 00500321  d94008               fld dword ptr [eax + 8]
// 00500324  d95e48               fstp dword ptr [esi + 0x48]
// 00500327  8bc6                 mov eax, esi
// 00500329  884e4d               mov byte ptr [esi + 0x4d], cl
// 0050032c  88564e               mov byte ptr [esi + 0x4e], dl
// 0050032f  5e                   pop esi
// 00500330  83c41c               add esp, 0x1c
// 00500333  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GLight.cpp (function ?directional@GLight@G3D@@SA?AV12@ABVVector3@2@ABVColor3@2@_N2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GLight.cpp
