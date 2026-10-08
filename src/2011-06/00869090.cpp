// roc 2011-06 00869090  unit: CXTPTabClientWnd  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869090
//
// 00869090  e8eb5cffff           call 0x85ed80
// 00869095  8b442404             mov eax, dword ptr [esp + 4]
// 00869099  6a00                 push 0
// 0086909b  6a00                 push 0
// 0086909d  68dcb6ac00           push 0xacb6dc
// 008690a2  50                   push eax
// 008690a3  e8284cffff           call 0x85dcd0
// 008690a8  83c410               add esp, 0x10
// 008690ab  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
