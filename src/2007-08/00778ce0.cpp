// roc 2007-08 00778ce0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778ce0
//
// 00778ce0  a1f8f98b00           mov eax, dword ptr [0x8bf9f8]
// 00778ce5  8b10                 mov edx, dword ptr [eax]
// 00778ce7  83ec08               sub esp, 8
// 00778cea  56                   push esi
// 00778ceb  50                   push eax
// 00778cec  b9f4f98b00           mov ecx, 0x8bf9f4
// 00778cf1  51                   push ecx
// 00778cf2  52                   push edx
// 00778cf3  8bf1                 mov esi, ecx
// 00778cf5  56                   push esi
// 00778cf6  8d442414             lea eax, [esp + 0x14]
// 00778cfa  50                   push eax
// 00778cfb  e8b059d5ff           call 0x4ce6b0
// 00778d00  8b0df8f98b00         mov ecx, dword ptr [0x8bf9f8]
// 00778d06  51                   push ecx
// 00778d07  e8566febff           call 0x62fc62
// 00778d0c  83c404               add esp, 4
// 00778d0f  33c0                 xor eax, eax
// 00778d11  a3f8f98b00           mov dword ptr [0x8bf9f8], eax
// 00778d16  a3fcf98b00           mov dword ptr [0x8bf9fc], eax
// 00778d1b  5e                   pop esi
// 00778d1c  83c408               add esp, 8
// 00778d1f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
