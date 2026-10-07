// roc 2008-06 0048b150  unit: RBX::Network::P8Player::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b150
//
// 0048b150  51                   push ecx
// 0048b151  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b155  33c0                 xor eax, eax
// 0048b157  890424               mov dword ptr [esp], eax
// 0048b15a  56                   push esi
// 0048b15b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048b15f  88442404             mov byte ptr [esp + 4], al
// 0048b163  8b442404             mov eax, dword ptr [esp + 4]
// 0048b167  50                   push eax
// 0048b168  51                   push ecx
// 0048b169  8bce                 mov ecx, esi
// 0048b16b  e870f8ffff           call 0x48a9e0
// 0048b170  8bc6                 mov eax, esi
// 0048b172  5e                   pop esi
// 0048b173  59                   pop ecx
// 0048b174  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
