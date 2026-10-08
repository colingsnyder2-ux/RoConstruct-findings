// from server: 100% by auto
// roc 2007-08 0047f5f0  unit: G3D::Win32Window  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047f5f0
//
// 0047f5f0  83ec14               sub esp, 0x14
// 0047f5f3  db442418             fild dword ptr [esp + 0x18]
// 0047f5f7  56                   push esi
// 0047f5f8  8bf1                 mov esi, ecx
// 0047f5fa  83ec10               sub esp, 0x10
// 0047f5fd  d95c2414             fstp dword ptr [esp + 0x14]
// 0047f601  8d442418             lea eax, [esp + 0x18]
// 0047f605  db442430             fild dword ptr [esp + 0x30]
// 0047f609  d95c242c             fstp dword ptr [esp + 0x2c]
// 0047f60d  db462c               fild dword ptr [esi + 0x2c]
// 0047f610  d944242c             fld dword ptr [esp + 0x2c]
// 0047f614  d9c0                 fld st(0)
// 0047f616  dec2                 faddp st(2)
// 0047f618  d9c9                 fxch st(1)
// 0047f61a  d95c242c             fstp dword ptr [esp + 0x2c]
// 0047f61e  d944242c             fld dword ptr [esp + 0x2c]
// 0047f622  d95c240c             fstp dword ptr [esp + 0xc]
// 0047f626  db4628               fild dword ptr [esi + 0x28]
// 0047f629  d9442414             fld dword ptr [esp + 0x14]
// 0047f62d  d9c0                 fld st(0)
// 0047f62f  dec2                 faddp st(2)
// 0047f631  d9c9                 fxch st(1)
// 0047f633  d95c242c             fstp dword ptr [esp + 0x2c]
// 0047f637  d944242c             fld dword ptr [esp + 0x2c]
// 0047f63b  d95c2408             fstp dword ptr [esp + 8]
// 0047f63f  d9c9                 fxch st(1)
// 0047f641  d95c2404             fstp dword ptr [esp + 4]
// 0047f645  d91c24               fstp dword ptr [esp]
// 0047f648  50                   push eax
// 0047f649  e8c28cfdff           call 0x458310
// 0047f64e  8b16                 mov edx, dword ptr [esi]
// 0047f650  8b5210               mov edx, dword ptr [edx + 0x10]
// 0047f653  83c414               add esp, 0x14
// 0047f656  8d442408             lea eax, [esp + 8]
// 0047f65a  50                   push eax
// 0047f65b  8bce                 mov ecx, esi
// 0047f65d  ffd2                 call edx
// 0047f65f  5e                   pop esi
// 0047f660  83c414               add esp, 0x14
// 0047f663  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setPosition@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
