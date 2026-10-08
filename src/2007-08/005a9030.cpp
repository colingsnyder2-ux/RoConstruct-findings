// roc 2007-08 005a9030  unit: RBX::VHumanoid::?$SignalDesc  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9030
//
// 005a9030  8b4130               mov eax, dword ptr [ecx + 0x30]
// 005a9033  8b08                 mov ecx, dword ptr [eax]
// 005a9035  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005a9038  c3                   ret 
// library rbxgs/v8world\World.cpp (function ?getNumHashNodes@World@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
