// roc 2008-06 0056c520  unit: RBX::Reflection::EnumDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c520
//
// 0056c520  6aff                 push -1
// 0056c522  686efc7c00           push 0x7cfc6e
// 0056c527  64a100000000         mov eax, dword ptr fs:[0]
// 0056c52d  50                   push eax
// 0056c52e  64892500000000       mov dword ptr fs:[0], esp
// 0056c535  51                   push ecx
// 0056c536  b801000000           mov eax, 1
// 0056c53b  8405544b9700         test byte ptr [0x974b54], al
// 0056c541  752f                 jne 0x56c572
// 0056c543  0905544b9700         or dword ptr [0x974b54], eax
// 0056c549  8d442403             lea eax, [esp + 3]
// 0056c54d  50                   push eax
// 0056c54e  8d4c2407             lea ecx, [esp + 7]
// 0056c552  51                   push ecx
// 0056c553  b9344b9700           mov ecx, 0x974b34
// 0056c558  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056c560  e8ab9bedff           call 0x446110
// 0056c565  6800d27f00           push 0x7fd200
// 0056c56a  e840521300           call 0x6a17af
// 0056c56f  83c404               add esp, 4
// 0056c572  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056c576  b8344b9700           mov eax, 0x974b34
// 0056c57b  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c582  83c410               add esp, 0x10
// 0056c585  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
