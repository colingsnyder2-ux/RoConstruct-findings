// roc 2009-12 004f7470  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7470
//
// 004f7470  51                   push ecx
// 004f7471  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f7475  33c0                 xor eax, eax
// 004f7477  890424               mov dword ptr [esp], eax
// 004f747a  56                   push esi
// 004f747b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f747f  88442404             mov byte ptr [esp + 4], al
// 004f7483  8b442404             mov eax, dword ptr [esp + 4]
// 004f7487  50                   push eax
// 004f7488  51                   push ecx
// 004f7489  8bce                 mov ecx, esi
// 004f748b  e820f3ffff           call 0x4f67b0
// 004f7490  8bc6                 mov eax, esi
// 004f7492  5e                   pop esi
// 004f7493  59                   pop ecx
// 004f7494  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
