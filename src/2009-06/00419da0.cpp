// roc 2009-06 00419da0  unit: CInsertObjectDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419da0
//
// 00419da0  51                   push ecx
// 00419da1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00419da5  33c0                 xor eax, eax
// 00419da7  890424               mov dword ptr [esp], eax
// 00419daa  56                   push esi
// 00419dab  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00419daf  88442404             mov byte ptr [esp + 4], al
// 00419db3  8b442404             mov eax, dword ptr [esp + 4]
// 00419db7  50                   push eax
// 00419db8  51                   push ecx
// 00419db9  8bce                 mov ecx, esi
// 00419dbb  e8b0feffff           call 0x419c70
// 00419dc0  8bc6                 mov eax, esi
// 00419dc2  5e                   pop esi
// 00419dc3  59                   pop ecx
// 00419dc4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
