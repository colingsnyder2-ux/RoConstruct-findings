// roc 2007-08 006f2370  unit: CXTPImageEditorDlg  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2370
//
// 006f2370  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006f2373  6a00                 push 0
// 006f2375  6a01                 push 1
// 006f2377  6a00                 push 0
// 006f2379  6a00                 push 0
// 006f237b  6863030000           push 0x363
// 006f2380  50                   push eax
// 006f2381  e850630400           call 0x7386d6
// 006f2386  33c0                 xor eax, eax
// 006f2388  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnKickIdle@CXTPImageEditorDlg@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
