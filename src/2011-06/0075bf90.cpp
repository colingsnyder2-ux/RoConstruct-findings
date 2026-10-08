// roc 2011-06 0075bf90  unit: RBX::ArrowToolBase  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075bf90
//
// 0075bf90  51                   push ecx
// 0075bf91  80792000             cmp byte ptr [ecx + 0x20], 0
// 0075bf95  c7042400000000       mov dword ptr [esp], 0
// 0075bf9c  b8ec63ab00           mov eax, 0xab63ec
// 0075bfa1  7505                 jne 0x75bfa8
// 0075bfa3  b8187ca900           mov eax, 0xa97c18
// 0075bfa8  56                   push esi
// 0075bfa9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075bfad  50                   push eax
// 0075bfae  8bce                 mov ecx, esi
// 0075bfb0  ff15c404a400         call dword ptr [0xa404c4]
// 0075bfb6  8bc6                 mov eax, esi
// 0075bfb8  5e                   pop esi
// 0075bfb9  59                   pop ecx
// 0075bfba  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?getCursorName@ArrowToolBase@RBX@@MBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
