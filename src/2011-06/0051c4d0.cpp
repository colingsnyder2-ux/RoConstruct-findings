// roc 2011-06 0051c4d0  unit: RBX::Network::DirectPhysicsReceiver  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051c4d0
//
// 0051c4d0  51                   push ecx
// 0051c4d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051c4d5  33c0                 xor eax, eax
// 0051c4d7  890424               mov dword ptr [esp], eax
// 0051c4da  56                   push esi
// 0051c4db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051c4df  88442404             mov byte ptr [esp + 4], al
// 0051c4e3  8b442404             mov eax, dword ptr [esp + 4]
// 0051c4e7  50                   push eax
// 0051c4e8  51                   push ecx
// 0051c4e9  8bce                 mov ecx, esi
// 0051c4eb  e860feffff           call 0x51c350
// 0051c4f0  8bc6                 mov eax, esi
// 0051c4f2  5e                   pop esi
// 0051c4f3  59                   pop ecx
// 0051c4f4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
