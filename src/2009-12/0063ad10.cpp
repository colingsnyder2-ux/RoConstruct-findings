// roc 2009-12 0063ad10  unit: RBX::PhysicsJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063ad10
//
// 0063ad10  51                   push ecx
// 0063ad11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063ad15  33c0                 xor eax, eax
// 0063ad17  890424               mov dword ptr [esp], eax
// 0063ad1a  56                   push esi
// 0063ad1b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063ad1f  88442404             mov byte ptr [esp + 4], al
// 0063ad23  8b442404             mov eax, dword ptr [esp + 4]
// 0063ad27  50                   push eax
// 0063ad28  51                   push ecx
// 0063ad29  8bce                 mov ecx, esi
// 0063ad2b  e800fcffff           call 0x63a930
// 0063ad30  8bc6                 mov eax, esi
// 0063ad32  5e                   pop esi
// 0063ad33  59                   pop ecx
// 0063ad34  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
