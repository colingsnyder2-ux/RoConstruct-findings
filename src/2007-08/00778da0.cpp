// roc 2007-08 00778da0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778da0
//
// 00778da0  a128fa8b00           mov eax, dword ptr [0x8bfa28]
// 00778da5  8b10                 mov edx, dword ptr [eax]
// 00778da7  83ec08               sub esp, 8
// 00778daa  56                   push esi
// 00778dab  50                   push eax
// 00778dac  b924fa8b00           mov ecx, 0x8bfa24
// 00778db1  51                   push ecx
// 00778db2  52                   push edx
// 00778db3  8bf1                 mov esi, ecx
// 00778db5  56                   push esi
// 00778db6  8d442414             lea eax, [esp + 0x14]
// 00778dba  50                   push eax
// 00778dbb  e8f0ccd5ff           call 0x4d5ab0
// 00778dc0  8b0d28fa8b00         mov ecx, dword ptr [0x8bfa28]
// 00778dc6  51                   push ecx
// 00778dc7  e8966eebff           call 0x62fc62
// 00778dcc  83c404               add esp, 4
// 00778dcf  33c0                 xor eax, eax
// 00778dd1  a328fa8b00           mov dword ptr [0x8bfa28], eax
// 00778dd6  a32cfa8b00           mov dword ptr [0x8bfa2c], eax
// 00778ddb  5e                   pop esi
// 00778ddc  83c408               add esp, 8
// 00778ddf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
