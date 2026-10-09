// roc 2009-12 00632270  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632270
//
// 00632270  6aff                 push -1
// 00632272  68feff9300           push 0x93fffe
// 00632277  64a100000000         mov eax, dword ptr fs:[0]
// 0063227d  50                   push eax
// 0063227e  64892500000000       mov dword ptr fs:[0], esp
// 00632285  51                   push ecx
// 00632286  b801000000           mov eax, 1
// 0063228b  84053c51b800         test byte ptr [0xb8513c], al
// 00632291  752f                 jne 0x6322c2
// 00632293  09053c51b800         or dword ptr [0xb8513c], eax
// 00632299  8d442403             lea eax, [esp + 3]
// 0063229d  50                   push eax
// 0063229e  8d4c2407             lea ecx, [esp + 7]
// 006322a2  51                   push ecx
// 006322a3  b91c51b800           mov ecx, 0xb8511c
// 006322a8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006322b0  e83bccf0ff           call 0x53eef0
// 006322b5  6860179800           push 0x981760
// 006322ba  e86a261c00           call 0x7f4929
// 006322bf  83c404               add esp, 4
// 006322c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006322c6  b81c51b800           mov eax, 0xb8511c
// 006322cb  64890d00000000       mov dword ptr fs:[0], ecx
// 006322d2  83c410               add esp, 0x10
// 006322d5  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
