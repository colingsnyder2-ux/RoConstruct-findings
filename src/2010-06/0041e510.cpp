// roc 2010-06 0041e510  unit: CSelectionTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041e510
//
// 0041e510  51                   push ecx
// 0041e511  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041e515  33c0                 xor eax, eax
// 0041e517  890424               mov dword ptr [esp], eax
// 0041e51a  56                   push esi
// 0041e51b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041e51f  88442404             mov byte ptr [esp + 4], al
// 0041e523  8b442404             mov eax, dword ptr [esp + 4]
// 0041e527  50                   push eax
// 0041e528  51                   push ecx
// 0041e529  8bce                 mov ecx, esi
// 0041e52b  e810f8ffff           call 0x41dd40
// 0041e530  8bc6                 mov eax, esi
// 0041e532  5e                   pop esi
// 0041e533  59                   pop ecx
// 0041e534  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
