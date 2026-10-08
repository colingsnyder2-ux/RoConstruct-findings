// roc 2012-06 004019d0  unit: CAboutRobloxDialog  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004019d0
//
// 004019d0  64a100000000         mov eax, dword ptr fs:[0]
// 004019d6  6aff                 push -1
// 004019d8  688e9fa900           push 0xa99f8e
// 004019dd  50                   push eax
// 004019de  64892500000000       mov dword ptr fs:[0], esp
// 004019e5  f6058063e10001       test byte ptr [0xe16380], 1
// 004019ec  7550                 jne 0x401a3e
// 004019ee  830d8063e10001       or dword ptr [0xe16380], 1
// 004019f5  b97463e100           mov ecx, 0xe16374
// 004019fa  c744240800000000     mov dword ptr [esp + 8], 0
// 00401a02  e8e9b73c00           call 0x7cd1f0
// 00401a07  a37863e100           mov dword ptr [0xe16378], eax
// 00401a0c  c6401501             mov byte ptr [eax + 0x15], 1
// 00401a10  a17863e100           mov eax, dword ptr [0xe16378]
// 00401a15  894004               mov dword ptr [eax + 4], eax
// 00401a18  a17863e100           mov eax, dword ptr [0xe16378]
// 00401a1d  8900                 mov dword ptr [eax], eax
// 00401a1f  a17863e100           mov eax, dword ptr [0xe16378]
// 00401a24  894008               mov dword ptr [eax + 8], eax
// 00401a27  68b013b100           push 0xb113b0
// 00401a2c  c7057c63e10000000000 mov dword ptr [0xe1637c], 0
// 00401a36  e8ba175800           call 0x9831f5
// 00401a3b  83c404               add esp, 4
// 00401a3e  8b0c24               mov ecx, dword ptr [esp]
// 00401a41  b87463e100           mov eax, 0xe16374
// 00401a46  64890d00000000       mov dword ptr fs:[0], ecx
// 00401a4d  83c40c               add esp, 0xc
// 00401a50  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
