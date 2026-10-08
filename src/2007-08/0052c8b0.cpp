// roc 2007-08 0052c8b0  unit: seg_00520000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c8b0
//
// 0052c8b0  64a100000000         mov eax, dword ptr fs:[0]
// 0052c8b6  6aff                 push -1
// 0052c8b8  687e027500           push 0x75027e
// 0052c8bd  50                   push eax
// 0052c8be  64892500000000       mov dword ptr fs:[0], esp
// 0052c8c5  f605800c8c0001       test byte ptr [0x8c0c80], 1
// 0052c8cc  7550                 jne 0x52c91e
// 0052c8ce  830d800c8c0001       or dword ptr [0x8c0c80], 1
// 0052c8d5  b9740c8c00           mov ecx, 0x8c0c74
// 0052c8da  c744240800000000     mov dword ptr [esp + 8], 0
// 0052c8e2  e8a9cf0400           call 0x579890
// 0052c8e7  a3780c8c00           mov dword ptr [0x8c0c78], eax
// 0052c8ec  c6402d01             mov byte ptr [eax + 0x2d], 1
// 0052c8f0  a1780c8c00           mov eax, dword ptr [0x8c0c78]
// 0052c8f5  894004               mov dword ptr [eax + 4], eax
// 0052c8f8  a1780c8c00           mov eax, dword ptr [0x8c0c78]
// 0052c8fd  8900                 mov dword ptr [eax], eax
// 0052c8ff  a1780c8c00           mov eax, dword ptr [0x8c0c78]
// 0052c904  894008               mov dword ptr [eax + 8], eax
// 0052c907  6840937700           push 0x779340
// 0052c90c  c7057c0c8c0000000000 mov dword ptr [0x8c0c7c], 0
// 0052c916  e808441000           call 0x630d23
// 0052c91b  83c404               add esp, 4
// 0052c91e  8b0c24               mov ecx, dword ptr [esp]
// 0052c921  b8740c8c00           mov eax, 0x8c0c74
// 0052c926  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c92d  83c40c               add esp, 0xc
// 0052c930  c3                   ret 
// library rbxgs/util\Name.cpp (function ?namMap@Name@RBX@@CAAAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
