// roc 2007-03 00503ba0  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503ba0
//
// 00503ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00503ba4  d901                 fld dword ptr [ecx]
// 00503ba6  d918                 fstp dword ptr [eax]
// 00503ba8  d94104               fld dword ptr [ecx + 4]
// 00503bab  d95804               fstp dword ptr [eax + 4]
// 00503bae  c20400               ret 4
// library rbxgs/v8datamodel\Message.cpp (function ?x0y0@Rect2D@G3D@@QBE?AVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Message.cpp
