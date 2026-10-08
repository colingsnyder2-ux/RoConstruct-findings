// roc 2007-08 00778c20  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778c20
//
// 00778c20  a1ecf98b00           mov eax, dword ptr [0x8bf9ec]
// 00778c25  8b10                 mov edx, dword ptr [eax]
// 00778c27  83ec08               sub esp, 8
// 00778c2a  56                   push esi
// 00778c2b  50                   push eax
// 00778c2c  b9e8f98b00           mov ecx, 0x8bf9e8
// 00778c31  51                   push ecx
// 00778c32  52                   push edx
// 00778c33  8bf1                 mov esi, ecx
// 00778c35  56                   push esi
// 00778c36  8d442414             lea eax, [esp + 0x14]
// 00778c3a  50                   push eax
// 00778c3b  e8705ad5ff           call 0x4ce6b0
// 00778c40  8b0decf98b00         mov ecx, dword ptr [0x8bf9ec]
// 00778c46  51                   push ecx
// 00778c47  e81670ebff           call 0x62fc62
// 00778c4c  83c404               add esp, 4
// 00778c4f  33c0                 xor eax, eax
// 00778c51  a3ecf98b00           mov dword ptr [0x8bf9ec], eax
// 00778c56  a3f0f98b00           mov dword ptr [0x8bf9f0], eax
// 00778c5b  5e                   pop esi
// 00778c5c  83c408               add esp, 8
// 00778c5f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
