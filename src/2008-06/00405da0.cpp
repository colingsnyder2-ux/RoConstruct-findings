// roc 2008-06 00405da0  unit: VCWorkspace::?$CComObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405da0
//
// 00405da0  6aff                 push -1
// 00405da2  68becd7b00           push 0x7bcdbe
// 00405da7  64a100000000         mov eax, dword ptr fs:[0]
// 00405dad  50                   push eax
// 00405dae  64892500000000       mov dword ptr fs:[0], esp
// 00405db5  51                   push ecx
// 00405db6  b801000000           mov eax, 1
// 00405dbb  8405d4c29600         test byte ptr [0x96c2d4], al
// 00405dc1  752f                 jne 0x405df2
// 00405dc3  0905d4c29600         or dword ptr [0x96c2d4], eax
// 00405dc9  8d442403             lea eax, [esp + 3]
// 00405dcd  50                   push eax
// 00405dce  8d4c2407             lea ecx, [esp + 7]
// 00405dd2  51                   push ecx
// 00405dd3  b9b4c29600           mov ecx, 0x96c2b4
// 00405dd8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00405de0  e82b030400           call 0x446110
// 00405de5  68a0a07f00           push 0x7fa0a0
// 00405dea  e8c0b92900           call 0x6a17af
// 00405def  83c404               add esp, 4
// 00405df2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00405df6  b8b4c29600           mov eax, 0x96c2b4
// 00405dfb  64890d00000000       mov dword ptr fs:[0], ecx
// 00405e02  83c410               add esp, 0x10
// 00405e05  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
