// roc 2011-06 005e3d10  unit: RBX::Reflection::EnumDescriptor  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e3d10
//
// 005e3d10  64a100000000         mov eax, dword ptr fs:[0]
// 005e3d16  6aff                 push -1
// 005e3d18  68be5e9e00           push 0x9e5ebe
// 005e3d1d  50                   push eax
// 005e3d1e  64892500000000       mov dword ptr fs:[0], esp
// 005e3d25  f605c4aacc0001       test byte ptr [0xccaac4], 1
// 005e3d2c  7550                 jne 0x5e3d7e
// 005e3d2e  830dc4aacc0001       or dword ptr [0xccaac4], 1
// 005e3d35  b9b8aacc00           mov ecx, 0xccaab8
// 005e3d3a  c744240800000000     mov dword ptr [esp + 8], 0
// 005e3d42  e8399b0400           call 0x62d880
// 005e3d47  a3bcaacc00           mov dword ptr [0xccaabc], eax
// 005e3d4c  c6401501             mov byte ptr [eax + 0x15], 1
// 005e3d50  a1bcaacc00           mov eax, dword ptr [0xccaabc]
// 005e3d55  894004               mov dword ptr [eax + 4], eax
// 005e3d58  a1bcaacc00           mov eax, dword ptr [0xccaabc]
// 005e3d5d  8900                 mov dword ptr [eax], eax
// 005e3d5f  a1bcaacc00           mov eax, dword ptr [0xccaabc]
// 005e3d64  894008               mov dword ptr [eax + 8], eax
// 005e3d67  68e093a300           push 0xa393e0
// 005e3d6c  c705c0aacc0000000000 mov dword ptr [0xccaac0], 0
// 005e3d76  e8e2732200           call 0x80b15d
// 005e3d7b  83c404               add esp, 4
// 005e3d7e  8b0c24               mov ecx, dword ptr [esp]
// 005e3d81  b8b8aacc00           mov eax, 0xccaab8
// 005e3d86  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3d8d  83c40c               add esp, 0xc
// 005e3d90  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
