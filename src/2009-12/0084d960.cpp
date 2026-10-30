// roc 2009-12 0084d960  unit: CXTPPrintingDialog  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d960
//
// 0084d960  e83bf9ffff           call 0x84d2a0
// 0084d965  8b442404             mov eax, dword ptr [esp + 4]
// 0084d969  6a00                 push 0
// 0084d96b  6a00                 push 0
// 0084d96d  6878bc9f00           push 0x9fbc78
// 0084d972  50                   push eax
// 0084d973  e898e8ffff           call 0x84c210
// 0084d978  83c410               add esp, 0x10
// 0084d97b  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RegisterWindowClass@CXTPPropertyGrid@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
