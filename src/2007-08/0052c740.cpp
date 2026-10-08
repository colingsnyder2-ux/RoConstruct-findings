// roc 2007-08 0052c740  unit: seg_00520000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c740
//
// 0052c740  64a100000000         mov eax, dword ptr fs:[0]
// 0052c746  6aff                 push -1
// 0052c748  683e027500           push 0x75023e
// 0052c74d  50                   push eax
// 0052c74e  64892500000000       mov dword ptr fs:[0], esp
// 0052c755  f605700c8c0001       test byte ptr [0x8c0c70], 1
// 0052c75c  7550                 jne 0x52c7ae
// 0052c75e  830d700c8c0001       or dword ptr [0x8c0c70], 1
// 0052c765  b9640c8c00           mov ecx, 0x8c0c64
// 0052c76a  c744240800000000     mov dword ptr [esp + 8], 0
// 0052c772  e8396e0500           call 0x5835b0
// 0052c777  a3680c8c00           mov dword ptr [0x8c0c68], eax
// 0052c77c  c6401501             mov byte ptr [eax + 0x15], 1
// 0052c780  a1680c8c00           mov eax, dword ptr [0x8c0c68]
// 0052c785  894004               mov dword ptr [eax + 4], eax
// 0052c788  a1680c8c00           mov eax, dword ptr [0x8c0c68]
// 0052c78d  8900                 mov dword ptr [eax], eax
// 0052c78f  a1680c8c00           mov eax, dword ptr [0x8c0c68]
// 0052c794  894008               mov dword ptr [eax + 8], eax
// 0052c797  6800937700           push 0x779300
// 0052c79c  c7056c0c8c0000000000 mov dword ptr [0x8c0c6c], 0
// 0052c7a6  e878451000           call 0x630d23
// 0052c7ab  83c404               add esp, 4
// 0052c7ae  8b0c24               mov ecx, dword ptr [esp]
// 0052c7b1  b8640c8c00           mov eax, 0x8c0c64
// 0052c7b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c7bd  83c40c               add esp, 0xc
// 0052c7c0  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
