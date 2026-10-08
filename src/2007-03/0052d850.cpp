// roc 2007-03 0052d850  unit: seg_00520000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d850
//
// 0052d850  64a100000000         mov eax, dword ptr fs:[0]
// 0052d856  6aff                 push -1
// 0052d858  68ee117500           push 0x7511ee
// 0052d85d  50                   push eax
// 0052d85e  64892500000000       mov dword ptr fs:[0], esp
// 0052d865  f60550b18b0001       test byte ptr [0x8bb150], 1
// 0052d86c  7550                 jne 0x52d8be
// 0052d86e  830d50b18b0001       or dword ptr [0x8bb150], 1
// 0052d875  b944b18b00           mov ecx, 0x8bb144
// 0052d87a  c744240800000000     mov dword ptr [esp + 8], 0
// 0052d882  e8f9aa0d00           call 0x608380
// 0052d887  a348b18b00           mov dword ptr [0x8bb148], eax
// 0052d88c  c6402d01             mov byte ptr [eax + 0x2d], 1
// 0052d890  a148b18b00           mov eax, dword ptr [0x8bb148]
// 0052d895  894004               mov dword ptr [eax + 4], eax
// 0052d898  a148b18b00           mov eax, dword ptr [0x8bb148]
// 0052d89d  8900                 mov dword ptr [eax], eax
// 0052d89f  a148b18b00           mov eax, dword ptr [0x8bb148]
// 0052d8a4  894008               mov dword ptr [eax + 8], eax
// 0052d8a7  6870937700           push 0x779370
// 0052d8ac  c7054cb18b0000000000 mov dword ptr [0x8bb14c], 0
// 0052d8b6  e8f8180f00           call 0x61f1b3
// 0052d8bb  83c404               add esp, 4
// 0052d8be  8b0c24               mov ecx, dword ptr [esp]
// 0052d8c1  b844b18b00           mov eax, 0x8bb144
// 0052d8c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d8cd  83c40c               add esp, 0xc
// 0052d8d0  c3                   ret 
// library rbxgs/util\Name.cpp (function ?namMap@Name@RBX@@CAAAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
