// roc 2007-03 004fbaf0  unit: seg_004f0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbaf0
//
// 004fbaf0  d9442404             fld dword ptr [esp + 4]
// 004fbaf4  56                   push esi
// 004fbaf5  8bf1                 mov esi, ecx
// 004fbaf7  d95604               fst dword ptr [esi + 4]
// 004fbafa  dc0d584f7900         fmul qword ptr [0x794f58]
// 004fbb00  d95c2408             fstp dword ptr [esp + 8]
// 004fbb04  d9442408             fld dword ptr [esp + 8]
// 004fbb08  e8c13a1200           call 0x61f5ce
// 004fbb0d  d95c2408             fstp dword ptr [esp + 8]
// 004fbb11  d9442408             fld dword ptr [esp + 8]
// 004fbb15  dcc0                 fadd st(0), st(0)
// 004fbb17  d9e8                 fld1 
// 004fbb19  def1                 fdivrp st(1)
// 004fbb1b  d95e08               fstp dword ptr [esi + 8]
// 004fbb1e  5e                   pop esi
// 004fbb1f  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?setFieldOfView@GCamera@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
