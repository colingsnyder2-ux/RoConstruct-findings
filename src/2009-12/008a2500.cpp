// roc 2009-12 008a2500  unit: CXTPReportInplaceList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2500
//
// 008a2500  56                   push esi
// 008a2501  8bf1                 mov esi, ecx
// 008a2503  837e6400             cmp dword ptr [esi + 0x64], 0
// 008a2507  741a                 je 0x8a2523
// 008a2509  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008a2510  7511                 jne 0x8a2523
// 008a2512  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a2515  8b11                 mov edx, dword ptr [ecx]
// 008a2517  8d4654               lea eax, [esi + 0x54]
// 008a251a  50                   push eax
// 008a251b  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 008a2521  ffd0                 call eax
// 008a2523  8bce                 mov ecx, esi
// 008a2525  e80619f5ff           call 0x7f3e30
// 008a252a  8b16                 mov edx, dword ptr [esi]
// 008a252c  8b4268               mov eax, dword ptr [edx + 0x68]
// 008a252f  8bce                 mov ecx, esi
// 008a2531  ffd0                 call eax
// 008a2533  5e                   pop esi
// 008a2534  c20400               ret 4
// copied from an identical function in another client (function ?OnKillFocus@CXTPReportInplaceList@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp