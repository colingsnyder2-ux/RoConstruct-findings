// roc 2007-08 005e4050  unit: RBX::ArrowTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4050
//
// 005e4050  51                   push ecx
// 005e4051  80792000             cmp byte ptr [ecx + 0x20], 0
// 005e4055  c7042400000000       mov dword ptr [esp], 0
// 005e405c  b8c8d07b00           mov eax, 0x7bd0c8
// 005e4061  7505                 jne 0x5e4068
// 005e4063  b838cf7a00           mov eax, 0x7acf38
// 005e4068  56                   push esi
// 005e4069  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e406d  50                   push eax
// 005e406e  8bce                 mov ecx, esi
// 005e4070  ff1598e67700         call dword ptr [0x77e698]
// 005e4076  8bc6                 mov eax, esi
// 005e4078  5e                   pop esi
// 005e4079  59                   pop ecx
// 005e407a  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@ArrowToolBase@RBX@@MBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
