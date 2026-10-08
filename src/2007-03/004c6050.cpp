// roc 2007-03 004c6050  unit: seg_004c0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c6050
//
// 004c6050  51                   push ecx
// 004c6051  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c6055  33c0                 xor eax, eax
// 004c6057  890424               mov dword ptr [esp], eax
// 004c605a  56                   push esi
// 004c605b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c605f  88442404             mov byte ptr [esp + 4], al
// 004c6063  8b442404             mov eax, dword ptr [esp + 4]
// 004c6067  50                   push eax
// 004c6068  51                   push ecx
// 004c6069  8bce                 mov ecx, esi
// 004c606b  e870edffff           call 0x4c4de0
// 004c6070  8bc6                 mov eax, esi
// 004c6072  5e                   pop esi
// 004c6073  59                   pop ecx
// 004c6074  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
