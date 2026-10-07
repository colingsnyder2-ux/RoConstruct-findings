// roc 2012-06 0040f100  unit: rbx::Vbad_placement_any_cast::U?$error_info_injector::?$clone_impl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040f100
//
// 0040f100  56                   push esi
// 0040f101  8bf1                 mov esi, ecx
// 0040f103  e818242b00           call 0x6c1520
// 0040f108  8906                 mov dword ptr [esi], eax
// 0040f10a  8b442408             mov eax, dword ptr [esp + 8]
// 0040f10e  50                   push eax
// 0040f10f  8d4e04               lea ecx, [esi + 4]
// 0040f112  e8f9f1ffff           call 0x40e310
// 0040f117  8bc6                 mov eax, esi
// 0040f119  5e                   pop esi
// 0040f11a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
