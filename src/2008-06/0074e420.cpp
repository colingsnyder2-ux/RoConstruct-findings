// roc 2008-06 0074e420  unit: CXTPReportInplaceList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074e420
//
// 0074e420  56                   push esi
// 0074e421  8bf1                 mov esi, ecx
// 0074e423  837e6400             cmp dword ptr [esi + 0x64], 0
// 0074e427  741a                 je 0x74e443
// 0074e429  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 0074e430  7511                 jne 0x74e443
// 0074e432  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0074e435  8b11                 mov edx, dword ptr [ecx]
// 0074e437  8d4654               lea eax, [esi + 0x54]
// 0074e43a  50                   push eax
// 0074e43b  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 0074e441  ffd0                 call eax
// 0074e443  8bce                 mov ecx, esi
// 0074e445  e81e28f5ff           call 0x6a0c68
// 0074e44a  8b16                 mov edx, dword ptr [esi]
// 0074e44c  8b4268               mov eax, dword ptr [edx + 0x68]
// 0074e44f  8bce                 mov ecx, esi
// 0074e451  ffd0                 call eax
// 0074e453  5e                   pop esi
// 0074e454  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnKillFocus@CXTPReportInplaceList@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
