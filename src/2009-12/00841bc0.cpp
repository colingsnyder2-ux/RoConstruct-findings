// roc 2009-12 00841bc0  unit: CXTPPopupBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841bc0
//
// 00841bc0  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 00841bc6  8b01                 mov eax, dword ptr [ecx]
// 00841bc8  8b8048010000         mov eax, dword ptr [eax + 0x148]
// 00841bce  ffe0                 jmp eax
// copied from an identical function in another client (function ?AdjustExcludeRect@CXTPPopupBar@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp