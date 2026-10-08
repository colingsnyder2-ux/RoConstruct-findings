// roc 2007-08 00778fa0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778fa0
//
// 00778fa0  a158fa8b00           mov eax, dword ptr [0x8bfa58]
// 00778fa5  8b10                 mov edx, dword ptr [eax]
// 00778fa7  83ec08               sub esp, 8
// 00778faa  56                   push esi
// 00778fab  50                   push eax
// 00778fac  b954fa8b00           mov ecx, 0x8bfa54
// 00778fb1  51                   push ecx
// 00778fb2  52                   push edx
// 00778fb3  8bf1                 mov esi, ecx
// 00778fb5  56                   push esi
// 00778fb6  8d442414             lea eax, [esp + 0x14]
// 00778fba  50                   push eax
// 00778fbb  e8f0cad5ff           call 0x4d5ab0
// 00778fc0  8b0d58fa8b00         mov ecx, dword ptr [0x8bfa58]
// 00778fc6  51                   push ecx
// 00778fc7  e8966cebff           call 0x62fc62
// 00778fcc  83c404               add esp, 4
// 00778fcf  33c0                 xor eax, eax
// 00778fd1  a358fa8b00           mov dword ptr [0x8bfa58], eax
// 00778fd6  a35cfa8b00           mov dword ptr [0x8bfa5c], eax
// 00778fdb  5e                   pop esi
// 00778fdc  83c408               add esp, 8
// 00778fdf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
