// roc 2011-06 004b4660  unit: rbx::signals::Z::$$A6AX_NH::?$signal::Vslot::?$callable  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b4660
//
// 004b4660  56                   push esi
// 004b4661  8bf1                 mov esi, ecx
// 004b4663  8b4604               mov eax, dword ptr [esi + 4]
// 004b4666  85c0                 test eax, eax
// 004b4668  7418                 je 0x4b4682
// 004b466a  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b466d  51                   push ecx
// 004b466e  50                   push eax
// 004b466f  8bce                 mov ecx, esi
// 004b4671  e81a50ffff           call 0x4a9690
// 004b4676  8b5604               mov edx, dword ptr [esi + 4]
// 004b4679  52                   push edx
// 004b467a  e8d9593500           call 0x80a058
// 004b467f  83c404               add esp, 4
// 004b4682  c7460400000000       mov dword ptr [esi + 4], 0
// 004b4689  c7460800000000       mov dword ptr [esi + 8], 0
// 004b4690  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004b4697  5e                   pop esi
// 004b4698  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
