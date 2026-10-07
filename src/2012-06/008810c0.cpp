// roc 2012-06 008810c0  unit: VAuthoringSettings::?$BoundPropGetSet  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008810c0
//
// 008810c0  51                   push ecx
// 008810c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008810c5  33c0                 xor eax, eax
// 008810c7  890424               mov dword ptr [esp], eax
// 008810ca  56                   push esi
// 008810cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008810cf  88442404             mov byte ptr [esp + 4], al
// 008810d3  8b442404             mov eax, dword ptr [esp + 4]
// 008810d7  50                   push eax
// 008810d8  51                   push ecx
// 008810d9  8bce                 mov ecx, esi
// 008810db  e880feffff           call 0x880f60
// 008810e0  8bc6                 mov eax, esi
// 008810e2  5e                   pop esi
// 008810e3  59                   pop ecx
// 008810e4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
