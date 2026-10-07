// roc 2012-06 006a8260  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a8260
//
// 006a8260  56                   push esi
// 006a8261  8bf1                 mov esi, ecx
// 006a8263  e8580f0600           call 0x7091c0
// 006a8268  8906                 mov dword ptr [esi], eax
// 006a826a  8b442408             mov eax, dword ptr [esp + 8]
// 006a826e  50                   push eax
// 006a826f  8d4e04               lea ecx, [esi + 4]
// 006a8272  e879f3ffff           call 0x6a75f0
// 006a8277  8bc6                 mov eax, esi
// 006a8279  5e                   pop esi
// 006a827a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
