// roc 2011-06 007372b0  unit: RBX::Network::P8Player::?$GetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007372b0
//
// 007372b0  51                   push ecx
// 007372b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007372b5  33c0                 xor eax, eax
// 007372b7  890424               mov dword ptr [esp], eax
// 007372ba  56                   push esi
// 007372bb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007372bf  88442404             mov byte ptr [esp + 4], al
// 007372c3  8b442404             mov eax, dword ptr [esp + 4]
// 007372c7  50                   push eax
// 007372c8  51                   push ecx
// 007372c9  8bce                 mov ecx, esi
// 007372cb  e8c0f8ffff           call 0x736b90
// 007372d0  8bc6                 mov eax, esi
// 007372d2  5e                   pop esi
// 007372d3  59                   pop ecx
// 007372d4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
