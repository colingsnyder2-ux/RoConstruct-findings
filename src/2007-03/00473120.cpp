// roc 2007-03 00473120  unit: seg_00470000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473120
//
// 00473120  b801000000           mov eax, 1
// 00473125  8405d0778b00         test byte ptr [0x8b77d0], al
// 0047312b  7513                 jne 0x473140
// 0047312d  0905d0778b00         or dword ptr [0x8b77d0], eax
// 00473133  a128e67700           mov eax, dword ptr [0x77e628]
// 00473138  dd00                 fld qword ptr [eax]
// 0047313a  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00473140  b8c8778b00           mov eax, 0x8b77c8
// 00473145  c3                   ret 
// library rbxgs/util\Extents.cpp (function ?inf@G3D@@YAABNXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
