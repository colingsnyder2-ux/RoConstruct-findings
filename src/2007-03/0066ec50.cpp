// roc 2007-03 0066ec50  unit: seg_00660000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ec50
//
// 0066ec50  83caff               or edx, 0xffffffff
// 0066ec53  83c8ff               or eax, 0xffffffff
// 0066ec56  52                   push edx
// 0066ec57  50                   push eax
// 0066ec58  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0066ec5b  50                   push eax
// 0066ec5c  83c158               add ecx, 0x58
// 0066ec5f  e84c840700           call 0x6e70b0
// 0066ec64  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseLeave@CSingleWorkspace@CXTPTabClientWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
