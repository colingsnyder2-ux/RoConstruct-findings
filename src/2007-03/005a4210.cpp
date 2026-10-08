// roc 2007-03 005a4210  unit: seg_005a0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4210
//
// 005a4210  e83bfbffff           call 0x5a3d50
// 005a4215  85c0                 test eax, eax
// 005a4217  7407                 je 0x5a4220
// 005a4219  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 005a421f  c3                   ret 
// 005a4220  33c0                 xor eax, eax
// 005a4222  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getHeadPrimitive@Humanoid@RBX@@QAEPAVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
