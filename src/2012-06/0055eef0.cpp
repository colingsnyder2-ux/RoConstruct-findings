// roc 2012-06 0055eef0  unit: RBX::Network::VClient::?$EventDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0055eef0
//
// 0055eef0  56                   push esi
// 0055eef1  8bf1                 mov esi, ecx
// 0055eef3  e8e8a11a00           call 0x7090e0
// 0055eef8  8906                 mov dword ptr [esi], eax
// 0055eefa  8b442408             mov eax, dword ptr [esp + 8]
// 0055eefe  50                   push eax
// 0055eeff  8d4e04               lea ecx, [esi + 4]
// 0055ef02  e859fcffff           call 0x55eb60
// 0055ef07  8bc6                 mov eax, esi
// 0055ef09  5e                   pop esi
// 0055ef0a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
