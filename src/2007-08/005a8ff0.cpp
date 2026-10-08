// roc 2007-08 005a8ff0  unit: RBX::VHumanoid::?$SignalDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8ff0
//
// 005a8ff0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a8ff3  8b01                 mov eax, dword ptr [ecx]
// 005a8ff5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a8ff8  ffe2                 jmp edx
// library rbxgs/v8world\World.cpp (function ?getKernel@World@RBX@@QAEAAVKernel@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
