// roc 2010-06 00508490  unit: RBX::Network::ServerReplicator  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00508490
//
// 00508490  51                   push ecx
// 00508491  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00508495  33c0                 xor eax, eax
// 00508497  890424               mov dword ptr [esp], eax
// 0050849a  56                   push esi
// 0050849b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050849f  88442404             mov byte ptr [esp + 4], al
// 005084a3  8b442404             mov eax, dword ptr [esp + 4]
// 005084a7  50                   push eax
// 005084a8  51                   push ecx
// 005084a9  8bce                 mov ecx, esi
// 005084ab  e830feffff           call 0x5082e0
// 005084b0  8bc6                 mov eax, esi
// 005084b2  5e                   pop esi
// 005084b3  59                   pop ecx
// 005084b4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
