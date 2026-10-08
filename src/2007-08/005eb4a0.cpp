// roc 2007-08 005eb4a0  unit: RBX::FlagStand  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb4a0
//
// 005eb4a0  8b4104               mov eax, dword ptr [ecx + 4]
// 005eb4a3  8b4020               mov eax, dword ptr [eax + 0x20]
// 005eb4a6  85c0                 test eax, eax
// 005eb4a8  7406                 je 0x5eb4b0
// 005eb4aa  0580000000           add eax, 0x80
// 005eb4af  c3                   ret 
// 005eb4b0  b801000000           mov eax, 1
// 005eb4b5  840538d18b00         test byte ptr [0x8bd138], al
// 005eb4bb  751a                 jne 0x5eb4d7
// 005eb4bd  d9ee                 fldz 
// 005eb4bf  090538d18b00         or dword ptr [0x8bd138], eax
// 005eb4c5  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005eb4cb  d91530d18b00         fst dword ptr [0x8bd130]
// 005eb4d1  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005eb4d7  b82cd18b00           mov eax, 0x8bd12c
// 005eb4dc  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ?getBranchForce@Body@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
