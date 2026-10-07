// roc 2008-06 006fa290  unit: CXTPPrintingDialog  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa290
//
// 006fa290  e83bf9ffff           call 0x6f9bd0
// 006fa295  8b442404             mov eax, dword ptr [esp + 4]
// 006fa299  6a00                 push 0
// 006fa29b  6a00                 push 0
// 006fa29d  6878a78500           push 0x85a778
// 006fa2a2  50                   push eax
// 006fa2a3  e898e8ffff           call 0x6f8b40
// 006fa2a8  83c410               add esp, 0x10
// 006fa2ab  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
