// from server: 100% by auto
// roc 2011-06 008a4e50  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4e50
//
// 008a4e50  8b442404             mov eax, dword ptr [esp + 4]
// 008a4e54  6a01                 push 1
// 008a4e56  6a01                 push 1
// 008a4e58  50                   push eax
// 008a4e59  ff15e41ba400         call dword ptr [0xa41be4]
// 008a4e5f  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?AdjustExcludeRect@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
