// roc 2009-06 004b5190  unit: RBX::Network::P8Player::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5190
//
// 004b5190  51                   push ecx
// 004b5191  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5195  33c0                 xor eax, eax
// 004b5197  890424               mov dword ptr [esp], eax
// 004b519a  56                   push esi
// 004b519b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b519f  88442404             mov byte ptr [esp + 4], al
// 004b51a3  8b442404             mov eax, dword ptr [esp + 4]
// 004b51a7  50                   push eax
// 004b51a8  51                   push ecx
// 004b51a9  8bce                 mov ecx, esi
// 004b51ab  e8e0f5ffff           call 0x4b4790
// 004b51b0  8bc6                 mov eax, esi
// 004b51b2  5e                   pop esi
// 004b51b3  59                   pop ecx
// 004b51b4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
