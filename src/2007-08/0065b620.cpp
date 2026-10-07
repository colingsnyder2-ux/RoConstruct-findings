// roc 2007-08 0065b620  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065b620
//
// 0065b620  56                   push esi
// 0065b621  57                   push edi
// 0065b622  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065b626  85ff                 test edi, edi
// 0065b628  8bf1                 mov esi, ecx
// 0065b62a  7d05                 jge 0x65b631
// 0065b62c  e8ef48fdff           call 0x62ff20
// 0065b631  3b7e08               cmp edi, dword ptr [esi + 8]
// 0065b634  7c0b                 jl 0x65b641
// 0065b636  6aff                 push -1
// 0065b638  8d4701               lea eax, [edi + 1]
// 0065b63b  50                   push eax
// 0065b63c  e83fedffff           call 0x65a380
// 0065b641  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065b644  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065b648  8b4204               mov eax, dword ptr [edx + 4]
// 0065b64b  85c0                 test eax, eax
// 0065b64d  8b74f904             mov esi, dword ptr [ecx + edi*8 + 4]
// 0065b651  8d0cf9               lea ecx, [ecx + edi*8]
// 0065b654  894104               mov dword ptr [ecx + 4], eax
// 0065b657  740a                 je 0x65b663
// 0065b659  83c004               add eax, 4
// 0065b65c  50                   push eax
// 0065b65d  ff15ecd27700         call dword ptr [0x77d2ec]
// 0065b663  85f6                 test esi, esi
// 0065b665  7407                 je 0x65b66e
// 0065b667  8bce                 mov ecx, esi
// 0065b669  e8764bfdff           call 0x6301e4
// 0065b66e  5f                   pop edi
// 0065b66f  5e                   pop esi
// 0065b670  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?SetAtGrow@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarResource@@@@AAV1@@@QAEXHAAV?$CXTPSmartPtrInternalT@VCXTPCalendarResource@@@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
