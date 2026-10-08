// roc 2008-06 005a0f80  unit: RBX::PartTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0f80
//
// 005a0f80  51                   push ecx
// 005a0f81  56                   push esi
// 005a0f82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a0f86  6850388300           push 0x833850
// 005a0f8b  8bce                 mov ecx, esi
// 005a0f8d  c744240800000000     mov dword ptr [esp + 8], 0
// 005a0f95  ff1558248000         call dword ptr [0x802458]
// 005a0f9b  8bc6                 mov eax, esi
// 005a0f9d  5e                   pop esi
// 005a0f9e  59                   pop ecx
// 005a0f9f  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
