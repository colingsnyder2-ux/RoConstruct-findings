// roc 2012-06 0084d500  unit: RBX::Lua::LuaArguments  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084d500
//
// 0084d500  56                   push esi
// 0084d501  8bf1                 mov esi, ecx
// 0084d503  e8c8cfebff           call 0x70a4d0
// 0084d508  8906                 mov dword ptr [esi], eax
// 0084d50a  8b442408             mov eax, dword ptr [esp + 8]
// 0084d50e  50                   push eax
// 0084d50f  8d4e04               lea ecx, [esi + 4]
// 0084d512  e8d9d8ebff           call 0x70adf0
// 0084d517  8bc6                 mov eax, esi
// 0084d519  5e                   pop esi
// 0084d51a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
