// roc 2007-08 006f2430  unit: CXTPImageEditorDlg  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2430
//
// 006f2430  8b810c0a0000         mov eax, dword ptr [ecx + 0xa0c]
// 006f2436  6a00                 push 0
// 006f2438  6a00                 push 0
// 006f243a  50                   push eax
// 006f243b  ff15dcec7700         call dword ptr [0x77ecdc]
// 006f2441  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnPictureChanged@CXTPImageEditorDlg@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
