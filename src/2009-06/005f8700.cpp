// roc 2009-06 005f8700  unit: RBX::Reflection::EnumDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8700
//
// 005f8700  6aff                 push -1
// 005f8702  685e618600           push 0x86615e
// 005f8707  64a100000000         mov eax, dword ptr fs:[0]
// 005f870d  50                   push eax
// 005f870e  64892500000000       mov dword ptr fs:[0], esp
// 005f8715  51                   push ecx
// 005f8716  b801000000           mov eax, 1
// 005f871b  8405f4a7a400         test byte ptr [0xa4a7f4], al
// 005f8721  752f                 jne 0x5f8752
// 005f8723  0905f4a7a400         or dword ptr [0xa4a7f4], eax
// 005f8729  8d442403             lea eax, [esp + 3]
// 005f872d  50                   push eax
// 005f872e  8d4c2407             lea ecx, [esp + 7]
// 005f8732  51                   push ecx
// 005f8733  b9d4a7a400           mov ecx, 0xa4a7d4
// 005f8738  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f8740  e89bfbffff           call 0x5f82e0
// 005f8745  6810948900           push 0x899410
// 005f874a  e8ac131200           call 0x719afb
// 005f874f  83c404               add esp, 4
// 005f8752  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f8756  b8d4a7a400           mov eax, 0xa4a7d4
// 005f875b  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8762  83c410               add esp, 0x10
// 005f8765  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
