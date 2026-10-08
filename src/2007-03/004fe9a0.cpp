// roc 2007-03 004fe9a0  unit: seg_004f0000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe9a0
//
// 004fe9a0  d9442404             fld dword ptr [esp + 4]
// 004fe9a4  d919                 fstp dword ptr [ecx]
// 004fe9a6  d9442408             fld dword ptr [esp + 8]
// 004fe9aa  d95904               fstp dword ptr [ecx + 4]
// 004fe9ad  d944240c             fld dword ptr [esp + 0xc]
// 004fe9b1  d95908               fstp dword ptr [ecx + 8]
// 004fe9b4  d9442410             fld dword ptr [esp + 0x10]
// 004fe9b8  d9590c               fstp dword ptr [ecx + 0xc]
// 004fe9bb  d9442414             fld dword ptr [esp + 0x14]
// 004fe9bf  d95910               fstp dword ptr [ecx + 0x10]
// 004fe9c2  d9442418             fld dword ptr [esp + 0x18]
// 004fe9c6  d95914               fstp dword ptr [ecx + 0x14]
// 004fe9c9  d944241c             fld dword ptr [esp + 0x1c]
// 004fe9cd  d95918               fstp dword ptr [ecx + 0x18]
// 004fe9d0  d9442420             fld dword ptr [esp + 0x20]
// 004fe9d4  d9591c               fstp dword ptr [ecx + 0x1c]
// 004fe9d7  d9442424             fld dword ptr [esp + 0x24]
// 004fe9db  d95920               fstp dword ptr [ecx + 0x20]
// 004fe9de  c22400               ret 0x24
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?set@Matrix3@G3D@@QAEXMMMMMMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
