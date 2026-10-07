// roc 2012-06 009f0e30  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0e30
//
// 009f0e30  56                   push esi
// 009f0e31  57                   push edi
// 009f0e32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009f0e36  8b4718               mov eax, dword ptr [edi + 0x18]
// 009f0e39  f7d0                 not eax
// 009f0e3b  8bf1                 mov esi, ecx
// 009f0e3d  a801                 test al, 1
// 009f0e3f  741e                 je 0x9f0e5f
// 009f0e41  8b4e08               mov ecx, dword ptr [esi + 8]
// 009f0e44  51                   push ecx
// 009f0e45  8bcf                 mov ecx, edi
// 009f0e47  e8321ef9ff           call 0x982c7e
// 009f0e4c  8b5608               mov edx, dword ptr [esi + 8]
// 009f0e4f  8b4604               mov eax, dword ptr [esi + 4]
// 009f0e52  52                   push edx
// 009f0e53  50                   push eax
// 009f0e54  57                   push edi
// 009f0e55  e8d6faffff           call 0x9f0930
// 009f0e5a  5f                   pop edi
// 009f0e5b  5e                   pop esi
// 009f0e5c  c20400               ret 4
// 009f0e5f  8bcf                 mov ecx, edi
// 009f0e61  e8121ef9ff           call 0x982c78
// 009f0e66  6aff                 push -1
// 009f0e68  50                   push eax
// 009f0e69  8bce                 mov ecx, esi
// 009f0e6b  e860d6ffff           call 0x9ee4d0
// 009f0e70  8b5608               mov edx, dword ptr [esi + 8]
// 009f0e73  8b4604               mov eax, dword ptr [esi + 4]
// 009f0e76  52                   push edx
// 009f0e77  50                   push eax
// 009f0e78  57                   push edi
// 009f0e79  e8b2faffff           call 0x9f0930
// 009f0e7e  5f                   pop edi
// 009f0e7f  5e                   pop esi
// 009f0e80  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
