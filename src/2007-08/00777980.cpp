// roc 2007-08 00777980  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777980
//
// 00777980  a134b98b00           mov eax, dword ptr [0x8bb934]
// 00777985  8b10                 mov edx, dword ptr [eax]
// 00777987  83ec08               sub esp, 8
// 0077798a  56                   push esi
// 0077798b  50                   push eax
// 0077798c  b930b98b00           mov ecx, 0x8bb930
// 00777991  51                   push ecx
// 00777992  52                   push edx
// 00777993  8bf1                 mov esi, ecx
// 00777995  56                   push esi
// 00777996  8d442414             lea eax, [esp + 0x14]
// 0077799a  50                   push eax
// 0077799b  e82076cdff           call 0x44efc0
// 007779a0  8b0d34b98b00         mov ecx, dword ptr [0x8bb934]
// 007779a6  51                   push ecx
// 007779a7  e8b682ebff           call 0x62fc62
// 007779ac  83c404               add esp, 4
// 007779af  33c0                 xor eax, eax
// 007779b1  a334b98b00           mov dword ptr [0x8bb934], eax
// 007779b6  a338b98b00           mov dword ptr [0x8bb938], eax
// 007779bb  5e                   pop esi
// 007779bc  83c408               add esp, 8
// 007779bf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
