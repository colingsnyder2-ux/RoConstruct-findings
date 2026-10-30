// from server: 100% by auto
// roc 2007-08 0042eeb0  unit: CWrapperView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042eeb0
//
// 0042eeb0  e84d102000           call 0x62ff02
// 0042eeb5  8b4804               mov ecx, dword ptr [eax + 4]
// 0042eeb8  e9c3990100           jmp 0x448880
// library xtp-11.2.2-vc8/Source\SyntaxEdit\XTPSyntaxEditDoc.cpp (function ?Restore@CWaitCursor@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SyntaxEdit/XTPSyntaxEditDoc.cpp
