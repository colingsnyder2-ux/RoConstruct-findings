// roc 2007-08 00414740  unit: DHTMLWindow  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414740
//
// 00414740  56                   push esi
// 00414741  8bf1                 mov esi, ecx
// 00414743  e8b8921500           call 0x56da00
// 00414748  8906                 mov dword ptr [esi], eax
// 0041474a  8b442408             mov eax, dword ptr [esp + 8]
// 0041474e  50                   push eax
// 0041474f  8d4e04               lea ecx, [esi + 4]
// 00414752  e849faffff           call 0x4141a0
// 00414757  8bc6                 mov eax, esi
// 00414759  5e                   pop esi
// 0041475a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
