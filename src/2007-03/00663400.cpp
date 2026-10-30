// roc 2007-03 00663400  unit: seg_00660000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00663400
//
// 00663400  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 00663406  8b01                 mov eax, dword ptr [ecx]
// 00663408  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0066340e  ffe0                 jmp eax
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?AdjustExcludeRect@CXTPPopupBar@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
