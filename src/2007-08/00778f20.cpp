// roc 2007-08 00778f20  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778f20
//
// 00778f20  a140fa8b00           mov eax, dword ptr [0x8bfa40]
// 00778f25  8b10                 mov edx, dword ptr [eax]
// 00778f27  83ec08               sub esp, 8
// 00778f2a  56                   push esi
// 00778f2b  50                   push eax
// 00778f2c  b93cfa8b00           mov ecx, 0x8bfa3c
// 00778f31  51                   push ecx
// 00778f32  52                   push edx
// 00778f33  8bf1                 mov esi, ecx
// 00778f35  56                   push esi
// 00778f36  8d442414             lea eax, [esp + 0x14]
// 00778f3a  50                   push eax
// 00778f3b  e870cbd5ff           call 0x4d5ab0
// 00778f40  8b0d40fa8b00         mov ecx, dword ptr [0x8bfa40]
// 00778f46  51                   push ecx
// 00778f47  e8166debff           call 0x62fc62
// 00778f4c  83c404               add esp, 4
// 00778f4f  33c0                 xor eax, eax
// 00778f51  a340fa8b00           mov dword ptr [0x8bfa40], eax
// 00778f56  a344fa8b00           mov dword ptr [0x8bfa44], eax
// 00778f5b  5e                   pop esi
// 00778f5c  83c408               add esp, 8
// 00778f5f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
