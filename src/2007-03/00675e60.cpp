// from server: 100% by tester
// roc 2008-06 006e7a70  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7a70
//
// 006e7a70  56                   push esi
// 006e7a71  8bf1                 mov esi, ecx
// 006e7a73  e8c837fcff           call 0x6ab240
// 006e7a78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e7a7c  8b10                 mov edx, dword ptr [eax]
// 006e7a7e  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 006e7a84  51                   push ecx
// 006e7a85  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e7a89  56                   push esi
// 006e7a8a  51                   push ecx
// 006e7a8b  8bc8                 mov ecx, eax
// 006e7a8d  ffd2                 call edx
// 006e7a8f  5e                   pop esi
// 006e7a90  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?AdjustExcludeRect@CXTPControlPopup@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
