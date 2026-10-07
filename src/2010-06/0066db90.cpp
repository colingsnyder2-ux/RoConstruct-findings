// roc 2010-06 0066db90  unit: RBX::Humanoid  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066db90
//
// 0066db90  51                   push ecx
// 0066db91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066db95  33c0                 xor eax, eax
// 0066db97  890424               mov dword ptr [esp], eax
// 0066db9a  56                   push esi
// 0066db9b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066db9f  88442404             mov byte ptr [esp + 4], al
// 0066dba3  8b442404             mov eax, dword ptr [esp + 4]
// 0066dba7  50                   push eax
// 0066dba8  51                   push ecx
// 0066dba9  8bce                 mov ecx, esi
// 0066dbab  e830eae9ff           call 0x50c5e0
// 0066dbb0  8bc6                 mov eax, esi
// 0066dbb2  5e                   pop esi
// 0066dbb3  59                   pop ecx
// 0066dbb4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
