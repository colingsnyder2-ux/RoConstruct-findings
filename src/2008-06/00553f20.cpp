// roc 2008-06 00553f20  unit: RBX::RenderBase::AggregateChunk  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553f20
//
// 00553f20  6aff                 push -1
// 00553f22  681edc7c00           push 0x7cdc1e
// 00553f27  64a100000000         mov eax, dword ptr fs:[0]
// 00553f2d  50                   push eax
// 00553f2e  64892500000000       mov dword ptr fs:[0], esp
// 00553f35  51                   push ecx
// 00553f36  b801000000           mov eax, 1
// 00553f3b  8405283a9700         test byte ptr [0x973a28], al
// 00553f41  752f                 jne 0x553f72
// 00553f43  0905283a9700         or dword ptr [0x973a28], eax
// 00553f49  8d442403             lea eax, [esp + 3]
// 00553f4d  50                   push eax
// 00553f4e  8d4c2407             lea ecx, [esp + 7]
// 00553f52  51                   push ecx
// 00553f53  b9083a9700           mov ecx, 0x973a08
// 00553f58  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00553f60  e8cb5b1400           call 0x699b30
// 00553f65  6830c77f00           push 0x7fc730
// 00553f6a  e840d81400           call 0x6a17af
// 00553f6f  83c404               add esp, 4
// 00553f72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00553f76  b8083a9700           mov eax, 0x973a08
// 00553f7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00553f82  83c410               add esp, 0x10
// 00553f85  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
