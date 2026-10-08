// roc 2007-03 005d4a20  unit: seg_005d0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d4a20
//
// 005d4a20  51                   push ecx
// 005d4a21  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d4a25  33c0                 xor eax, eax
// 005d4a27  890424               mov dword ptr [esp], eax
// 005d4a2a  56                   push esi
// 005d4a2b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d4a2f  88442404             mov byte ptr [esp + 4], al
// 005d4a33  8b442404             mov eax, dword ptr [esp + 4]
// 005d4a37  50                   push eax
// 005d4a38  51                   push ecx
// 005d4a39  8bce                 mov ecx, esi
// 005d4a3b  e830f2ffff           call 0x5d3c70
// 005d4a40  8bc6                 mov eax, esi
// 005d4a42  5e                   pop esi
// 005d4a43  59                   pop ecx
// 005d4a44  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
