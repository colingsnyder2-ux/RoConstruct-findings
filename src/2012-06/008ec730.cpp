// roc 2012-06 008ec730  unit: RBX::VLuaDragger::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ec730
//
// 008ec730  51                   push ecx
// 008ec731  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ec735  33c0                 xor eax, eax
// 008ec737  890424               mov dword ptr [esp], eax
// 008ec73a  56                   push esi
// 008ec73b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ec73f  88442404             mov byte ptr [esp + 4], al
// 008ec743  8b442404             mov eax, dword ptr [esp + 4]
// 008ec747  50                   push eax
// 008ec748  51                   push ecx
// 008ec749  8bce                 mov ecx, esi
// 008ec74b  e860fdffff           call 0x8ec4b0
// 008ec750  8bc6                 mov eax, esi
// 008ec752  5e                   pop esi
// 008ec753  59                   pop ecx
// 008ec754  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
