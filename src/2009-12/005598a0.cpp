// roc 2009-12 005598a0  unit: RBX::Network::ServerReplicator  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005598a0
//
// 005598a0  51                   push ecx
// 005598a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005598a5  33c0                 xor eax, eax
// 005598a7  890424               mov dword ptr [esp], eax
// 005598aa  56                   push esi
// 005598ab  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005598af  88442404             mov byte ptr [esp + 4], al
// 005598b3  8b442404             mov eax, dword ptr [esp + 4]
// 005598b7  50                   push eax
// 005598b8  51                   push ecx
// 005598b9  8bce                 mov ecx, esi
// 005598bb  e830feffff           call 0x5596f0
// 005598c0  8bc6                 mov eax, esi
// 005598c2  5e                   pop esi
// 005598c3  59                   pop ecx
// 005598c4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
