// roc 2007-08 00777110  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777110
//
// 00777110  a134ae8b00           mov eax, dword ptr [0x8bae34]
// 00777115  8b10                 mov edx, dword ptr [eax]
// 00777117  83ec08               sub esp, 8
// 0077711a  56                   push esi
// 0077711b  50                   push eax
// 0077711c  b930ae8b00           mov ecx, 0x8bae30
// 00777121  51                   push ecx
// 00777122  52                   push edx
// 00777123  8bf1                 mov esi, ecx
// 00777125  56                   push esi
// 00777126  8d442414             lea eax, [esp + 0x14]
// 0077712a  50                   push eax
// 0077712b  e8902cccff           call 0x439dc0
// 00777130  8b0d34ae8b00         mov ecx, dword ptr [0x8bae34]
// 00777136  51                   push ecx
// 00777137  e8268bebff           call 0x62fc62
// 0077713c  83c404               add esp, 4
// 0077713f  33c0                 xor eax, eax
// 00777141  a334ae8b00           mov dword ptr [0x8bae34], eax
// 00777146  a338ae8b00           mov dword ptr [0x8bae38], eax
// 0077714b  5e                   pop esi
// 0077714c  83c408               add esp, 8
// 0077714f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
