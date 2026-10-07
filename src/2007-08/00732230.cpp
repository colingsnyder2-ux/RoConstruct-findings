// roc 2007-08 00732230  unit: seg_00730000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00732230
//
// 00732230  83ec40               sub esp, 0x40
// 00732233  8d0424               lea eax, [esp]
// 00732236  50                   push eax
// 00732237  8bce                 mov ecx, esi
// 00732239  e83223d4ff           call 0x474570
// 0073223e  d9ee                 fldz 
// 00732240  d9542420             fst dword ptr [esp + 0x20]
// 00732244  8d0c24               lea ecx, [esp]
// 00732247  d9542424             fst dword ptr [esp + 0x24]
// 0073224b  51                   push ecx
// 0073224c  d905f0547b00         fld dword ptr [0x7b54f0]
// 00732252  8bce                 mov ecx, esi
// 00732254  d95c242c             fstp dword ptr [esp + 0x2c]
// 00732258  d95c2430             fstp dword ptr [esp + 0x30]
// 0073225c  e82f23d4ff           call 0x474590
// 00732261  83c440               add esp, 0x40
// 00732264  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?hackProjectionMatrix@G3D@@YAXPAVRenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
