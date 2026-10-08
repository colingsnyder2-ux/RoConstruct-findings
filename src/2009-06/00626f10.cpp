// roc 2009-06 00626f10  unit: RBX::ToolMouseCommand  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626f10
//
// 00626f10  51                   push ecx
// 00626f11  56                   push esi
// 00626f12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00626f16  6850a48d00           push 0x8da450
// 00626f1b  8bce                 mov ecx, esi
// 00626f1d  c744240800000000     mov dword ptr [esp + 8], 0
// 00626f25  ff15b4e48900         call dword ptr [0x89e4b4]
// 00626f2b  8bc6                 mov eax, esi
// 00626f2d  5e                   pop esi
// 00626f2e  59                   pop ecx
// 00626f2f  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
