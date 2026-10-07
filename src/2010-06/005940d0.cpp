// roc 2010-06 005940d0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005940d0
//
// 005940d0  6aff                 push -1
// 005940d2  688e1c9900           push 0x991c8e
// 005940d7  64a100000000         mov eax, dword ptr fs:[0]
// 005940dd  50                   push eax
// 005940de  64892500000000       mov dword ptr fs:[0], esp
// 005940e5  51                   push ecx
// 005940e6  b801000000           mov eax, 1
// 005940eb  8405b4b2c000         test byte ptr [0xc0b2b4], al
// 005940f1  752f                 jne 0x594122
// 005940f3  0905b4b2c000         or dword ptr [0xc0b2b4], eax
// 005940f9  8d442403             lea eax, [esp + 3]
// 005940fd  50                   push eax
// 005940fe  8d4c2407             lea ecx, [esp + 7]
// 00594102  51                   push ecx
// 00594103  b994b2c000           mov ecx, 0xc0b294
// 00594108  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00594110  e8fb473300           call 0x8c8910
// 00594115  68e0e99d00           push 0x9de9e0
// 0059411a  e844492100           call 0x7a8a63
// 0059411f  83c404               add esp, 4
// 00594122  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00594126  b894b2c000           mov eax, 0xc0b294
// 0059412b  64890d00000000       mov dword ptr fs:[0], ecx
// 00594132  83c410               add esp, 0x10
// 00594135  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
