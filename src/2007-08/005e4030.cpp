// roc 2007-08 005e4030  unit: RBX::ArrowTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4030
//
// 005e4030  8b442404             mov eax, dword ptr [esp + 4]
// 005e4034  56                   push esi
// 005e4035  68e46e8c00           push 0x8c6ee4
// 005e403a  50                   push eax
// 005e403b  8bf1                 mov esi, ecx
// 005e403d  e8beffffff           call 0x5e4000
// 005e4042  85c0                 test eax, eax
// 005e4044  0f95c1               setne cl
// 005e4047  884e20               mov byte ptr [esi + 0x20], cl
// 005e404a  5e                   pop esi
// 005e404b  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?onMouseIdle@ArrowToolBase@RBX@@MAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
