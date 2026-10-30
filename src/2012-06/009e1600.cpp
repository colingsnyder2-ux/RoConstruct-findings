// roc 2012-06 009e1600  unit: CXTPTabClientWnd  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1600
//
// 009e1600  e88b5bffff           call 0x9d7190
// 009e1605  8b442404             mov eax, dword ptr [esp + 4]
// 009e1609  6a00                 push 0
// 009e160b  6a00                 push 0
// 009e160d  68cc6dc100           push 0xc16dcc
// 009e1612  50                   push eax
// 009e1613  e8c84affff           call 0x9d60e0
// 009e1618  83c410               add esp, 0x10
// 009e161b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
