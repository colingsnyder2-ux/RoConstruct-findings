// roc 2007-03 00713920  unit: seg_00710000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00713920
//
// 00713920  56                   push esi
// 00713921  8bf1                 mov esi, ecx
// 00713923  e8480ef5ff           call 0x664770
// 00713928  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0071392e  898684010000         mov dword ptr [esi + 0x184], eax
// 00713934  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0071393a  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 00713944  898688010000         mov dword ptr [esi + 0x188], eax
// 0071394a  5e                   pop esi
// 0071394b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
