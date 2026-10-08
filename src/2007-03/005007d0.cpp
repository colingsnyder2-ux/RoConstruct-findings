// roc 2007-03 005007d0  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005007d0
//
// 005007d0  b801000000           mov eax, 1
// 005007d5  8405ccaf8b00         test byte ptr [0x8bafcc], al
// 005007db  751c                 jne 0x5007f9
// 005007dd  d9ee                 fldz 
// 005007df  0905ccaf8b00         or dword ptr [0x8bafcc], eax
// 005007e5  d915c0af8b00         fst dword ptr [0x8bafc0]
// 005007eb  d91dc4af8b00         fstp dword ptr [0x8bafc4]
// 005007f1  d9e8                 fld1 
// 005007f3  d91dc8af8b00         fstp dword ptr [0x8bafc8]
// 005007f9  b8c0af8b00           mov eax, 0x8bafc0
// 005007fe  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?unitZ@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
