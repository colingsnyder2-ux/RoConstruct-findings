// roc 2011-06 00765060  unit: RBX::Lua::LuaArguments  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00765060
//
// 00765060  51                   push ecx
// 00765061  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00765065  33c0                 xor eax, eax
// 00765067  890424               mov dword ptr [esp], eax
// 0076506a  56                   push esi
// 0076506b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076506f  88442404             mov byte ptr [esp + 4], al
// 00765073  8b442404             mov eax, dword ptr [esp + 4]
// 00765077  50                   push eax
// 00765078  51                   push ecx
// 00765079  8bce                 mov ecx, esi
// 0076507b  e880fdffff           call 0x764e00
// 00765080  8bc6                 mov eax, esi
// 00765082  5e                   pop esi
// 00765083  59                   pop ecx
// 00765084  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
