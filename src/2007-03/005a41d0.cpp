// roc 2007-03 005a41d0  unit: seg_005a0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a41d0
//
// 005a41d0  e8fbf8ffff           call 0x5a3ad0
// 005a41d5  85c0                 test eax, eax
// 005a41d7  7407                 je 0x5a41e0
// 005a41d9  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 005a41df  c3                   ret 
// 005a41e0  33c0                 xor eax, eax
// 005a41e2  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getHeadPrimitive@Humanoid@RBX@@QAEPAVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
