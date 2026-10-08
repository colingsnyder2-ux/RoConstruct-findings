// from server: 100% by auto
// roc 2007-08 00458390  unit: CRobloxWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458390
//
// 00458390  d944240c             fld dword ptr [esp + 0xc]
// 00458394  56                   push esi
// 00458395  d9c0                 fld st(0)
// 00458397  8b742408             mov esi, dword ptr [esp + 8]
// 0045839b  d8442418             fadd dword ptr [esp + 0x18]
// 0045839f  83ec10               sub esp, 0x10
// 004583a2  d95c2420             fstp dword ptr [esp + 0x20]
// 004583a6  d9442420             fld dword ptr [esp + 0x20]
// 004583aa  d95c240c             fstp dword ptr [esp + 0xc]
// 004583ae  d944241c             fld dword ptr [esp + 0x1c]
// 004583b2  d9c0                 fld st(0)
// 004583b4  d8442424             fadd dword ptr [esp + 0x24]
// 004583b8  d95c2420             fstp dword ptr [esp + 0x20]
// 004583bc  d9442420             fld dword ptr [esp + 0x20]
// 004583c0  d95c2408             fstp dword ptr [esp + 8]
// 004583c4  d9c9                 fxch st(1)
// 004583c6  d95c2404             fstp dword ptr [esp + 4]
// 004583ca  d91c24               fstp dword ptr [esp]
// 004583cd  56                   push esi
// 004583ce  e83dffffff           call 0x458310
// 004583d3  83c414               add esp, 0x14
// 004583d6  8bc6                 mov eax, esi
// 004583d8  5e                   pop esi
// 004583d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?xywh@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
