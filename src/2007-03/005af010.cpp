// roc 2007-03 005af010  unit: seg_005a0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af010
//
// 005af010  b801000000           mov eax, 1
// 005af015  840500788b00         test byte ptr [0x8b7800], al
// 005af01b  751a                 jne 0x5af037
// 005af01d  d9ee                 fldz 
// 005af01f  090500788b00         or dword ptr [0x8b7800], eax
// 005af025  d915f4778b00         fst dword ptr [0x8b77f4]
// 005af02b  d915f8778b00         fst dword ptr [0x8b77f8]
// 005af031  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 005af037  8b442404             mov eax, dword ptr [esp + 4]
// 005af03b  d905f4778b00         fld dword ptr [0x8b77f4]
// 005af041  d918                 fstp dword ptr [eax]
// 005af043  d905f8778b00         fld dword ptr [0x8b77f8]
// 005af049  d95804               fstp dword ptr [eax + 4]
// 005af04c  d905fc778b00         fld dword ptr [0x8b77fc]
// 005af052  d95808               fstp dword ptr [eax + 8]
// 005af055  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getCenterToCorner@Geometry@RBX@@UBE?AVVector3@G3D@@ABVMatrix3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
