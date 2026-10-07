// roc 2009-06 004fabd0  unit: RBX::Network::ServerReplicator  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fabd0
//
// 004fabd0  51                   push ecx
// 004fabd1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fabd5  33c0                 xor eax, eax
// 004fabd7  890424               mov dword ptr [esp], eax
// 004fabda  56                   push esi
// 004fabdb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fabdf  88442404             mov byte ptr [esp + 4], al
// 004fabe3  8b442404             mov eax, dword ptr [esp + 4]
// 004fabe7  50                   push eax
// 004fabe8  51                   push ecx
// 004fabe9  8bce                 mov ecx, esi
// 004fabeb  e840feffff           call 0x4faa30
// 004fabf0  8bc6                 mov eax, esi
// 004fabf2  5e                   pop esi
// 004fabf3  59                   pop ecx
// 004fabf4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
