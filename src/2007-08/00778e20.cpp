// roc 2007-08 00778e20  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778e20
//
// 00778e20  a104fa8b00           mov eax, dword ptr [0x8bfa04]
// 00778e25  8b10                 mov edx, dword ptr [eax]
// 00778e27  83ec08               sub esp, 8
// 00778e2a  56                   push esi
// 00778e2b  50                   push eax
// 00778e2c  b900fa8b00           mov ecx, 0x8bfa00
// 00778e31  51                   push ecx
// 00778e32  52                   push edx
// 00778e33  8bf1                 mov esi, ecx
// 00778e35  56                   push esi
// 00778e36  8d442414             lea eax, [esp + 0x14]
// 00778e3a  50                   push eax
// 00778e3b  e870ccd5ff           call 0x4d5ab0
// 00778e40  8b0d04fa8b00         mov ecx, dword ptr [0x8bfa04]
// 00778e46  51                   push ecx
// 00778e47  e8166eebff           call 0x62fc62
// 00778e4c  83c404               add esp, 4
// 00778e4f  33c0                 xor eax, eax
// 00778e51  a304fa8b00           mov dword ptr [0x8bfa04], eax
// 00778e56  a308fa8b00           mov dword ptr [0x8bfa08], eax
// 00778e5b  5e                   pop esi
// 00778e5c  83c408               add esp, 8
// 00778e5f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
