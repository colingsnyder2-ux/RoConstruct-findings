// roc 2011-06 0075bf70  unit: RBX::ArrowToolBase  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075bf70
//
// 0075bf70  8b442404             mov eax, dword ptr [esp + 4]
// 0075bf74  56                   push esi
// 0075bf75  68f854cd00           push 0xcd54f8
// 0075bf7a  50                   push eax
// 0075bf7b  8bf1                 mov esi, ecx
// 0075bf7d  e89e040300           call 0x78c420
// 0075bf82  85c0                 test eax, eax
// 0075bf84  0f95c1               setne cl
// 0075bf87  884e20               mov byte ptr [esi + 0x20], cl
// 0075bf8a  5e                   pop esi
// 0075bf8b  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?onMouseIdle@ArrowToolBase@RBX@@MAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
