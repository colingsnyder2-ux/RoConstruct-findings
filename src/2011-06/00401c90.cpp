// roc 2011-06 00401c90  unit: CAboutRobloxDialog  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401c90
//
// 00401c90  64a100000000         mov eax, dword ptr fs:[0]
// 00401c96  6aff                 push -1
// 00401c98  68becf9c00           push 0x9ccfbe
// 00401c9d  50                   push eax
// 00401c9e  64892500000000       mov dword ptr fs:[0], esp
// 00401ca5  f6056815cb0001       test byte ptr [0xcb1568], 1
// 00401cac  7550                 jne 0x401cfe
// 00401cae  830d6815cb0001       or dword ptr [0xcb1568], 1
// 00401cb5  b95c15cb00           mov ecx, 0xcb155c
// 00401cba  c744240800000000     mov dword ptr [esp + 8], 0
// 00401cc2  e8b9bb2200           call 0x62d880
// 00401cc7  a36015cb00           mov dword ptr [0xcb1560], eax
// 00401ccc  c6401501             mov byte ptr [eax + 0x15], 1
// 00401cd0  a16015cb00           mov eax, dword ptr [0xcb1560]
// 00401cd5  894004               mov dword ptr [eax + 4], eax
// 00401cd8  a16015cb00           mov eax, dword ptr [0xcb1560]
// 00401cdd  8900                 mov dword ptr [eax], eax
// 00401cdf  a16015cb00           mov eax, dword ptr [0xcb1560]
// 00401ce4  894008               mov dword ptr [eax + 8], eax
// 00401ce7  6860fea200           push 0xa2fe60
// 00401cec  c7056415cb0000000000 mov dword ptr [0xcb1564], 0
// 00401cf6  e862944000           call 0x80b15d
// 00401cfb  83c404               add esp, 4
// 00401cfe  8b0c24               mov ecx, dword ptr [esp]
// 00401d01  b85c15cb00           mov eax, 0xcb155c
// 00401d06  64890d00000000       mov dword ptr fs:[0], ecx
// 00401d0d  83c40c               add esp, 0xc
// 00401d10  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
