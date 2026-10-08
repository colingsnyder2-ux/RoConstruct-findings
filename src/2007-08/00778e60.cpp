// roc 2007-08 00778e60  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778e60
//
// 00778e60  a14cfa8b00           mov eax, dword ptr [0x8bfa4c]
// 00778e65  8b10                 mov edx, dword ptr [eax]
// 00778e67  83ec08               sub esp, 8
// 00778e6a  56                   push esi
// 00778e6b  50                   push eax
// 00778e6c  b948fa8b00           mov ecx, 0x8bfa48
// 00778e71  51                   push ecx
// 00778e72  52                   push edx
// 00778e73  8bf1                 mov esi, ecx
// 00778e75  56                   push esi
// 00778e76  8d442414             lea eax, [esp + 0x14]
// 00778e7a  50                   push eax
// 00778e7b  e830ccd5ff           call 0x4d5ab0
// 00778e80  8b0d4cfa8b00         mov ecx, dword ptr [0x8bfa4c]
// 00778e86  51                   push ecx
// 00778e87  e8d66debff           call 0x62fc62
// 00778e8c  83c404               add esp, 4
// 00778e8f  33c0                 xor eax, eax
// 00778e91  a34cfa8b00           mov dword ptr [0x8bfa4c], eax
// 00778e96  a350fa8b00           mov dword ptr [0x8bfa50], eax
// 00778e9b  5e                   pop esi
// 00778e9c  83c408               add esp, 8
// 00778e9f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
