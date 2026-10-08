// roc 2007-08 00777150  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777150
//
// 00777150  a1d4ae8b00           mov eax, dword ptr [0x8baed4]
// 00777155  8b10                 mov edx, dword ptr [eax]
// 00777157  83ec08               sub esp, 8
// 0077715a  56                   push esi
// 0077715b  50                   push eax
// 0077715c  b9d0ae8b00           mov ecx, 0x8baed0
// 00777161  51                   push ecx
// 00777162  52                   push edx
// 00777163  8bf1                 mov esi, ecx
// 00777165  56                   push esi
// 00777166  8d442414             lea eax, [esp + 0x14]
// 0077716a  50                   push eax
// 0077716b  e8507ecdff           call 0x44efc0
// 00777170  8b0dd4ae8b00         mov ecx, dword ptr [0x8baed4]
// 00777176  51                   push ecx
// 00777177  e8e68aebff           call 0x62fc62
// 0077717c  83c404               add esp, 4
// 0077717f  33c0                 xor eax, eax
// 00777181  a3d4ae8b00           mov dword ptr [0x8baed4], eax
// 00777186  a3d8ae8b00           mov dword ptr [0x8baed8], eax
// 0077718b  5e                   pop esi
// 0077718c  83c408               add esp, 8
// 0077718f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
