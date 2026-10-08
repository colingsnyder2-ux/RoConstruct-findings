// roc 2007-03 005c9820  unit: seg_005c0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c9820
//
// 005c9820  51                   push ecx
// 005c9821  80792000             cmp byte ptr [ecx + 0x20], 0
// 005c9825  c7042400000000       mov dword ptr [esp], 0
// 005c982c  b850a87b00           mov eax, 0x7ba850
// 005c9831  7505                 jne 0x5c9838
// 005c9833  b87c8e7a00           mov eax, 0x7a8e7c
// 005c9838  56                   push esi
// 005c9839  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c983d  50                   push eax
// 005c983e  8bce                 mov ecx, esi
// 005c9840  ff1578e77700         call dword ptr [0x77e778]
// 005c9846  8bc6                 mov eax, esi
// 005c9848  5e                   pop esi
// 005c9849  59                   pop ecx
// 005c984a  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@ArrowToolBase@RBX@@MBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
