// roc 2012-06 00a1afe0  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1afe0
//
// 00a1afe0  56                   push esi
// 00a1afe1  57                   push edi
// 00a1afe2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a1afe6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a1afe9  f7d0                 not eax
// 00a1afeb  8bf1                 mov esi, ecx
// 00a1afed  a801                 test al, 1
// 00a1afef  741e                 je 0xa1b00f
// 00a1aff1  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a1aff4  51                   push ecx
// 00a1aff5  8bcf                 mov ecx, edi
// 00a1aff7  e8827cf6ff           call 0x982c7e
// 00a1affc  8b5608               mov edx, dword ptr [esi + 8]
// 00a1afff  8b4604               mov eax, dword ptr [esi + 4]
// 00a1b002  52                   push edx
// 00a1b003  50                   push eax
// 00a1b004  57                   push edi
// 00a1b005  e826fcffff           call 0xa1ac30
// 00a1b00a  5f                   pop edi
// 00a1b00b  5e                   pop esi
// 00a1b00c  c20400               ret 4
// 00a1b00f  8bcf                 mov ecx, edi
// 00a1b011  e8627cf6ff           call 0x982c78
// 00a1b016  6aff                 push -1
// 00a1b018  50                   push eax
// 00a1b019  8bce                 mov ecx, esi
// 00a1b01b  e840f9ffff           call 0xa1a960
// 00a1b020  8b5608               mov edx, dword ptr [esi + 8]
// 00a1b023  8b4604               mov eax, dword ptr [esi + 4]
// 00a1b026  52                   push edx
// 00a1b027  50                   push eax
// 00a1b028  57                   push edi
// 00a1b029  e802fcffff           call 0xa1ac30
// 00a1b02e  5f                   pop edi
// 00a1b02f  5e                   pop esi
// 00a1b030  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
