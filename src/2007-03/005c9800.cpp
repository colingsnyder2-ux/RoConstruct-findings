// roc 2007-03 005c9800  unit: seg_005c0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c9800
//
// 005c9800  8b442404             mov eax, dword ptr [esp + 4]
// 005c9804  56                   push esi
// 005c9805  6880028c00           push 0x8c0280
// 005c980a  50                   push eax
// 005c980b  8bf1                 mov esi, ecx
// 005c980d  e85ef50000           call 0x5d8d70
// 005c9812  85c0                 test eax, eax
// 005c9814  0f95c1               setne cl
// 005c9817  884e20               mov byte ptr [esi + 0x20], cl
// 005c981a  5e                   pop esi
// 005c981b  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?onMouseIdle@ArrowToolBase@RBX@@MAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
