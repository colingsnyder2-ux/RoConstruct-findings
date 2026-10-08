// roc 2007-03 005a4270  unit: seg_005a0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4270
//
// 005a4270  e8dbfdffff           call 0x5a4050
// 005a4275  85c0                 test eax, eax
// 005a4277  7407                 je 0x5a4280
// 005a4279  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 005a427f  c3                   ret 
// 005a4280  33c0                 xor eax, eax
// 005a4282  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getHeadPrimitive@Humanoid@RBX@@QAEPAVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
