// roc 2007-03 005abee0  unit: seg_005a0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abee0
//
// 005abee0  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005abee3  85d2                 test edx, edx
// 005abee5  7503                 jne 0x5abeea
// 005abee7  33c0                 xor eax, eax
// 005abee9  c3                   ret 
// 005abeea  8b4138               mov eax, dword ptr [ecx + 0x38]
// 005abeed  2bc2                 sub eax, edx
// 005abeef  c1f802               sar eax, 2
// 005abef2  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?numMotors@Assembly@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
