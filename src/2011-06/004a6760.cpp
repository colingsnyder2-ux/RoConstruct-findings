// roc 2011-06 004a6760  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6760
//
// 004a6760  51                   push ecx
// 004a6761  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6765  33c0                 xor eax, eax
// 004a6767  890424               mov dword ptr [esp], eax
// 004a676a  56                   push esi
// 004a676b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a676f  88442404             mov byte ptr [esp + 4], al
// 004a6773  8b442404             mov eax, dword ptr [esp + 4]
// 004a6777  50                   push eax
// 004a6778  51                   push ecx
// 004a6779  8bce                 mov ecx, esi
// 004a677b  e880efffff           call 0x4a5700
// 004a6780  8bc6                 mov eax, esi
// 004a6782  5e                   pop esi
// 004a6783  59                   pop ecx
// 004a6784  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
