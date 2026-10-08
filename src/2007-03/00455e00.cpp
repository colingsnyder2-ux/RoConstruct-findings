// roc 2007-03 00455e00  unit: seg_00450000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455e00
//
// 00455e00  d944240c             fld dword ptr [esp + 0xc]
// 00455e04  56                   push esi
// 00455e05  d9c0                 fld st(0)
// 00455e07  8b742408             mov esi, dword ptr [esp + 8]
// 00455e0b  d8442418             fadd dword ptr [esp + 0x18]
// 00455e0f  83ec10               sub esp, 0x10
// 00455e12  d95c2420             fstp dword ptr [esp + 0x20]
// 00455e16  d9442420             fld dword ptr [esp + 0x20]
// 00455e1a  d95c240c             fstp dword ptr [esp + 0xc]
// 00455e1e  d944241c             fld dword ptr [esp + 0x1c]
// 00455e22  d9c0                 fld st(0)
// 00455e24  d8442424             fadd dword ptr [esp + 0x24]
// 00455e28  d95c2420             fstp dword ptr [esp + 0x20]
// 00455e2c  d9442420             fld dword ptr [esp + 0x20]
// 00455e30  d95c2408             fstp dword ptr [esp + 8]
// 00455e34  d9c9                 fxch st(1)
// 00455e36  d95c2404             fstp dword ptr [esp + 4]
// 00455e3a  d91c24               fstp dword ptr [esp]
// 00455e3d  56                   push esi
// 00455e3e  e83dffffff           call 0x455d80
// 00455e43  83c414               add esp, 0x14
// 00455e46  8bc6                 mov eax, esi
// 00455e48  5e                   pop esi
// 00455e49  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?xywh@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
