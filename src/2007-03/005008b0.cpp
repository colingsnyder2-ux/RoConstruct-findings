// roc 2007-03 005008b0  unit: seg_00500000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005008b0
//
// 005008b0  b801000000           mov eax, 1
// 005008b5  84050cb08b00         test byte ptr [0x8bb00c], al
// 005008bb  751a                 jne 0x5008d7
// 005008bd  d9ee                 fldz 
// 005008bf  09050cb08b00         or dword ptr [0x8bb00c], eax
// 005008c5  d91500b08b00         fst dword ptr [0x8bb000]
// 005008cb  d91504b08b00         fst dword ptr [0x8bb004]
// 005008d1  d91d08b08b00         fstp dword ptr [0x8bb008]
// 005008d7  b800b08b00           mov eax, 0x8bb000
// 005008dc  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
