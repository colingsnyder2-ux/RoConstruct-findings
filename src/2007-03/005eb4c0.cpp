// roc 2007-03 005eb4c0  unit: seg_005e0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eb4c0
//
// 005eb4c0  8b442404             mov eax, dword ptr [esp + 4]
// 005eb4c4  8b84818c000000       mov eax, dword ptr [ecx + eax*4 + 0x8c]
// 005eb4cb  c20400               ret 4
// library rbxgs/v8datamodel\Surface.cpp (function ?getSurfaceType@Primitive@RBX@@QBE?AW4SurfaceType@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Surface.cpp
