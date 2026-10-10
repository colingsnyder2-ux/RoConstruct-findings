// roc 2008-06 00741f10  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741f10
//
// 00741f10  8b442404             mov eax, dword ptr [esp + 4]
// 00741f14  56                   push esi
// 00741f15  50                   push eax
// 00741f16  8bf1                 mov esi, ecx
// 00741f18  e8235af6ff           call 0x6a7940
// 00741f1d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00741f20  8b11                 mov edx, dword ptr [ecx]
// 00741f22  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00741f28  ffd0                 call eax
// 00741f2a  5e                   pop esi
// 00741f2b  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnKillFocus@CXTPControlEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
