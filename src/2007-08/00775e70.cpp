// roc 2007-08 00775e70  unit: seg_00770000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775e70
//
// 00775e70  b9f47f8c00           mov ecx, 0x8c7ff4
// 00775e75  e8367feaff           call 0x61ddb0
// 00775e7a  a3f87f8c00           mov dword ptr [0x8c7ff8], eax
// 00775e7f  c6401d01             mov byte ptr [eax + 0x1d], 1
// 00775e83  a1f87f8c00           mov eax, dword ptr [0x8c7ff8]
// 00775e88  894004               mov dword ptr [eax + 4], eax
// 00775e8b  a1f87f8c00           mov eax, dword ptr [0x8c7ff8]
// 00775e90  8900                 mov dword ptr [eax], eax
// 00775e92  a1f87f8c00           mov eax, dword ptr [0x8c7ff8]
// 00775e97  894008               mov dword ptr [eax + 8], eax
// 00775e9a  6860c87700           push 0x77c860
// 00775e9f  c705fc7f8c0000000000 mov dword ptr [0x8c7ffc], 0
// 00775ea9  e875aeebff           call 0x630d23
// 00775eae  59                   pop ecx
// 00775eaf  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ??__E?blockTemplates@BlockTemplate@RBX@@0V?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
