// roc 2007-03 005e6cc0  unit: seg_005e0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6cc0
//
// 005e6cc0  8b5104               mov edx, dword ptr [ecx + 4]
// 005e6cc3  85d2                 test edx, edx
// 005e6cc5  7503                 jne 0x5e6cca
// 005e6cc7  33c0                 xor eax, eax
// 005e6cc9  c3                   ret 
// 005e6cca  8b4108               mov eax, dword ptr [ecx + 8]
// 005e6ccd  2bc2                 sub eax, edx
// 005e6ccf  c1f802               sar eax, 2
// 005e6cd2  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?size@?$vector@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
