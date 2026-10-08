// roc 2007-03 00495300  unit: seg_00490000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00495300
//
// 00495300  51                   push ecx
// 00495301  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00495305  33c0                 xor eax, eax
// 00495307  890424               mov dword ptr [esp], eax
// 0049530a  56                   push esi
// 0049530b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049530f  88442404             mov byte ptr [esp + 4], al
// 00495313  8b442404             mov eax, dword ptr [esp + 4]
// 00495317  50                   push eax
// 00495318  51                   push ecx
// 00495319  8bce                 mov ecx, esi
// 0049531b  e860fcffff           call 0x494f80
// 00495320  8bc6                 mov eax, esi
// 00495322  5e                   pop esi
// 00495323  59                   pop ecx
// 00495324  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
