// roc 2007-03 0052d6e0  unit: seg_00520000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d6e0
//
// 0052d6e0  64a100000000         mov eax, dword ptr fs:[0]
// 0052d6e6  6aff                 push -1
// 0052d6e8  68ae117500           push 0x7511ae
// 0052d6ed  50                   push eax
// 0052d6ee  64892500000000       mov dword ptr fs:[0], esp
// 0052d6f5  f60540b18b0001       test byte ptr [0x8bb140], 1
// 0052d6fc  7550                 jne 0x52d74e
// 0052d6fe  830d40b18b0001       or dword ptr [0x8bb140], 1
// 0052d705  b934b18b00           mov ecx, 0x8bb134
// 0052d70a  c744240800000000     mov dword ptr [esp + 8], 0
// 0052d712  e869aa0800           call 0x5b8180
// 0052d717  a338b18b00           mov dword ptr [0x8bb138], eax
// 0052d71c  c6401501             mov byte ptr [eax + 0x15], 1
// 0052d720  a138b18b00           mov eax, dword ptr [0x8bb138]
// 0052d725  894004               mov dword ptr [eax + 4], eax
// 0052d728  a138b18b00           mov eax, dword ptr [0x8bb138]
// 0052d72d  8900                 mov dword ptr [eax], eax
// 0052d72f  a138b18b00           mov eax, dword ptr [0x8bb138]
// 0052d734  894008               mov dword ptr [eax + 8], eax
// 0052d737  6830937700           push 0x779330
// 0052d73c  c7053cb18b0000000000 mov dword ptr [0x8bb13c], 0
// 0052d746  e8681a0f00           call 0x61f1b3
// 0052d74b  83c404               add esp, 4
// 0052d74e  8b0c24               mov ecx, dword ptr [esp]
// 0052d751  b834b18b00           mov eax, 0x8bb134
// 0052d756  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d75d  83c40c               add esp, 0xc
// 0052d760  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getCreators@?$AbstractFactoryProduct@VInstance@RBX@@@RBX@@KAAAV?$map@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
