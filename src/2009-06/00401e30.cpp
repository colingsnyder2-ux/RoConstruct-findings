// roc 2009-06 00401e30  unit: CAboutRobloxDialog  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00401e30
//
// 00401e30  6aff                 push -1
// 00401e32  684eca8400           push 0x84ca4e
// 00401e37  64a100000000         mov eax, dword ptr fs:[0]
// 00401e3d  50                   push eax
// 00401e3e  64892500000000       mov dword ptr fs:[0], esp
// 00401e45  51                   push ecx
// 00401e46  b801000000           mov eax, 1
// 00401e4b  8405c496a300         test byte ptr [0xa396c4], al
// 00401e51  752f                 jne 0x401e82
// 00401e53  0905c496a300         or dword ptr [0xa396c4], eax
// 00401e59  8d442403             lea eax, [esp + 3]
// 00401e5d  50                   push eax
// 00401e5e  8d4c2407             lea ecx, [esp + 7]
// 00401e62  51                   push ecx
// 00401e63  b9a496a300           mov ecx, 0xa396a4
// 00401e68  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00401e70  e86b641f00           call 0x5f82e0
// 00401e75  6820398900           push 0x893920
// 00401e7a  e87c7c3100           call 0x719afb
// 00401e7f  83c404               add esp, 4
// 00401e82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00401e86  b8a496a300           mov eax, 0xa396a4
// 00401e8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00401e92  83c410               add esp, 0x10
// 00401e95  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
