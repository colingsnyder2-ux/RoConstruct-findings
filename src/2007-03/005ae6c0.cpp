// roc 2007-03 005ae6c0  unit: seg_005a0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae6c0
//
// 005ae6c0  8b442404             mov eax, dword ptr [esp + 4]
// 005ae6c4  d94110               fld dword ptr [ecx + 0x10]
// 005ae6c7  d918                 fstp dword ptr [eax]
// 005ae6c9  d94110               fld dword ptr [ecx + 0x10]
// 005ae6cc  d95804               fstp dword ptr [eax + 4]
// 005ae6cf  d94110               fld dword ptr [ecx + 0x10]
// 005ae6d2  d95808               fstp dword ptr [eax + 8]
// 005ae6d5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Ball@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
