// roc 2007-08 00777430  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777430
//
// 00777430  a1f8b18b00           mov eax, dword ptr [0x8bb1f8]
// 00777435  8b10                 mov edx, dword ptr [eax]
// 00777437  83ec08               sub esp, 8
// 0077743a  56                   push esi
// 0077743b  50                   push eax
// 0077743c  b9f4b18b00           mov ecx, 0x8bb1f4
// 00777441  51                   push ecx
// 00777442  52                   push edx
// 00777443  8bf1                 mov esi, ecx
// 00777445  56                   push esi
// 00777446  8d442414             lea eax, [esp + 0x14]
// 0077744a  50                   push eax
// 0077744b  e8707bcdff           call 0x44efc0
// 00777450  8b0df8b18b00         mov ecx, dword ptr [0x8bb1f8]
// 00777456  51                   push ecx
// 00777457  e80688ebff           call 0x62fc62
// 0077745c  83c404               add esp, 4
// 0077745f  33c0                 xor eax, eax
// 00777461  a3f8b18b00           mov dword ptr [0x8bb1f8], eax
// 00777466  a3fcb18b00           mov dword ptr [0x8bb1fc], eax
// 0077746b  5e                   pop esi
// 0077746c  83c408               add esp, 8
// 0077746f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
