// from server: 100% by tester
// roc 2007-03 0041dd90  unit: seg_00410000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041dd90
//
// 0041dd90  51                   push ecx
// 0041dd91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041dd95  33c0                 xor eax, eax
// 0041dd97  890424               mov dword ptr [esp], eax
// 0041dd9a  56                   push esi
// 0041dd9b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041dd9f  88442404             mov byte ptr [esp + 4], al
// 0041dda3  8b442404             mov eax, dword ptr [esp + 4]
// 0041dda7  50                   push eax
// 0041dda8  51                   push ecx
// 0041dda9  8bce                 mov ecx, esi
// 0041ddab  e840ffffff           call 0x41dcf0
// 0041ddb0  8bc6                 mov eax, esi
// 0041ddb2  5e                   pop esi
// 0041ddb3  59                   pop ecx
// 0041ddb4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
