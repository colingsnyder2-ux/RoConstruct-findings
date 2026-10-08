// roc 2007-08 00778f60  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778f60
//
// 00778f60  a11cfa8b00           mov eax, dword ptr [0x8bfa1c]
// 00778f65  8b10                 mov edx, dword ptr [eax]
// 00778f67  83ec08               sub esp, 8
// 00778f6a  56                   push esi
// 00778f6b  50                   push eax
// 00778f6c  b918fa8b00           mov ecx, 0x8bfa18
// 00778f71  51                   push ecx
// 00778f72  52                   push edx
// 00778f73  8bf1                 mov esi, ecx
// 00778f75  56                   push esi
// 00778f76  8d442414             lea eax, [esp + 0x14]
// 00778f7a  50                   push eax
// 00778f7b  e83057d5ff           call 0x4ce6b0
// 00778f80  8b0d1cfa8b00         mov ecx, dword ptr [0x8bfa1c]
// 00778f86  51                   push ecx
// 00778f87  e8d66cebff           call 0x62fc62
// 00778f8c  83c404               add esp, 4
// 00778f8f  33c0                 xor eax, eax
// 00778f91  a31cfa8b00           mov dword ptr [0x8bfa1c], eax
// 00778f96  a320fa8b00           mov dword ptr [0x8bfa20], eax
// 00778f9b  5e                   pop esi
// 00778f9c  83c408               add esp, 8
// 00778f9f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
