// roc 2007-08 0057ab60  unit: RBX::Workspace  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ab60
//
// 0057ab60  6aff                 push -1
// 0057ab62  681bb67500           push 0x75b61b
// 0057ab67  64a100000000         mov eax, dword ptr fs:[0]
// 0057ab6d  50                   push eax
// 0057ab6e  64892500000000       mov dword ptr fs:[0], esp
// 0057ab75  51                   push ecx
// 0057ab76  6a4c                 push 0x4c
// 0057ab78  e879530b00           call 0x62fef6
// 0057ab7d  83c404               add esp, 4
// 0057ab80  890424               mov dword ptr [esp], eax
// 0057ab83  85c0                 test eax, eax
// 0057ab85  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057ab8d  741b                 je 0x57abaa
// 0057ab8f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057ab93  51                   push ecx
// 0057ab94  8bc8                 mov ecx, eax
// 0057ab96  e8d5b20600           call 0x5e5e70
// 0057ab9b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057ab9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0057aba6  83c410               add esp, 0x10
// 0057aba9  c3                   ret 
// 0057abaa  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057abae  33c0                 xor eax, eax
// 0057abb0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057abb7  83c410               add esp, 0x10
// 0057abba  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?newNullTool@RBX@@YAPAVMouseCommand@1@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
