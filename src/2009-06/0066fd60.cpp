// roc 2009-06 0066fd60  unit: RBX::Geometry  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066fd60
//
// 0066fd60  b801000000           mov eax, 1
// 0066fd65  8405f8c6a300         test byte ptr [0xa3c6f8], al
// 0066fd6b  751a                 jne 0x66fd87
// 0066fd6d  d9ee                 fldz 
// 0066fd6f  0905f8c6a300         or dword ptr [0xa3c6f8], eax
// 0066fd75  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0066fd7b  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0066fd81  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 0066fd87  8b442404             mov eax, dword ptr [esp + 4]
// 0066fd8b  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 0066fd91  d918                 fstp dword ptr [eax]
// 0066fd93  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0066fd99  d95804               fstp dword ptr [eax + 4]
// 0066fd9c  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 0066fda2  d95808               fstp dword ptr [eax + 8]
// 0066fda5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Geometry@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
