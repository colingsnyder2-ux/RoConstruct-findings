// roc 2007-03 007349a0  unit: seg_00730000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007349a0
//
// 007349a0  83ec40               sub esp, 0x40
// 007349a3  8d0424               lea eax, [esp]
// 007349a6  50                   push eax
// 007349a7  8bce                 mov ecx, esi
// 007349a9  e8c2fcd3ff           call 0x474670
// 007349ae  d9ee                 fldz 
// 007349b0  d9542420             fst dword ptr [esp + 0x20]
// 007349b4  8d0c24               lea ecx, [esp]
// 007349b7  d9542424             fst dword ptr [esp + 0x24]
// 007349bb  51                   push ecx
// 007349bc  d90508567b00         fld dword ptr [0x7b5608]
// 007349c2  8bce                 mov ecx, esi
// 007349c4  d95c242c             fstp dword ptr [esp + 0x2c]
// 007349c8  d95c2430             fstp dword ptr [esp + 0x30]
// 007349cc  e8bffcd3ff           call 0x474690
// 007349d1  83c440               add esp, 0x40
// 007349d4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?hackProjectionMatrix@G3D@@YAXPAVRenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
