// from server: 100% by auto
// roc 2012-06 00a1d300  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d300
//
// 00a1d300  8b442404             mov eax, dword ptr [esp + 4]
// 00a1d304  6a01                 push 1
// 00a1d306  6a01                 push 1
// 00a1d308  50                   push eax
// 00a1d309  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a1d30f  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?AdjustExcludeRect@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
