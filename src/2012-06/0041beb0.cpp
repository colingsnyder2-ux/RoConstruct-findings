// roc 2012-06 0041beb0  unit: VCRbxObject::?$CComObjectNoLock  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041beb0
//
// 0041beb0  56                   push esi
// 0041beb1  8bf1                 mov esi, ecx
// 0041beb3  e818552a00           call 0x6c13d0
// 0041beb8  8906                 mov dword ptr [esi], eax
// 0041beba  8b442408             mov eax, dword ptr [esp + 8]
// 0041bebe  50                   push eax
// 0041bebf  8d4e04               lea ecx, [esi + 4]
// 0041bec2  e8a9fbffff           call 0x41ba70
// 0041bec7  8bc6                 mov eax, esi
// 0041bec9  5e                   pop esi
// 0041beca  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
