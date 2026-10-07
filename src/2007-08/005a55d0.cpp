// roc 2007-08 005a55d0  unit: RBX::Humanoid  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a55d0
//
// 005a55d0  51                   push ecx
// 005a55d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a55d5  33c0                 xor eax, eax
// 005a55d7  890424               mov dword ptr [esp], eax
// 005a55da  56                   push esi
// 005a55db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a55df  88442404             mov byte ptr [esp + 4], al
// 005a55e3  8b442404             mov eax, dword ptr [esp + 4]
// 005a55e7  50                   push eax
// 005a55e8  51                   push ecx
// 005a55e9  8bce                 mov ecx, esi
// 005a55eb  e850f9ffff           call 0x5a4f40
// 005a55f0  8bc6                 mov eax, esi
// 005a55f2  5e                   pop esi
// 005a55f3  59                   pop ecx
// 005a55f4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
