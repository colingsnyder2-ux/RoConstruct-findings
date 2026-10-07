// roc 2011-06 00512460  unit: RBX::Network::ClientReplicator  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512460
//
// 00512460  51                   push ecx
// 00512461  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00512465  33c0                 xor eax, eax
// 00512467  890424               mov dword ptr [esp], eax
// 0051246a  56                   push esi
// 0051246b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051246f  88442404             mov byte ptr [esp + 4], al
// 00512473  8b442404             mov eax, dword ptr [esp + 4]
// 00512477  50                   push eax
// 00512478  51                   push ecx
// 00512479  8bce                 mov ecx, esi
// 0051247b  e840feffff           call 0x5122c0
// 00512480  8bc6                 mov eax, esi
// 00512482  5e                   pop esi
// 00512483  59                   pop ecx
// 00512484  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
