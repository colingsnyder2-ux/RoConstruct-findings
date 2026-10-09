// roc 2009-12 00696cf0  unit: RBX::PartTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00696cf0
//
// 00696cf0  51                   push ecx
// 00696cf1  56                   push esi
// 00696cf2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00696cf6  6828229d00           push 0x9d2228
// 00696cfb  8bce                 mov ecx, esi
// 00696cfd  c744240800000000     mov dword ptr [esp + 8], 0
// 00696d05  ff15f4b69800         call dword ptr [0x98b6f4]
// 00696d0b  8bc6                 mov eax, esi
// 00696d0d  5e                   pop esi
// 00696d0e  59                   pop ecx
// 00696d0f  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
