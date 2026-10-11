// roc 2007-03 005be7f0  unit: seg_005b0000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be7f0
//
// 005be7f0  64a100000000         mov eax, dword ptr fs:[0]
// 005be7f6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005be7fa  6aff                 push -1
// 005be7fc  68a2a37500           push 0x75a3a2
// 005be801  50                   push eax
// 005be802  8b442410             mov eax, dword ptr [esp + 0x10]
// 005be806  64892500000000       mov dword ptr fs:[0], esp
// 005be80d  8b00                 mov eax, dword ptr [eax]
// 005be80f  81ec88000000         sub esp, 0x88
// 005be815  85c0                 test eax, eax
// 005be817  51                   push ecx
// 005be818  7536                 jne 0x5be850
// 005be81a  8d542470             lea edx, [esp + 0x70]
// 005be81e  682c967b00           push 0x7b962c
// 005be823  52                   push edx
// 005be824  e8076bf3ff           call 0x4f5330
// 005be829  83c40c               add esp, 0xc
// 005be82c  50                   push eax
// 005be82d  8d4c242c             lea ecx, [esp + 0x2c]
// 005be831  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005be83c  e8df54e5ff           call 0x413d20
// 005be841  68e0138400           push 0x8413e0
// 005be846  8d44242c             lea eax, [esp + 0x2c]
// 005be84a  50                   push eax
// 005be84b  e8de070600           call 0x61f02e
// 005be850  8d542454             lea edx, [esp + 0x54]
// 005be854  6824b67a00           push 0x7ab624
// 005be859  52                   push edx
// 005be85a  e8d16af3ff           call 0x4f5330
// 005be85f  83c40c               add esp, 0xc
// 005be862  50                   push eax
// 005be863  8d4c2404             lea ecx, [esp + 4]
// 005be867  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 005be872  e8a954e5ff           call 0x413d20
// 005be877  68e0138400           push 0x8413e0
// 005be87c  8d442404             lea eax, [esp + 4]
// 005be880  50                   push eax
// 005be881  e8a8070600           call 0x61f02e
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_newindex@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAXAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
