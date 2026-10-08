// roc 2007-03 00422a10  unit: seg_00420000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00422a10
//
// 00422a10  51                   push ecx
// 00422a11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00422a15  33c0                 xor eax, eax
// 00422a17  890424               mov dword ptr [esp], eax
// 00422a1a  56                   push esi
// 00422a1b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00422a1f  88442404             mov byte ptr [esp + 4], al
// 00422a23  8b442404             mov eax, dword ptr [esp + 4]
// 00422a27  50                   push eax
// 00422a28  51                   push ecx
// 00422a29  8bce                 mov ecx, esi
// 00422a2b  e850f8ffff           call 0x422280
// 00422a30  8bc6                 mov eax, esi
// 00422a32  5e                   pop esi
// 00422a33  59                   pop ecx
// 00422a34  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
