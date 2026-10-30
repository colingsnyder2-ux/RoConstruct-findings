// from server: 100% by auto
// roc 2012-06 009c3210  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c3210
//
// 009c3210  8b442404             mov eax, dword ptr [esp + 4]
// 009c3214  85c0                 test eax, eax
// 009c3216  7514                 jne 0x9c322c
// 009c3218  50                   push eax
// 009c3219  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009c321c  50                   push eax
// 009c321d  ff15ac3cb200         call dword ptr [0xb23cac]
// 009c3223  89442404             mov dword ptr [esp + 4], eax
// 009c3227  e93af4fbff           jmp 0x982666
// 009c322c  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c322f  50                   push eax
// 009c3230  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009c3233  50                   push eax
// 009c3234  ff15ac3cb200         call dword ptr [0xb23cac]
// 009c323a  89442404             mov dword ptr [esp + 4], eax
// 009c323e  e923f4fbff           jmp 0x982666
// library xtp-15.2.1/Source\CommandBars\XTPControlCustom.cpp (function ?SetParent@CWnd@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlCustom.cpp
