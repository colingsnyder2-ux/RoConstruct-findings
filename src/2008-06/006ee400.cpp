// roc 2008-06 006ee400  unit: CXTPPopupBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee400
//
// 006ee400  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 006ee406  8b01                 mov eax, dword ptr [ecx]
// 006ee408  8b8048010000         mov eax, dword ptr [eax + 0x148]
// 006ee40e  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?AdjustExcludeRect@CXTPPopupBar@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
