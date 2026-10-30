// roc 2009-12 0082ab50  unit: CXTPReportHeader  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ab50
//
// 0082ab50  83ec08               sub esp, 8
// 0082ab53  56                   push esi
// 0082ab54  8bf1                 mov esi, ecx
// 0082ab56  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082ab59  83b8c001000001       cmp dword ptr [eax + 0x1c0], 1
// 0082ab60  752d                 jne 0x82ab8f
// 0082ab62  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082ab66  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082ab6a  8b16                 mov edx, dword ptr [esi]
// 0082ab6c  89442404             mov dword ptr [esp + 4], eax
// 0082ab70  2b8690000000         sub eax, dword ptr [esi + 0x90]
// 0082ab76  51                   push ecx
// 0082ab77  48                   dec eax
// 0082ab78  50                   push eax
// 0082ab79  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0082ab7f  8bce                 mov ecx, esi
// 0082ab81  ffd0                 call eax
// 0082ab83  85c0                 test eax, eax
// 0082ab85  7408                 je 0x82ab8f
// 0082ab87  50                   push eax
// 0082ab88  8bce                 mov ecx, esi
// 0082ab8a  e831fdffff           call 0x82a8c0
// 0082ab8f  5e                   pop esi
// 0082ab90  83c408               add esp, 8
// 0082ab93  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPReportHeader@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp