// roc 2007-03 00500770  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500770
//
// 00500770  b801000000           mov eax, 1
// 00500775  8405acaf8b00         test byte ptr [0x8bafac], al
// 0050077b  751c                 jne 0x500799
// 0050077d  d9e8                 fld1 
// 0050077f  0905acaf8b00         or dword ptr [0x8bafac], eax
// 00500785  d91da0af8b00         fstp dword ptr [0x8bafa0]
// 0050078b  d9ee                 fldz 
// 0050078d  d915a4af8b00         fst dword ptr [0x8bafa4]
// 00500793  d91da8af8b00         fstp dword ptr [0x8bafa8]
// 00500799  b8a0af8b00           mov eax, 0x8bafa0
// 0050079e  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?unitX@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
