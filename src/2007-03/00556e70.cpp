// roc 2007-03 00556e70  unit: seg_00550000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00556e70
//
// 00556e70  51                   push ecx
// 00556e71  56                   push esi
// 00556e72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00556e76  687c8e7a00           push 0x7a8e7c
// 00556e7b  8bce                 mov ecx, esi
// 00556e7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00556e85  ff1578e77700         call dword ptr [0x77e778]
// 00556e8b  8bc6                 mov eax, esi
// 00556e8d  5e                   pop esi
// 00556e8e  59                   pop ecx
// 00556e8f  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
