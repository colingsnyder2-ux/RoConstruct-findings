// roc 2008-06 005e78c0  unit: RBX::Geometry  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e78c0
//
// 005e78c0  b801000000           mov eax, 1
// 005e78c5  840550f09600         test byte ptr [0x96f050], al
// 005e78cb  751a                 jne 0x5e78e7
// 005e78cd  d9ee                 fldz 
// 005e78cf  090550f09600         or dword ptr [0x96f050], eax
// 005e78d5  d91544f09600         fst dword ptr [0x96f044]
// 005e78db  d91548f09600         fst dword ptr [0x96f048]
// 005e78e1  d91d4cf09600         fstp dword ptr [0x96f04c]
// 005e78e7  8b442404             mov eax, dword ptr [esp + 4]
// 005e78eb  d90544f09600         fld dword ptr [0x96f044]
// 005e78f1  d918                 fstp dword ptr [eax]
// 005e78f3  d90548f09600         fld dword ptr [0x96f048]
// 005e78f9  d95804               fstp dword ptr [eax + 4]
// 005e78fc  d9054cf09600         fld dword ptr [0x96f04c]
// 005e7902  d95808               fstp dword ptr [eax + 8]
// 005e7905  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Geometry@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
