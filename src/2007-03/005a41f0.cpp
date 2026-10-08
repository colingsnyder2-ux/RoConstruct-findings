// roc 2007-03 005a41f0  unit: seg_005a0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a41f0
//
// 005a41f0  e8dbf9ffff           call 0x5a3bd0
// 005a41f5  85c0                 test eax, eax
// 005a41f7  7407                 je 0x5a4200
// 005a41f9  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 005a41ff  c3                   ret 
// 005a4200  33c0                 xor eax, eax
// 005a4202  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getHeadPrimitive@Humanoid@RBX@@QAEPAVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
