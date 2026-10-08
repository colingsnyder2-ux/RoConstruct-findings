// roc 2011-06 005e3c80  unit: RBX::Reflection::EnumDescriptor  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e3c80
//
// 005e3c80  64a100000000         mov eax, dword ptr fs:[0]
// 005e3c86  6aff                 push -1
// 005e3c88  689e5e9e00           push 0x9e5e9e
// 005e3c8d  50                   push eax
// 005e3c8e  64892500000000       mov dword ptr fs:[0], esp
// 005e3c95  f605b4aacc0001       test byte ptr [0xccaab4], 1
// 005e3c9c  7550                 jne 0x5e3cee
// 005e3c9e  830db4aacc0001       or dword ptr [0xccaab4], 1
// 005e3ca5  b9a8aacc00           mov ecx, 0xccaaa8
// 005e3caa  c744240800000000     mov dword ptr [esp + 8], 0
// 005e3cb2  e8c99b0400           call 0x62d880
// 005e3cb7  a3acaacc00           mov dword ptr [0xccaaac], eax
// 005e3cbc  c6401501             mov byte ptr [eax + 0x15], 1
// 005e3cc0  a1acaacc00           mov eax, dword ptr [0xccaaac]
// 005e3cc5  894004               mov dword ptr [eax + 4], eax
// 005e3cc8  a1acaacc00           mov eax, dword ptr [0xccaaac]
// 005e3ccd  8900                 mov dword ptr [eax], eax
// 005e3ccf  a1acaacc00           mov eax, dword ptr [0xccaaac]
// 005e3cd4  894008               mov dword ptr [eax + 8], eax
// 005e3cd7  68a093a300           push 0xa393a0
// 005e3cdc  c705b0aacc0000000000 mov dword ptr [0xccaab0], 0
// 005e3ce6  e872742200           call 0x80b15d
// 005e3ceb  83c404               add esp, 4
// 005e3cee  8b0c24               mov ecx, dword ptr [esp]
// 005e3cf1  b8a8aacc00           mov eax, 0xccaaa8
// 005e3cf6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3cfd  83c40c               add esp, 0xc
// 005e3d00  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
