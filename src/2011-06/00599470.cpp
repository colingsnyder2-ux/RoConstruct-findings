// roc 2011-06 00599470  unit: RBX::PhysicsJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00599470
//
// 00599470  51                   push ecx
// 00599471  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00599475  33c0                 xor eax, eax
// 00599477  890424               mov dword ptr [esp], eax
// 0059947a  56                   push esi
// 0059947b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059947f  88442404             mov byte ptr [esp + 4], al
// 00599483  8b442404             mov eax, dword ptr [esp + 4]
// 00599487  50                   push eax
// 00599488  51                   push ecx
// 00599489  8bce                 mov ecx, esi
// 0059948b  e860fcffff           call 0x5990f0
// 00599490  8bc6                 mov eax, esi
// 00599492  5e                   pop esi
// 00599493  59                   pop ecx
// 00599494  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
