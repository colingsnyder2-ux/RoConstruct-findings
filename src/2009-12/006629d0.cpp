// roc 2009-12 006629d0  unit: RBX::Reflection::EnumDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006629d0
//
// 006629d0  6aff                 push -1
// 006629d2  687e3b9400           push 0x943b7e
// 006629d7  64a100000000         mov eax, dword ptr fs:[0]
// 006629dd  50                   push eax
// 006629de  64892500000000       mov dword ptr fs:[0], esp
// 006629e5  51                   push ecx
// 006629e6  b801000000           mov eax, 1
// 006629eb  8405bc01b900         test byte ptr [0xb901bc], al
// 006629f1  752f                 jne 0x662a22
// 006629f3  0905bc01b900         or dword ptr [0xb901bc], eax
// 006629f9  8d442403             lea eax, [esp + 3]
// 006629fd  50                   push eax
// 006629fe  8d4c2407             lea ecx, [esp + 7]
// 00662a02  51                   push ecx
// 00662a03  b99c01b900           mov ecx, 0xb9019c
// 00662a08  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00662a10  e8db65ecff           call 0x528ff0
// 00662a15  6800479800           push 0x984700
// 00662a1a  e80a1f1900           call 0x7f4929
// 00662a1f  83c404               add esp, 4
// 00662a22  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00662a26  b89c01b900           mov eax, 0xb9019c
// 00662a2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00662a32  83c410               add esp, 0x10
// 00662a35  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
