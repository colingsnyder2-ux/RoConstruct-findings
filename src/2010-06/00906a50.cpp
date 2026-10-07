// roc 2010-06 00906a50  unit: RBX::RbxParticleEmitter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00906a50
//
// 00906a50  51                   push ecx
// 00906a51  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00906a55  33c0                 xor eax, eax
// 00906a57  890424               mov dword ptr [esp], eax
// 00906a5a  56                   push esi
// 00906a5b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00906a5f  88442404             mov byte ptr [esp + 4], al
// 00906a63  8b442404             mov eax, dword ptr [esp + 4]
// 00906a67  50                   push eax
// 00906a68  51                   push ecx
// 00906a69  8bce                 mov ecx, esi
// 00906a6b  e8a0feffff           call 0x906910
// 00906a70  8bc6                 mov eax, esi
// 00906a72  5e                   pop esi
// 00906a73  59                   pop ecx
// 00906a74  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
