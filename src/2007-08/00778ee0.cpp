// roc 2007-08 00778ee0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778ee0
//
// 00778ee0  a164fa8b00           mov eax, dword ptr [0x8bfa64]
// 00778ee5  8b10                 mov edx, dword ptr [eax]
// 00778ee7  83ec08               sub esp, 8
// 00778eea  56                   push esi
// 00778eeb  50                   push eax
// 00778eec  b960fa8b00           mov ecx, 0x8bfa60
// 00778ef1  51                   push ecx
// 00778ef2  52                   push edx
// 00778ef3  8bf1                 mov esi, ecx
// 00778ef5  56                   push esi
// 00778ef6  8d442414             lea eax, [esp + 0x14]
// 00778efa  50                   push eax
// 00778efb  e8b057d5ff           call 0x4ce6b0
// 00778f00  8b0d64fa8b00         mov ecx, dword ptr [0x8bfa64]
// 00778f06  51                   push ecx
// 00778f07  e8566debff           call 0x62fc62
// 00778f0c  83c404               add esp, 4
// 00778f0f  33c0                 xor eax, eax
// 00778f11  a364fa8b00           mov dword ptr [0x8bfa64], eax
// 00778f16  a368fa8b00           mov dword ptr [0x8bfa68], eax
// 00778f1b  5e                   pop esi
// 00778f1c  83c408               add esp, 8
// 00778f1f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
