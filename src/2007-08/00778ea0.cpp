// roc 2007-08 00778ea0  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778ea0
//
// 00778ea0  a110fa8b00           mov eax, dword ptr [0x8bfa10]
// 00778ea5  8b10                 mov edx, dword ptr [eax]
// 00778ea7  83ec08               sub esp, 8
// 00778eaa  56                   push esi
// 00778eab  50                   push eax
// 00778eac  b90cfa8b00           mov ecx, 0x8bfa0c
// 00778eb1  51                   push ecx
// 00778eb2  52                   push edx
// 00778eb3  8bf1                 mov esi, ecx
// 00778eb5  56                   push esi
// 00778eb6  8d442414             lea eax, [esp + 0x14]
// 00778eba  50                   push eax
// 00778ebb  e8f0cbd5ff           call 0x4d5ab0
// 00778ec0  8b0d10fa8b00         mov ecx, dword ptr [0x8bfa10]
// 00778ec6  51                   push ecx
// 00778ec7  e8966debff           call 0x62fc62
// 00778ecc  83c404               add esp, 4
// 00778ecf  33c0                 xor eax, eax
// 00778ed1  a310fa8b00           mov dword ptr [0x8bfa10], eax
// 00778ed6  a314fa8b00           mov dword ptr [0x8bfa14], eax
// 00778edb  5e                   pop esi
// 00778edc  83c408               add esp, 8
// 00778edf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
