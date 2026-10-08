// roc 2007-03 005dad60  unit: seg_005d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dad60
//
// 005dad60  8b4104               mov eax, dword ptr [ecx + 4]
// 005dad63  8b4020               mov eax, dword ptr [eax + 0x20]
// 005dad66  85c0                 test eax, eax
// 005dad68  7406                 je 0x5dad70
// 005dad6a  058c000000           add eax, 0x8c
// 005dad6f  c3                   ret 
// 005dad70  b801000000           mov eax, 1
// 005dad75  840500788b00         test byte ptr [0x8b7800], al
// 005dad7b  751a                 jne 0x5dad97
// 005dad7d  d9ee                 fldz 
// 005dad7f  090500788b00         or dword ptr [0x8b7800], eax
// 005dad85  d915f4778b00         fst dword ptr [0x8b77f4]
// 005dad8b  d915f8778b00         fst dword ptr [0x8b77f8]
// 005dad91  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 005dad97  b8f4778b00           mov eax, 0x8b77f4
// 005dad9c  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getBranchTorque@Body@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
