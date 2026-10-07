// roc 2008-06 0076f5f0  unit: CXTPImageEditorDlg  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f5f0
//
// 0076f5f0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0076f5f3  6a00                 push 0
// 0076f5f5  6a01                 push 1
// 0076f5f7  6a00                 push 0
// 0076f5f9  6a00                 push 0
// 0076f5fb  6863030000           push 0x363
// 0076f600  50                   push eax
// 0076f601  e894cd0400           call 0x7bc39a
// 0076f606  33c0                 xor eax, eax
// 0076f608  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnKickIdle@CXTPImageEditorDlg@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
