// roc 2007-08 00778de0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778de0
//
// 00778de0  a134fa8b00           mov eax, dword ptr [0x8bfa34]
// 00778de5  8b10                 mov edx, dword ptr [eax]
// 00778de7  83ec08               sub esp, 8
// 00778dea  56                   push esi
// 00778deb  50                   push eax
// 00778dec  b930fa8b00           mov ecx, 0x8bfa30
// 00778df1  51                   push ecx
// 00778df2  52                   push edx
// 00778df3  8bf1                 mov esi, ecx
// 00778df5  56                   push esi
// 00778df6  8d442414             lea eax, [esp + 0x14]
// 00778dfa  50                   push eax
// 00778dfb  e8b058d5ff           call 0x4ce6b0
// 00778e00  8b0d34fa8b00         mov ecx, dword ptr [0x8bfa34]
// 00778e06  51                   push ecx
// 00778e07  e8566eebff           call 0x62fc62
// 00778e0c  83c404               add esp, 4
// 00778e0f  33c0                 xor eax, eax
// 00778e11  a334fa8b00           mov dword ptr [0x8bfa34], eax
// 00778e16  a338fa8b00           mov dword ptr [0x8bfa38], eax
// 00778e1b  5e                   pop esi
// 00778e1c  83c408               add esp, 8
// 00778e1f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
