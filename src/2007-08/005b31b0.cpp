// roc 2007-08 005b31b0  unit: RBX::Assembly  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b31b0
//
// 005b31b0  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005b31b3  85d2                 test edx, edx
// 005b31b5  7503                 jne 0x5b31ba
// 005b31b7  33c0                 xor eax, eax
// 005b31b9  c3                   ret 
// 005b31ba  8b4138               mov eax, dword ptr [ecx + 0x38]
// 005b31bd  2bc2                 sub eax, edx
// 005b31bf  c1f802               sar eax, 2
// 005b31c2  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?numMotors@Assembly@RBX@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
