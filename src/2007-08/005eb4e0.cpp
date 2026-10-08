// roc 2007-08 005eb4e0  unit: RBX::FlagStand  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb4e0
//
// 005eb4e0  8b4104               mov eax, dword ptr [ecx + 4]
// 005eb4e3  8b4020               mov eax, dword ptr [eax + 0x20]
// 005eb4e6  85c0                 test eax, eax
// 005eb4e8  7406                 je 0x5eb4f0
// 005eb4ea  058c000000           add eax, 0x8c
// 005eb4ef  c3                   ret 
// 005eb4f0  b801000000           mov eax, 1
// 005eb4f5  840538d18b00         test byte ptr [0x8bd138], al
// 005eb4fb  751a                 jne 0x5eb517
// 005eb4fd  d9ee                 fldz 
// 005eb4ff  090538d18b00         or dword ptr [0x8bd138], eax
// 005eb505  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005eb50b  d91530d18b00         fst dword ptr [0x8bd130]
// 005eb511  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005eb517  b82cd18b00           mov eax, 0x8bd12c
// 005eb51c  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getBranchTorque@Body@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
