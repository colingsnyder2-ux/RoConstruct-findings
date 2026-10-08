// roc 2011-06 0063e820  unit: RBX::PartTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063e820
//
// 0063e820  51                   push ecx
// 0063e821  56                   push esi
// 0063e822  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e826  68187ca900           push 0xa97c18
// 0063e82b  8bce                 mov ecx, esi
// 0063e82d  c744240800000000     mov dword ptr [esp + 8], 0
// 0063e835  ff15c404a400         call dword ptr [0xa404c4]
// 0063e83b  8bc6                 mov eax, esi
// 0063e83d  5e                   pop esi
// 0063e83e  59                   pop ecx
// 0063e83f  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
