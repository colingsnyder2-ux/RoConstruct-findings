// roc 2012-06 0052e0f0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052e0f0
//
// 0052e0f0  56                   push esi
// 0052e0f1  8bf1                 mov esi, ecx
// 0052e0f3  e848331900           call 0x6c1440
// 0052e0f8  8906                 mov dword ptr [esi], eax
// 0052e0fa  8b442408             mov eax, dword ptr [esp + 8]
// 0052e0fe  50                   push eax
// 0052e0ff  8d4e04               lea ecx, [esi + 4]
// 0052e102  e849feffff           call 0x52df50
// 0052e107  8bc6                 mov eax, esi
// 0052e109  5e                   pop esi
// 0052e10a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
