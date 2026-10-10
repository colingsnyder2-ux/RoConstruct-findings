// roc 2012-06 009c8fd0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8fd0
//
// 009c8fd0  56                   push esi
// 009c8fd1  8bf1                 mov esi, ecx
// 009c8fd3  e818bafbff           call 0x9849f0
// 009c8fd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009c8fdc  8b10                 mov edx, dword ptr [eax]
// 009c8fde  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 009c8fe4  51                   push ecx
// 009c8fe5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009c8fe9  56                   push esi
// 009c8fea  51                   push ecx
// 009c8feb  8bc8                 mov ecx, eax
// 009c8fed  ffd2                 call edx
// 009c8fef  5e                   pop esi
// 009c8ff0  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?AdjustExcludeRect@CXTPControlPopup@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControlPopup.cpp
