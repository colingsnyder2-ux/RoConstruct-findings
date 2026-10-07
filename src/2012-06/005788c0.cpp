// roc 2012-06 005788c0  unit: RBX::Network::Replicator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005788c0
//
// 005788c0  56                   push esi
// 005788c1  8bf1                 mov esi, ecx
// 005788c3  e8f8991400           call 0x6c22c0
// 005788c8  8906                 mov dword ptr [esi], eax
// 005788ca  8b442408             mov eax, dword ptr [esp + 8]
// 005788ce  50                   push eax
// 005788cf  8d4e04               lea ecx, [esi + 4]
// 005788d2  e839e8ffff           call 0x577110
// 005788d7  8bc6                 mov eax, esi
// 005788d9  5e                   pop esi
// 005788da  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
