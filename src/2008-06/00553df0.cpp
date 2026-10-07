// roc 2008-06 00553df0  unit: RBX::RenderBase::AggregateChunk  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553df0
//
// 00553df0  6aff                 push -1
// 00553df2  68dedb7c00           push 0x7cdbde
// 00553df7  64a100000000         mov eax, dword ptr fs:[0]
// 00553dfd  50                   push eax
// 00553dfe  64892500000000       mov dword ptr fs:[0], esp
// 00553e05  51                   push ecx
// 00553e06  b801000000           mov eax, 1
// 00553e0b  8405043a9700         test byte ptr [0x973a04], al
// 00553e11  752f                 jne 0x553e42
// 00553e13  0905043a9700         or dword ptr [0x973a04], eax
// 00553e19  8d442403             lea eax, [esp + 3]
// 00553e1d  50                   push eax
// 00553e1e  8d4c2407             lea ecx, [esp + 7]
// 00553e22  51                   push ecx
// 00553e23  b9e4399700           mov ecx, 0x9739e4
// 00553e28  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00553e30  e8db22efff           call 0x446110
// 00553e35  6820c77f00           push 0x7fc720
// 00553e3a  e870d91400           call 0x6a17af
// 00553e3f  83c404               add esp, 4
// 00553e42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00553e46  b8e4399700           mov eax, 0x9739e4
// 00553e4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00553e52  83c410               add esp, 0x10
// 00553e55  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
