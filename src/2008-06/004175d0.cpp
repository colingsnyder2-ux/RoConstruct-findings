// from server: 100% by tester
// roc 2007-03 00415820  unit: seg_00410000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00415820
//
// 00415820  56                   push esi
// 00415821  8bf1                 mov esi, ecx
// 00415823  e8d87b1500           call 0x56d400
// 00415828  8906                 mov dword ptr [esi], eax
// 0041582a  8b442408             mov eax, dword ptr [esp + 8]
// 0041582e  50                   push eax
// 0041582f  8d4e04               lea ecx, [esi + 4]
// 00415832  e879f9ffff           call 0x4151b0
// 00415837  8bc6                 mov eax, esi
// 00415839  5e                   pop esi
// 0041583a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
