// roc 2009-12 0055e210  unit: RBX::Network::NetworkOwnerJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055e210
//
// 0055e210  51                   push ecx
// 0055e211  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055e215  33c0                 xor eax, eax
// 0055e217  890424               mov dword ptr [esp], eax
// 0055e21a  56                   push esi
// 0055e21b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055e21f  88442404             mov byte ptr [esp + 4], al
// 0055e223  8b442404             mov eax, dword ptr [esp + 4]
// 0055e227  50                   push eax
// 0055e228  51                   push ecx
// 0055e229  8bce                 mov ecx, esi
// 0055e22b  e800f9ffff           call 0x55db30
// 0055e230  8bc6                 mov eax, esi
// 0055e232  5e                   pop esi
// 0055e233  59                   pop ecx
// 0055e234  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
