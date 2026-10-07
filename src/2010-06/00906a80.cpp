// roc 2010-06 00906a80  unit: RBX::RbxParticleEmitter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00906a80
//
// 00906a80  51                   push ecx
// 00906a81  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00906a85  33c0                 xor eax, eax
// 00906a87  890424               mov dword ptr [esp], eax
// 00906a8a  56                   push esi
// 00906a8b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00906a8f  88442404             mov byte ptr [esp + 4], al
// 00906a93  8b442404             mov eax, dword ptr [esp + 4]
// 00906a97  50                   push eax
// 00906a98  51                   push ecx
// 00906a99  8bce                 mov ecx, esi
// 00906a9b  e800ffffff           call 0x9069a0
// 00906aa0  8bc6                 mov eax, esi
// 00906aa2  5e                   pop esi
// 00906aa3  59                   pop ecx
// 00906aa4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
