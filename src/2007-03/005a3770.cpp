// roc 2007-03 005a3770  unit: seg_005a0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a3770
//
// 005a3770  8b442404             mov eax, dword ptr [esp + 4]
// 005a3774  50                   push eax
// 005a3775  e8b6bfeeff           call 0x48f730
// 005a377a  83c404               add esp, 4
// 005a377d  85c0                 test eax, eax
// 005a377f  7407                 je 0x5a3788
// 005a3781  8bc8                 mov ecx, eax
// 005a3783  e98894feff           jmp 0x58cc10
// 005a3788  33c0                 xor eax, eax
// 005a378a  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getLocalHumanoidFromContext@Humanoid@RBX@@SAPAV12@PBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
