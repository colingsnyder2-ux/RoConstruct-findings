// roc 2009-12 00561bd0  unit: RBX::Network::PhysicsSender::Job  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00561bd0
//
// 00561bd0  51                   push ecx
// 00561bd1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00561bd5  33c0                 xor eax, eax
// 00561bd7  890424               mov dword ptr [esp], eax
// 00561bda  56                   push esi
// 00561bdb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00561bdf  88442404             mov byte ptr [esp + 4], al
// 00561be3  8b442404             mov eax, dword ptr [esp + 4]
// 00561be7  50                   push eax
// 00561be8  51                   push ecx
// 00561be9  8bce                 mov ecx, esi
// 00561beb  e8f0fcffff           call 0x5618e0
// 00561bf0  8bc6                 mov eax, esi
// 00561bf2  5e                   pop esi
// 00561bf3  59                   pop ecx
// 00561bf4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
