// roc 2009-06 00772c30  unit: CXTPPrintingDialog  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772c30
//
// 00772c30  e83bf9ffff           call 0x772570
// 00772c35  8b442404             mov eax, dword ptr [esp + 4]
// 00772c39  6a00                 push 0
// 00772c3b  6a00                 push 0
// 00772c3d  68d0b78f00           push 0x8fb7d0
// 00772c42  50                   push eax
// 00772c43  e898e8ffff           call 0x7714e0
// 00772c48  83c410               add esp, 0x10
// 00772c4b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
