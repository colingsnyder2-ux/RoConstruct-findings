// roc 2009-12 0083b160  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b160
//
// 0083b160  56                   push esi
// 0083b161  8bf1                 mov esi, ecx
// 0083b163  e8d8adfbff           call 0x7f5f40
// 0083b168  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083b16c  8b10                 mov edx, dword ptr [eax]
// 0083b16e  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 0083b174  51                   push ecx
// 0083b175  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083b179  56                   push esi
// 0083b17a  51                   push ecx
// 0083b17b  8bc8                 mov ecx, eax
// 0083b17d  ffd2                 call edx
// 0083b17f  5e                   pop esi
// 0083b180  c20800               ret 8
// copied from an identical function in another client (function ?AdjustExcludeRect@CXTPControlPopup@@UAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp