// roc 2012-06 005b64a0  unit: RBX::Network::DirectPhysicsReceiver  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b64a0
//
// 005b64a0  51                   push ecx
// 005b64a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b64a5  33c0                 xor eax, eax
// 005b64a7  890424               mov dword ptr [esp], eax
// 005b64aa  56                   push esi
// 005b64ab  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b64af  88442404             mov byte ptr [esp + 4], al
// 005b64b3  8b442404             mov eax, dword ptr [esp + 4]
// 005b64b7  50                   push eax
// 005b64b8  51                   push ecx
// 005b64b9  8bce                 mov ecx, esi
// 005b64bb  e8b0fdffff           call 0x5b6270
// 005b64c0  8bc6                 mov eax, esi
// 005b64c2  5e                   pop esi
// 005b64c3  59                   pop ecx
// 005b64c4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
