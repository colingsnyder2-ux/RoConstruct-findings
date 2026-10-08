// roc 2007-03 005e92a0  unit: seg_005e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e92a0
//
// 005e92a0  8b4104               mov eax, dword ptr [ecx + 4]
// 005e92a3  8b4020               mov eax, dword ptr [eax + 0x20]
// 005e92a6  85c0                 test eax, eax
// 005e92a8  7406                 je 0x5e92b0
// 005e92aa  0580000000           add eax, 0x80
// 005e92af  c3                   ret 
// 005e92b0  b801000000           mov eax, 1
// 005e92b5  840500788b00         test byte ptr [0x8b7800], al
// 005e92bb  751a                 jne 0x5e92d7
// 005e92bd  d9ee                 fldz 
// 005e92bf  090500788b00         or dword ptr [0x8b7800], eax
// 005e92c5  d915f4778b00         fst dword ptr [0x8b77f4]
// 005e92cb  d915f8778b00         fst dword ptr [0x8b77f8]
// 005e92d1  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 005e92d7  b8f4778b00           mov eax, 0x8b77f4
// 005e92dc  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ?getBranchForce@Body@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
