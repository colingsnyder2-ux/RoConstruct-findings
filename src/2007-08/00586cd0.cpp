// roc 2007-08 00586cd0  unit: RBX::PartTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586cd0
//
// 00586cd0  51                   push ecx
// 00586cd1  56                   push esi
// 00586cd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00586cd6  6838cf7a00           push 0x7acf38
// 00586cdb  8bce                 mov ecx, esi
// 00586cdd  c744240800000000     mov dword ptr [esp + 8], 0
// 00586ce5  ff1598e67700         call dword ptr [0x77e698]
// 00586ceb  8bc6                 mov eax, esi
// 00586ced  5e                   pop esi
// 00586cee  59                   pop ecx
// 00586cef  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
