// roc 2009-12 00777160  unit: RBX::BackpackItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00777160
//
// 00777160  51                   push ecx
// 00777161  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00777165  33c0                 xor eax, eax
// 00777167  890424               mov dword ptr [esp], eax
// 0077716a  56                   push esi
// 0077716b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077716f  88442404             mov byte ptr [esp + 4], al
// 00777173  8b442404             mov eax, dword ptr [esp + 4]
// 00777177  50                   push eax
// 00777178  51                   push ecx
// 00777179  8bce                 mov ecx, esi
// 0077717b  e8e0f5ffff           call 0x776760
// 00777180  8bc6                 mov eax, esi
// 00777182  5e                   pop esi
// 00777183  59                   pop ecx
// 00777184  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
