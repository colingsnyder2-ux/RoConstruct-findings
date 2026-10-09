// roc 2009-12 00401980  unit: CAboutRobloxDialog  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401980
//
// 00401980  6aff                 push -1
// 00401982  68ae6f9200           push 0x926fae
// 00401987  64a100000000         mov eax, dword ptr fs:[0]
// 0040198d  50                   push eax
// 0040198e  64892500000000       mov dword ptr fs:[0], esp
// 00401995  51                   push ecx
// 00401996  b801000000           mov eax, 1
// 0040199b  8405ac94b700         test byte ptr [0xb794ac], al
// 004019a1  752f                 jne 0x4019d2
// 004019a3  0905ac94b700         or dword ptr [0xb794ac], eax
// 004019a9  8d442403             lea eax, [esp + 3]
// 004019ad  50                   push eax
// 004019ae  8d4c2407             lea ecx, [esp + 7]
// 004019b2  51                   push ecx
// 004019b3  b98c94b700           mov ecx, 0xb7948c
// 004019b8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004019c0  e82b761200           call 0x528ff0
// 004019c5  6820d69700           push 0x97d620
// 004019ca  e85a2f3f00           call 0x7f4929
// 004019cf  83c404               add esp, 4
// 004019d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004019d6  b88c94b700           mov eax, 0xb7948c
// 004019db  64890d00000000       mov dword ptr fs:[0], ecx
// 004019e2  83c410               add esp, 0x10
// 004019e5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
