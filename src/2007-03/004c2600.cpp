// roc 2007-03 004c2600  unit: seg_004c0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2600
//
// 004c2600  c7410400000000       mov dword ptr [ecx + 4], 0
// 004c2607  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?objectCollected@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
