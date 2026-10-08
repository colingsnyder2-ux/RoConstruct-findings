// roc 2007-03 0047d9d0  unit: seg_00470000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047d9d0
//
// 0047d9d0  83ec14               sub esp, 0x14
// 0047d9d3  db442418             fild dword ptr [esp + 0x18]
// 0047d9d7  56                   push esi
// 0047d9d8  8bf1                 mov esi, ecx
// 0047d9da  83ec10               sub esp, 0x10
// 0047d9dd  d95c2414             fstp dword ptr [esp + 0x14]
// 0047d9e1  8d442418             lea eax, [esp + 0x18]
// 0047d9e5  db442430             fild dword ptr [esp + 0x30]
// 0047d9e9  d95c242c             fstp dword ptr [esp + 0x2c]
// 0047d9ed  db462c               fild dword ptr [esi + 0x2c]
// 0047d9f0  d944242c             fld dword ptr [esp + 0x2c]
// 0047d9f4  d9c0                 fld st(0)
// 0047d9f6  dec2                 faddp st(2)
// 0047d9f8  d9c9                 fxch st(1)
// 0047d9fa  d95c242c             fstp dword ptr [esp + 0x2c]
// 0047d9fe  d944242c             fld dword ptr [esp + 0x2c]
// 0047da02  d95c240c             fstp dword ptr [esp + 0xc]
// 0047da06  db4628               fild dword ptr [esi + 0x28]
// 0047da09  d9442414             fld dword ptr [esp + 0x14]
// 0047da0d  d9c0                 fld st(0)
// 0047da0f  dec2                 faddp st(2)
// 0047da11  d9c9                 fxch st(1)
// 0047da13  d95c242c             fstp dword ptr [esp + 0x2c]
// 0047da17  d944242c             fld dword ptr [esp + 0x2c]
// 0047da1b  d95c2408             fstp dword ptr [esp + 8]
// 0047da1f  d9c9                 fxch st(1)
// 0047da21  d95c2404             fstp dword ptr [esp + 4]
// 0047da25  d91c24               fstp dword ptr [esp]
// 0047da28  50                   push eax
// 0047da29  e85283fdff           call 0x455d80
// 0047da2e  8b16                 mov edx, dword ptr [esi]
// 0047da30  8b5210               mov edx, dword ptr [edx + 0x10]
// 0047da33  83c414               add esp, 0x14
// 0047da36  8d442408             lea eax, [esp + 8]
// 0047da3a  50                   push eax
// 0047da3b  8bce                 mov ecx, esi
// 0047da3d  ffd2                 call edx
// 0047da3f  5e                   pop esi
// 0047da40  83c414               add esp, 0x14
// 0047da43  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?setPosition@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
