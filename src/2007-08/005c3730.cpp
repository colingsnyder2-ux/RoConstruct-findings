// roc 2007-08 005c3730  unit: RBX::Lua::LuaArguments  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3730
//
// 005c3730  64a100000000         mov eax, dword ptr fs:[0]
// 005c3736  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c373a  6aff                 push -1
// 005c373c  6832977500           push 0x759732
// 005c3741  50                   push eax
// 005c3742  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c3746  64892500000000       mov dword ptr fs:[0], esp
// 005c374d  8b00                 mov eax, dword ptr [eax]
// 005c374f  81ec88000000         sub esp, 0x88
// 005c3755  85c0                 test eax, eax
// 005c3757  51                   push ecx
// 005c3758  7536                 jne 0x5c3790
// 005c375a  8d542470             lea edx, [esp + 0x70]
// 005c375e  6864957b00           push 0x7b9564
// 005c3763  52                   push edx
// 005c3764  e857e0f3ff           call 0x5017c0
// 005c3769  83c40c               add esp, 0xc
// 005c376c  50                   push eax
// 005c376d  8d4c242c             lea ecx, [esp + 0x2c]
// 005c3771  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005c377c  e83ff6e4ff           call 0x412dc0
// 005c3781  68c0108400           push 0x8410c0
// 005c3786  8d44242c             lea eax, [esp + 0x2c]
// 005c378a  50                   push eax
// 005c378b  e80ed40600           call 0x630b9e
// 005c3790  8d542454             lea edx, [esp + 0x54]
// 005c3794  682c9f7a00           push 0x7a9f2c
// 005c3799  52                   push edx
// 005c379a  e821e0f3ff           call 0x5017c0
// 005c379f  83c40c               add esp, 0xc
// 005c37a2  50                   push eax
// 005c37a3  8d4c2404             lea ecx, [esp + 4]
// 005c37a7  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 005c37b2  e809f6e4ff           call 0x412dc0
// 005c37b7  68c0108400           push 0x8410c0
// 005c37bc  8d442404             lea eax, [esp + 4]
// 005c37c0  50                   push eax
// 005c37c1  e8d8d30600           call 0x630b9e
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_newindex@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAXAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
