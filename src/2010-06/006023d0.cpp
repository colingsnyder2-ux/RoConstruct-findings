// roc 2010-06 006023d0  unit: RBX::PartTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006023d0
//
// 006023d0  51                   push ecx
// 006023d1  56                   push esi
// 006023d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006023d6  68e80ba300           push 0xa30be8
// 006023db  8bce                 mov ecx, esi
// 006023dd  c744240800000000     mov dword ptr [esp + 8], 0
// 006023e5  ff1510a49e00         call dword ptr [0x9ea410]
// 006023eb  8bc6                 mov eax, esi
// 006023ed  5e                   pop esi
// 006023ee  59                   pop ecx
// 006023ef  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@MouseCommand@RBX@@EBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
