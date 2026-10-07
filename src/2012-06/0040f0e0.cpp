// roc 2012-06 0040f0e0  unit: rbx::Vbad_placement_any_cast::U?$error_info_injector::?$clone_impl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040f0e0
//
// 0040f0e0  56                   push esi
// 0040f0e1  8bf1                 mov esi, ecx
// 0040f0e3  e878222b00           call 0x6c1360
// 0040f0e8  8906                 mov dword ptr [esi], eax
// 0040f0ea  8b442408             mov eax, dword ptr [esp + 8]
// 0040f0ee  50                   push eax
// 0040f0ef  8d4e04               lea ecx, [esi + 4]
// 0040f0f2  e889f1ffff           call 0x40e280
// 0040f0f7  8bc6                 mov eax, esi
// 0040f0f9  5e                   pop esi
// 0040f0fa  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
