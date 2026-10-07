// roc 2011-06 007461e0  unit: RBX::Animator  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007461e0
//
// 007461e0  51                   push ecx
// 007461e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007461e5  33c0                 xor eax, eax
// 007461e7  890424               mov dword ptr [esp], eax
// 007461ea  56                   push esi
// 007461eb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007461ef  88442404             mov byte ptr [esp + 4], al
// 007461f3  8b442404             mov eax, dword ptr [esp + 4]
// 007461f7  50                   push eax
// 007461f8  51                   push ecx
// 007461f9  8bce                 mov ecx, esi
// 007461fb  e810fcffff           call 0x745e10
// 00746200  8bc6                 mov eax, esi
// 00746202  5e                   pop esi
// 00746203  59                   pop ecx
// 00746204  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
