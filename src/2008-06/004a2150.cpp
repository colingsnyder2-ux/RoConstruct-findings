// roc 2008-06 004a2150  unit: RBX::Network::P8Players::?$GetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2150
//
// 004a2150  51                   push ecx
// 004a2151  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a2155  33c0                 xor eax, eax
// 004a2157  890424               mov dword ptr [esp], eax
// 004a215a  56                   push esi
// 004a215b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a215f  88442404             mov byte ptr [esp + 4], al
// 004a2163  8b442404             mov eax, dword ptr [esp + 4]
// 004a2167  50                   push eax
// 004a2168  51                   push ecx
// 004a2169  8bce                 mov ecx, esi
// 004a216b  e800fbffff           call 0x4a1c70
// 004a2170  8bc6                 mov eax, esi
// 004a2172  5e                   pop esi
// 004a2173  59                   pop ecx
// 004a2174  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
