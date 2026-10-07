// roc 2012-06 0052d460  unit: RBX::Network::VPlayer::?$EventDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052d460
//
// 0052d460  56                   push esi
// 0052d461  8bf1                 mov esi, ecx
// 0052d463  e8383d1900           call 0x6c11a0
// 0052d468  8906                 mov dword ptr [esi], eax
// 0052d46a  8b442408             mov eax, dword ptr [esp + 8]
// 0052d46e  50                   push eax
// 0052d46f  8d4e04               lea ecx, [esi + 4]
// 0052d472  e839ffffff           call 0x52d3b0
// 0052d477  8bc6                 mov eax, esi
// 0052d479  5e                   pop esi
// 0052d47a  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Value@Reflection@RBX@@QAEAAV012@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
