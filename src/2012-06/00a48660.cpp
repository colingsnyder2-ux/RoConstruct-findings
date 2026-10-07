// roc 2012-06 00a48660  unit: CXTPDockingPaneContext  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a48660
//
// 00a48660  56                   push esi
// 00a48661  8bf1                 mov esi, ecx
// 00a48663  8b4608               mov eax, dword ptr [esi + 8]
// 00a48666  6a00                 push 0
// 00a48668  50                   push eax
// 00a48669  e8a2ecffff           call 0xa47310
// 00a4866e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a48672  894808               mov dword ptr [eax + 8], ecx
// 00a48675  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a48678  85c9                 test ecx, ecx
// 00a4867a  7409                 je 0xa48685
// 00a4867c  8901                 mov dword ptr [ecx], eax
// 00a4867e  894608               mov dword ptr [esi + 8], eax
// 00a48681  5e                   pop esi
// 00a48682  c20400               ret 4
// 00a48685  894604               mov dword ptr [esi + 4], eax
// 00a48688  894608               mov dword ptr [esi + 8], eax
// 00a4868b  5e                   pop esi
// 00a4868c  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?AddTail@?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAEPAU__POSITION@@PAVCXTPCalendarViewPart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
