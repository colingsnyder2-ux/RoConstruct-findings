// roc 2007-08 005a90c0  unit: RBX::VHumanoid::?$SignalDesc  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a90c0
//
// 005a90c0  8b542404             mov edx, dword ptr [esp + 4]
// 005a90c4  56                   push esi
// 005a90c5  8bf1                 mov esi, ecx
// 005a90c7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005a90ca  8b01                 mov eax, dword ptr [ecx]
// 005a90cc  8b4010               mov eax, dword ptr [eax + 0x10]
// 005a90cf  52                   push edx
// 005a90d0  ffd0                 call eax
// 005a90d2  83467401             add dword ptr [esi + 0x74], 1
// 005a90d6  5e                   pop esi
// 005a90d7  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?insertContact@World@RBX@@QAEXPAVContact@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
