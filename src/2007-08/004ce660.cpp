// roc 2007-08 004ce660  unit: G3D::VVector3::?$Table  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce660
//
// 004ce660  56                   push esi
// 004ce661  8b31                 mov esi, dword ptr [ecx]
// 004ce663  85f6                 test esi, esi
// 004ce665  7416                 je 0x4ce67d
// 004ce667  8bce                 mov ecx, esi
// 004ce669  c70624367900         mov dword ptr [esi], 0x793624
// 004ce66f  e88cb0f8ff           call 0x459700
// 004ce674  56                   push esi
// 004ce675  e8e8151600           call 0x62fc62
// 004ce67a  83c404               add esp, 4
// 004ce67d  5e                   pop esi
// 004ce67e  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$auto_ptr@VTextureManager@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
