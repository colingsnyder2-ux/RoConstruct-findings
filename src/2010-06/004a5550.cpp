// roc 2010-06 004a5550  unit: boost::any::placeholder  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5550
//
// 004a5550  51                   push ecx
// 004a5551  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5555  33c0                 xor eax, eax
// 004a5557  890424               mov dword ptr [esp], eax
// 004a555a  56                   push esi
// 004a555b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a555f  88442404             mov byte ptr [esp + 4], al
// 004a5563  8b442404             mov eax, dword ptr [esp + 4]
// 004a5567  50                   push eax
// 004a5568  51                   push ecx
// 004a5569  8bce                 mov ecx, esi
// 004a556b  e800f3ffff           call 0x4a4870
// 004a5570  8bc6                 mov eax, esi
// 004a5572  5e                   pop esi
// 004a5573  59                   pop ecx
// 004a5574  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
