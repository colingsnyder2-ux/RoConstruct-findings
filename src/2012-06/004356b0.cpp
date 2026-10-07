// roc 2012-06 004356b0  unit: CWrapperView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004356b0
//
// 004356b0  e81dcd5400           call 0x9823d2
// 004356b5  8b4804               mov ecx, dword ptr [eax + 4]
// 004356b8  e963880300           jmp 0x46df20
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditDoc.cpp (function ?Restore@CWaitCursor@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditDoc.cpp
