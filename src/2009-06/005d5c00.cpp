// roc 2009-06 005d5c00  unit: RBX::PhysicsJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d5c00
//
// 005d5c00  51                   push ecx
// 005d5c01  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d5c05  33c0                 xor eax, eax
// 005d5c07  890424               mov dword ptr [esp], eax
// 005d5c0a  56                   push esi
// 005d5c0b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d5c0f  88442404             mov byte ptr [esp + 4], al
// 005d5c13  8b442404             mov eax, dword ptr [esp + 4]
// 005d5c17  50                   push eax
// 005d5c18  51                   push ecx
// 005d5c19  8bce                 mov ecx, esi
// 005d5c1b  e810fcffff           call 0x5d5830
// 005d5c20  8bc6                 mov eax, esi
// 005d5c22  5e                   pop esi
// 005d5c23  59                   pop ecx
// 005d5c24  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
