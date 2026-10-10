// roc 2008-06 00750b50  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750b50
//
// 00750b50  56                   push esi
// 00750b51  8bf1                 mov esi, ecx
// 00750b53  8b4624               mov eax, dword ptr [esi + 0x24]
// 00750b56  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 00750b5d  745c                 je 0x750bbb
// 00750b5f  8b16                 mov edx, dword ptr [esi]
// 00750b61  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 00750b67  ffd0                 call eax
// 00750b69  85c0                 test eax, eax
// 00750b6b  744e                 je 0x750bbb
// 00750b6d  8b16                 mov edx, dword ptr [esi]
// 00750b6f  8b4278               mov eax, dword ptr [edx + 0x78]
// 00750b72  8bce                 mov ecx, esi
// 00750b74  ffd0                 call eax
// 00750b76  85c0                 test eax, eax
// 00750b78  7441                 je 0x750bbb
// 00750b7a  837e28ff             cmp dword ptr [esi + 0x28], -1
// 00750b7e  743b                 je 0x750bbb
// 00750b80  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750b83  57                   push edi
// 00750b84  e8c784f7ff           call 0x6c9050
// 00750b89  8b16                 mov edx, dword ptr [esi]
// 00750b8b  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00750b8e  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00750b94  8bce                 mov ecx, esi
// 00750b96  47                   inc edi
// 00750b97  ffd0                 call eax
// 00750b99  50                   push eax
// 00750b9a  8bce                 mov ecx, esi
// 00750b9c  e83fffffff           call 0x750ae0
// 00750ba1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750ba4  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00750baa  50                   push eax
// 00750bab  57                   push edi
// 00750bac  e87fa4f8ff           call 0x6db030
// 00750bb1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750bb4  5f                   pop edi
// 00750bb5  5e                   pop esi
// 00750bb6  e9e5ecf7ff           jmp 0x6cf8a0
// 00750bbb  5e                   pop esi
// 00750bbc  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?SelectChilds@CXTPReportRow@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
