// roc 2007-08 005a5820  unit: RBX::Humanoid  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5820
//
// 005a5820  8b442404             mov eax, dword ptr [esp + 4]
// 005a5824  50                   push eax
// 005a5825  e81600efff           call 0x495840
// 005a582a  83c404               add esp, 4
// 005a582d  85c0                 test eax, eax
// 005a582f  7407                 je 0x5a5838
// 005a5831  8bc8                 mov ecx, eax
// 005a5833  e9e8a8ffff           jmp 0x5a0120
// 005a5838  33c0                 xor eax, eax
// 005a583a  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?getLocalHumanoidFromContext@Humanoid@RBX@@SAPAV12@PBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
