// roc 2010-06 008019c0  unit: CXTPPrintingDialog  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008019c0
//
// 008019c0  e83bf9ffff           call 0x801300
// 008019c5  8b442404             mov eax, dword ptr [esp + 4]
// 008019c9  6a00                 push 0
// 008019cb  6a00                 push 0
// 008019cd  6838ffa500           push 0xa5ff38
// 008019d2  50                   push eax
// 008019d3  e878e8ffff           call 0x800250
// 008019d8  83c410               add esp, 0x10
// 008019db  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
