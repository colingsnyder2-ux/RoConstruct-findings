// roc 2011-06 00427d70  unit: CSelectionTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00427d70
//
// 00427d70  51                   push ecx
// 00427d71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00427d75  33c0                 xor eax, eax
// 00427d77  890424               mov dword ptr [esp], eax
// 00427d7a  56                   push esi
// 00427d7b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00427d7f  88442404             mov byte ptr [esp + 4], al
// 00427d83  8b442404             mov eax, dword ptr [esp + 4]
// 00427d87  50                   push eax
// 00427d88  51                   push ecx
// 00427d89  8bce                 mov ecx, esi
// 00427d8b  e810f7ffff           call 0x4274a0
// 00427d90  8bc6                 mov eax, esi
// 00427d92  5e                   pop esi
// 00427d93  59                   pop ecx
// 00427d94  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
