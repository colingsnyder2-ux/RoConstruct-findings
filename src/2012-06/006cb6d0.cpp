// roc 2012-06 006cb6d0  unit: RBX::Reflection::EnumDescriptor  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006cb6d0
//
// 006cb6d0  64a100000000         mov eax, dword ptr fs:[0]
// 006cb6d6  6aff                 push -1
// 006cb6d8  680ea7ab00           push 0xaba70e
// 006cb6dd  50                   push eax
// 006cb6de  64892500000000       mov dword ptr fs:[0], esp
// 006cb6e5  f6053ce8e20001       test byte ptr [0xe2e83c], 1
// 006cb6ec  7550                 jne 0x6cb73e
// 006cb6ee  830d3ce8e20001       or dword ptr [0xe2e83c], 1
// 006cb6f5  b930e8e200           mov ecx, 0xe2e830
// 006cb6fa  c744240800000000     mov dword ptr [esp + 8], 0
// 006cb702  e8e91a1000           call 0x7cd1f0
// 006cb707  a334e8e200           mov dword ptr [0xe2e834], eax
// 006cb70c  c6401501             mov byte ptr [eax + 0x15], 1
// 006cb710  a134e8e200           mov eax, dword ptr [0xe2e834]
// 006cb715  894004               mov dword ptr [eax + 4], eax
// 006cb718  a134e8e200           mov eax, dword ptr [0xe2e834]
// 006cb71d  8900                 mov dword ptr [eax], eax
// 006cb71f  a134e8e200           mov eax, dword ptr [0xe2e834]
// 006cb724  894008               mov dword ptr [eax + 8], eax
// 006cb727  682069b100           push 0xb16920
// 006cb72c  c70538e8e20000000000 mov dword ptr [0xe2e838], 0
// 006cb736  e8ba7a2b00           call 0x9831f5
// 006cb73b  83c404               add esp, 4
// 006cb73e  8b0c24               mov ecx, dword ptr [esp]
// 006cb741  b830e8e200           mov eax, 0xe2e830
// 006cb746  64890d00000000       mov dword ptr fs:[0], ecx
// 006cb74d  83c40c               add esp, 0xc
// 006cb750  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
