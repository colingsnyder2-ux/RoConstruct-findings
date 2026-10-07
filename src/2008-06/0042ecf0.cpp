// roc 2008-06 0042ecf0  unit: CWrapperView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ecf0
//
// 0042ecf0  e8311c2700           call 0x6a0926
// 0042ecf5  8b4804               mov ecx, dword ptr [eax + 4]
// 0042ecf8  e9c3b50100           jmp 0x44a2c0
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditDoc.cpp (function ?Restore@CWaitCursor@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditDoc.cpp
