// roc 2007-08 00779300  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779300
//
// 00779300  a1680c8c00           mov eax, dword ptr [0x8c0c68]
// 00779305  8b10                 mov edx, dword ptr [eax]
// 00779307  83ec08               sub esp, 8
// 0077930a  56                   push esi
// 0077930b  50                   push eax
// 0077930c  b9640c8c00           mov ecx, 0x8c0c64
// 00779311  51                   push ecx
// 00779312  52                   push edx
// 00779313  8bf1                 mov esi, ecx
// 00779315  56                   push esi
// 00779316  8d442414             lea eax, [esp + 0x14]
// 0077931a  50                   push eax
// 0077931b  e810e1e3ff           call 0x5b7430
// 00779320  8b0d680c8c00         mov ecx, dword ptr [0x8c0c68]
// 00779326  51                   push ecx
// 00779327  e83669ebff           call 0x62fc62
// 0077932c  83c404               add esp, 4
// 0077932f  33c0                 xor eax, eax
// 00779331  a3680c8c00           mov dword ptr [0x8c0c68], eax
// 00779336  a36c0c8c00           mov dword ptr [0x8c0c6c], eax
// 0077933b  5e                   pop esi
// 0077933c  83c408               add esp, 8
// 0077933f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??__Fcreators@?1??getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
