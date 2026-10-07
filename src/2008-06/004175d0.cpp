// roc 2008-06 004175d0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004175d0
//
// 004175d0  56                   push esi
// 004175d1  8bf1                 mov esi, ecx
// 004175d3  e818581500           call 0x56cdf0
// 004175d8  8906                 mov dword ptr [esi], eax
// 004175da  8b442408             mov eax, dword ptr [esp + 8]
// 004175de  50                   push eax
// 004175df  8d4e04               lea ecx, [esi + 4]
// 004175e2  e849fcffff           call 0x417230
// 004175e7  8bc6                 mov eax, esi
// 004175e9  5e                   pop esi
// 004175ea  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
