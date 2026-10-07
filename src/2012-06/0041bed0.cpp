// roc 2012-06 0041bed0  unit: VCRbxObject::?$CComObjectNoLock  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041bed0
//
// 0041bed0  56                   push esi
// 0041bed1  8bf1                 mov esi, ecx
// 0041bed3  e848562a00           call 0x6c1520
// 0041bed8  8906                 mov dword ptr [esi], eax
// 0041beda  8b442408             mov eax, dword ptr [esp + 8]
// 0041bede  50                   push eax
// 0041bedf  8d4e04               lea ecx, [esi + 4]
// 0041bee2  e8f9fbffff           call 0x41bae0
// 0041bee7  8bc6                 mov eax, esi
// 0041bee9  5e                   pop esi
// 0041beea  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
