// roc 2011-06 004a6790  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6790
//
// 004a6790  51                   push ecx
// 004a6791  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6795  33c0                 xor eax, eax
// 004a6797  890424               mov dword ptr [esp], eax
// 004a679a  56                   push esi
// 004a679b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a679f  88442404             mov byte ptr [esp + 4], al
// 004a67a3  8b442404             mov eax, dword ptr [esp + 4]
// 004a67a7  50                   push eax
// 004a67a8  51                   push ecx
// 004a67a9  8bce                 mov ecx, esi
// 004a67ab  e820f0ffff           call 0x4a57d0
// 004a67b0  8bc6                 mov eax, esi
// 004a67b2  5e                   pop esi
// 004a67b3  59                   pop ecx
// 004a67b4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
