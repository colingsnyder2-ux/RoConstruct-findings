// roc 2007-08 005b4b80  unit: RBX::Geometry  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4b80
//
// 005b4b80  b801000000           mov eax, 1
// 005b4b85  840538d18b00         test byte ptr [0x8bd138], al
// 005b4b8b  751a                 jne 0x5b4ba7
// 005b4b8d  d9ee                 fldz 
// 005b4b8f  090538d18b00         or dword ptr [0x8bd138], eax
// 005b4b95  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005b4b9b  d91530d18b00         fst dword ptr [0x8bd130]
// 005b4ba1  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005b4ba7  8b442404             mov eax, dword ptr [esp + 4]
// 005b4bab  d9052cd18b00         fld dword ptr [0x8bd12c]
// 005b4bb1  d918                 fstp dword ptr [eax]
// 005b4bb3  d90530d18b00         fld dword ptr [0x8bd130]
// 005b4bb9  d95804               fstp dword ptr [eax + 4]
// 005b4bbc  d90534d18b00         fld dword ptr [0x8bd134]
// 005b4bc2  d95808               fstp dword ptr [eax + 8]
// 005b4bc5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Geometry@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
