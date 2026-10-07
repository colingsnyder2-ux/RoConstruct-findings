// roc 2012-06 00427760  unit: CInsertObjectDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00427760
//
// 00427760  51                   push ecx
// 00427761  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00427765  33c0                 xor eax, eax
// 00427767  890424               mov dword ptr [esp], eax
// 0042776a  56                   push esi
// 0042776b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042776f  88442404             mov byte ptr [esp + 4], al
// 00427773  8b442404             mov eax, dword ptr [esp + 4]
// 00427777  50                   push eax
// 00427778  51                   push ecx
// 00427779  8bce                 mov ecx, esi
// 0042777b  e8b0feffff           call 0x427630
// 00427780  8bc6                 mov eax, esi
// 00427782  5e                   pop esi
// 00427783  59                   pop ecx
// 00427784  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
