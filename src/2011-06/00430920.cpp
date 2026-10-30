// from server: 100% by auto
// roc 2011-06 00430920  unit: CWrapperView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430920
//
// 00430920  e8f7993d00           call 0x80a31c
// 00430925  8b4804               mov ecx, dword ptr [eax + 4]
// 00430928  e9e3a20200           jmp 0x45ac10
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditDoc.cpp (function ?Restore@CWaitCursor@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditDoc.cpp
