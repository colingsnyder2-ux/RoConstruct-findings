// roc 2010-06 005c9750  unit: RBX::Reflection::EnumDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c9750
//
// 005c9750  6aff                 push -1
// 005c9752  68ae5f9900           push 0x995fae
// 005c9757  64a100000000         mov eax, dword ptr fs:[0]
// 005c975d  50                   push eax
// 005c975e  64892500000000       mov dword ptr fs:[0], esp
// 005c9765  51                   push ecx
// 005c9766  b801000000           mov eax, 1
// 005c976b  84051888c100         test byte ptr [0xc18818], al
// 005c9771  752f                 jne 0x5c97a2
// 005c9773  09051888c100         or dword ptr [0xc18818], eax
// 005c9779  8d442403             lea eax, [esp + 3]
// 005c977d  50                   push eax
// 005c977e  8d4c2407             lea ecx, [esp + 7]
// 005c9782  51                   push ecx
// 005c9783  b9f887c100           mov ecx, 0xc187f8
// 005c9788  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c9790  e85b710900           call 0x6608f0
// 005c9795  68f01f9e00           push 0x9e1ff0
// 005c979a  e8c4f21d00           call 0x7a8a63
// 005c979f  83c404               add esp, 4
// 005c97a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c97a6  b8f887c100           mov eax, 0xc187f8
// 005c97ab  64890d00000000       mov dword ptr fs:[0], ecx
// 005c97b2  83c410               add esp, 0x10
// 005c97b5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
