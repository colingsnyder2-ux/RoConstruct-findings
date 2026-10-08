// roc 2007-03 005003a0  unit: seg_00500000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005003a0
//
// 005003a0  d9442404             fld dword ptr [esp + 4]
// 005003a4  8bc1                 mov eax, ecx
// 005003a6  d918                 fstp dword ptr [eax]
// 005003a8  d9442408             fld dword ptr [esp + 8]
// 005003ac  d95804               fstp dword ptr [eax + 4]
// 005003af  d944240c             fld dword ptr [esp + 0xc]
// 005003b3  d95808               fstp dword ptr [eax + 8]
// 005003b6  d9442410             fld dword ptr [esp + 0x10]
// 005003ba  d9580c               fstp dword ptr [eax + 0xc]
// 005003bd  d9442414             fld dword ptr [esp + 0x14]
// 005003c1  d95810               fstp dword ptr [eax + 0x10]
// 005003c4  d9442418             fld dword ptr [esp + 0x18]
// 005003c8  d95814               fstp dword ptr [eax + 0x14]
// 005003cb  d944241c             fld dword ptr [esp + 0x1c]
// 005003cf  d95818               fstp dword ptr [eax + 0x18]
// 005003d2  d9442420             fld dword ptr [esp + 0x20]
// 005003d6  d9581c               fstp dword ptr [eax + 0x1c]
// 005003d9  d9442424             fld dword ptr [esp + 0x24]
// 005003dd  d95820               fstp dword ptr [eax + 0x20]
// 005003e0  d9442428             fld dword ptr [esp + 0x28]
// 005003e4  d95824               fstp dword ptr [eax + 0x24]
// 005003e7  d944242c             fld dword ptr [esp + 0x2c]
// 005003eb  d95828               fstp dword ptr [eax + 0x28]
// 005003ee  d9442430             fld dword ptr [esp + 0x30]
// 005003f2  d9582c               fstp dword ptr [eax + 0x2c]
// 005003f5  d9442434             fld dword ptr [esp + 0x34]
// 005003f9  d95830               fstp dword ptr [eax + 0x30]
// 005003fc  d9442438             fld dword ptr [esp + 0x38]
// 00500400  d95834               fstp dword ptr [eax + 0x34]
// 00500403  d944243c             fld dword ptr [esp + 0x3c]
// 00500407  d95838               fstp dword ptr [eax + 0x38]
// 0050040a  d9442440             fld dword ptr [esp + 0x40]
// 0050040e  d9583c               fstp dword ptr [eax + 0x3c]
// 00500411  c24000               ret 0x40
// library rbxgs-g3d/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@MMMMMMMMMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix4.cpp
