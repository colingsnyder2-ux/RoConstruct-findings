// roc 2009-06 005cd640  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cd640
//
// 005cd640  6aff                 push -1
// 005cd642  684e258600           push 0x86254e
// 005cd647  64a100000000         mov eax, dword ptr fs:[0]
// 005cd64d  50                   push eax
// 005cd64e  64892500000000       mov dword ptr fs:[0], esp
// 005cd655  51                   push ecx
// 005cd656  b801000000           mov eax, 1
// 005cd65b  8405f83ba400         test byte ptr [0xa43bf8], al
// 005cd661  752f                 jne 0x5cd692
// 005cd663  0905f83ba400         or dword ptr [0xa43bf8], eax
// 005cd669  8d442403             lea eax, [esp + 3]
// 005cd66d  50                   push eax
// 005cd66e  8d4c2407             lea ecx, [esp + 7]
// 005cd672  51                   push ecx
// 005cd673  b9d83ba400           mov ecx, 0xa43bd8
// 005cd678  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cd680  e8db0f1300           call 0x6fe660
// 005cd685  6890728900           push 0x897290
// 005cd68a  e86cc41400           call 0x719afb
// 005cd68f  83c404               add esp, 4
// 005cd692  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cd696  b8d83ba400           mov eax, 0xa43bd8
// 005cd69b  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd6a2  83c410               add esp, 0x10
// 005cd6a5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
