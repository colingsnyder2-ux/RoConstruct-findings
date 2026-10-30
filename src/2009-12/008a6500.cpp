// roc 2009-12 008a6500  unit: CXTPReportTip  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6500
//
// 008a6500  56                   push esi
// 008a6501  8bf1                 mov esi, ecx
// 008a6503  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a6507  7425                 je 0x8a652e
// 008a6509  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a650c  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a6512  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a6516  8b442408             mov eax, dword ptr [esp + 8]
// 008a651a  52                   push edx
// 008a651b  8b11                 mov edx, dword ptr [ecx]
// 008a651d  50                   push eax
// 008a651e  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008a6521  6a00                 push 0
// 008a6523  ffd0                 call eax
// 008a6525  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6528  50                   push eax
// 008a6529  e8d2f5f7ff           call 0x825b00
// 008a652e  5e                   pop esi
// 008a652f  c20800               ret 8
// copied from an identical function in another client (function ?MoveFirstRow@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp