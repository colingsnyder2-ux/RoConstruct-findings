// roc 2007-08 00592000  unit: RBX::VVisit::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592000
//
// 00592000  56                   push esi
// 00592001  8bf1                 mov esi, ecx
// 00592003  57                   push edi
// 00592004  8d7e14               lea edi, [esi + 0x14]
// 00592007  e844b3fdff           call 0x56d350
// 0059200c  8907                 mov dword ptr [edi], eax
// 0059200e  8d4630               lea eax, [esi + 0x30]
// 00592011  50                   push eax
// 00592012  e8e9b9fdff           call 0x56da00
// 00592017  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059201b  50                   push eax
// 0059201c  6aff                 push -1
// 0059201e  51                   push ecx
// 0059201f  e81ca9f9ff           call 0x52c940
// 00592024  83c408               add esp, 8
// 00592027  50                   push eax
// 00592028  8bcf                 mov ecx, edi
// 0059202a  e8d1b3fdff           call 0x56d400
// 0059202f  83c638               add esi, 0x38
// 00592032  56                   push esi
// 00592033  e898b7fdff           call 0x56d7d0
// 00592038  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059203c  50                   push eax
// 0059203d  6aff                 push -1
// 0059203f  52                   push edx
// 00592040  e8fba8f9ff           call 0x52c940
// 00592045  83c408               add esp, 8
// 00592048  50                   push eax
// 00592049  8bcf                 mov ecx, edi
// 0059204b  e8b0b3fdff           call 0x56d400
// 00592050  5f                   pop edi
// 00592051  5e                   pop esi
// 00592052  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
