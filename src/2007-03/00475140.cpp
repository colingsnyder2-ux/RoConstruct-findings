// roc 2007-03 00475140  unit: seg_00470000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475140
//
// 00475140  b801000000           mov eax, 1
// 00475145  840500788b00         test byte ptr [0x8b7800], al
// 0047514b  751a                 jne 0x475167
// 0047514d  d9ee                 fldz 
// 0047514f  090500788b00         or dword ptr [0x8b7800], eax
// 00475155  d915f4778b00         fst dword ptr [0x8b77f4]
// 0047515b  d915f8778b00         fst dword ptr [0x8b77f8]
// 00475161  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 00475167  b8f4778b00           mov eax, 0x8b77f4
// 0047516c  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
