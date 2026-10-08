// roc 2007-03 0042c010  unit: seg_00420000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042c010
//
// 0042c010  51                   push ecx
// 0042c011  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042c015  33c0                 xor eax, eax
// 0042c017  890424               mov dword ptr [esp], eax
// 0042c01a  56                   push esi
// 0042c01b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042c01f  88442404             mov byte ptr [esp + 4], al
// 0042c023  8b442404             mov eax, dword ptr [esp + 4]
// 0042c027  50                   push eax
// 0042c028  51                   push ecx
// 0042c029  8bce                 mov ecx, esi
// 0042c02b  e8d0f8ffff           call 0x42b900
// 0042c030  8bc6                 mov eax, esi
// 0042c032  5e                   pop esi
// 0042c033  59                   pop ecx
// 0042c034  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
