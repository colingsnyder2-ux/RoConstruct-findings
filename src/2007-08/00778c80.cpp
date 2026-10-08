// roc 2007-08 00778c80  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778c80
//
// 00778c80  a1e0f98b00           mov eax, dword ptr [0x8bf9e0]
// 00778c85  8b10                 mov edx, dword ptr [eax]
// 00778c87  83ec08               sub esp, 8
// 00778c8a  56                   push esi
// 00778c8b  50                   push eax
// 00778c8c  b9dcf98b00           mov ecx, 0x8bf9dc
// 00778c91  51                   push ecx
// 00778c92  52                   push edx
// 00778c93  8bf1                 mov esi, ecx
// 00778c95  56                   push esi
// 00778c96  8d442414             lea eax, [esp + 0x14]
// 00778c9a  50                   push eax
// 00778c9b  e8105ad5ff           call 0x4ce6b0
// 00778ca0  8b0de0f98b00         mov ecx, dword ptr [0x8bf9e0]
// 00778ca6  51                   push ecx
// 00778ca7  e8b66febff           call 0x62fc62
// 00778cac  83c404               add esp, 4
// 00778caf  33c0                 xor eax, eax
// 00778cb1  a3e0f98b00           mov dword ptr [0x8bf9e0], eax
// 00778cb6  a3e4f98b00           mov dword ptr [0x8bf9e4], eax
// 00778cbb  5e                   pop esi
// 00778cbc  83c408               add esp, 8
// 00778cbf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
