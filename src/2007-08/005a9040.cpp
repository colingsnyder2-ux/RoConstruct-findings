// roc 2007-08 005a9040  unit: RBX::VHumanoid::?$SignalDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9040
//
// 005a9040  8b4130               mov eax, dword ptr [ecx + 0x30]
// 005a9043  8b08                 mov ecx, dword ptr [eax]
// 005a9045  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005a9048  c3                   ret 
// library rbxgs/v8world\World.cpp (function ?getMaxBucketSize@World@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
