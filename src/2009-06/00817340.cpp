// roc 2009-06 00817340  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817340
//
// 00817340  56                   push esi
// 00817341  8bf1                 mov esi, ecx
// 00817343  e81810f5ff           call 0x768360
// 00817348  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0081734e  898684010000         mov dword ptr [esi + 0x184], eax
// 00817354  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0081735a  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 00817364  898688010000         mov dword ptr [esi + 0x188], eax
// 0081736a  5e                   pop esi
// 0081736b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
