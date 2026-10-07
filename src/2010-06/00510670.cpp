// roc 2010-06 00510670  unit: RBX::Network::DirectPhysicsReceiver  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00510670
//
// 00510670  51                   push ecx
// 00510671  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00510675  33c0                 xor eax, eax
// 00510677  890424               mov dword ptr [esp], eax
// 0051067a  56                   push esi
// 0051067b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051067f  88442404             mov byte ptr [esp + 4], al
// 00510683  8b442404             mov eax, dword ptr [esp + 4]
// 00510687  50                   push eax
// 00510688  51                   push ecx
// 00510689  8bce                 mov ecx, esi
// 0051068b  e8a0fdffff           call 0x510430
// 00510690  8bc6                 mov eax, esi
// 00510692  5e                   pop esi
// 00510693  59                   pop ecx
// 00510694  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
