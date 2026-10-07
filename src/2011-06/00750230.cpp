// roc 2011-06 00750230  unit: RBX::BallBlockContact  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00750230
//
// 00750230  51                   push ecx
// 00750231  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00750235  33c0                 xor eax, eax
// 00750237  890424               mov dword ptr [esp], eax
// 0075023a  56                   push esi
// 0075023b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075023f  88442404             mov byte ptr [esp + 4], al
// 00750243  8b442404             mov eax, dword ptr [esp + 4]
// 00750247  50                   push eax
// 00750248  51                   push ecx
// 00750249  8bce                 mov ecx, esi
// 0075024b  e8f0f9ffff           call 0x74fc40
// 00750250  8bc6                 mov eax, esi
// 00750252  5e                   pop esi
// 00750253  59                   pop ecx
// 00750254  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
