// roc 2010-06 00401970  unit: CAboutRobloxDialog  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00401970
//
// 00401970  6aff                 push -1
// 00401972  68ded89700           push 0x97d8de
// 00401977  64a100000000         mov eax, dword ptr fs:[0]
// 0040197d  50                   push eax
// 0040197e  64892500000000       mov dword ptr fs:[0], esp
// 00401985  51                   push ecx
// 00401986  b801000000           mov eax, 1
// 0040198b  84055cfabf00         test byte ptr [0xbffa5c], al
// 00401991  752f                 jne 0x4019c2
// 00401993  09055cfabf00         or dword ptr [0xbffa5c], eax
// 00401999  8d442403             lea eax, [esp + 3]
// 0040199d  50                   push eax
// 0040199e  8d4c2407             lea ecx, [esp + 7]
// 004019a2  51                   push ecx
// 004019a3  b93cfabf00           mov ecx, 0xbffa3c
// 004019a8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004019b0  e83bef2500           call 0x6608f0
// 004019b5  6840a89d00           push 0x9da840
// 004019ba  e8a4703a00           call 0x7a8a63
// 004019bf  83c404               add esp, 4
// 004019c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004019c6  b83cfabf00           mov eax, 0xbffa3c
// 004019cb  64890d00000000       mov dword ptr fs:[0], ecx
// 004019d2  83c410               add esp, 0x10
// 004019d5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
