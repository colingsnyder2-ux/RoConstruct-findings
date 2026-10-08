// from server: 100% by auto
// roc 2008-06 00720eb0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720eb0
//
// 00720eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00720eb4  6a01                 push 1
// 00720eb6  6a01                 push 1
// 00720eb8  50                   push eax
// 00720eb9  ff15282d8000         call dword ptr [0x802d28]
// 00720ebf  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?AdjustExcludeRect@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
