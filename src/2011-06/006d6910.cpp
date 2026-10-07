// roc 2011-06 006d6910  unit: RBX::JointsService  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d6910
//
// 006d6910  51                   push ecx
// 006d6911  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d6915  33c0                 xor eax, eax
// 006d6917  890424               mov dword ptr [esp], eax
// 006d691a  56                   push esi
// 006d691b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d691f  88442404             mov byte ptr [esp + 4], al
// 006d6923  8b442404             mov eax, dword ptr [esp + 4]
// 006d6927  50                   push eax
// 006d6928  51                   push ecx
// 006d6929  8bce                 mov ecx, esi
// 006d692b  e850ffffff           call 0x6d6880
// 006d6930  8bc6                 mov eax, esi
// 006d6932  5e                   pop esi
// 006d6933  59                   pop ecx
// 006d6934  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
