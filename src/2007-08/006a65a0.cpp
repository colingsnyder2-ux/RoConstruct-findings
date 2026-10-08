// from server: 100% by auto
// roc 2007-08 006a65a0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a65a0
//
// 006a65a0  8b442404             mov eax, dword ptr [esp + 4]
// 006a65a4  6a01                 push 1
// 006a65a6  6a01                 push 1
// 006a65a8  50                   push eax
// 006a65a9  ff1590ed7700         call dword ptr [0x77ed90]
// 006a65af  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?AdjustExcludeRect@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
