// roc 2007-08 00778fe0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778fe0
//
// 00778fe0  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 00778fe5  8b10                 mov edx, dword ptr [eax]
// 00778fe7  83ec08               sub esp, 8
// 00778fea  56                   push esi
// 00778feb  50                   push eax
// 00778fec  b978fa8b00           mov ecx, 0x8bfa78
// 00778ff1  51                   push ecx
// 00778ff2  52                   push edx
// 00778ff3  8bf1                 mov esi, ecx
// 00778ff5  56                   push esi
// 00778ff6  8d442414             lea eax, [esp + 0x14]
// 00778ffa  50                   push eax
// 00778ffb  e87054d6ff           call 0x4de470
// 00779000  8b0d7cfa8b00         mov ecx, dword ptr [0x8bfa7c]
// 00779006  51                   push ecx
// 00779007  e8566cebff           call 0x62fc62
// 0077900c  83c404               add esp, 4
// 0077900f  33c0                 xor eax, eax
// 00779011  a37cfa8b00           mov dword ptr [0x8bfa7c], eax
// 00779016  a380fa8b00           mov dword ptr [0x8bfa80], eax
// 0077901b  5e                   pop esi
// 0077901c  83c408               add esp, 8
// 0077901f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
