// roc 2008-06 00750ae0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750ae0
//
// 00750ae0  53                   push ebx
// 00750ae1  56                   push esi
// 00750ae2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00750ae6  8bd9                 mov ebx, ecx
// 00750ae8  57                   push edi
// 00750ae9  8b3e                 mov edi, dword ptr [esi]
// 00750aeb  8bce                 mov ecx, esi
// 00750aed  e85e95f8ff           call 0x6da050
// 00750af2  48                   dec eax
// 00750af3  50                   push eax
// 00750af4  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00750af7  8bce                 mov ecx, esi
// 00750af9  ffd0                 call eax
// 00750afb  8bf0                 mov esi, eax
// 00750afd  8b16                 mov edx, dword ptr [esi]
// 00750aff  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 00750b05  8bce                 mov ecx, esi
// 00750b07  ffd0                 call eax
// 00750b09  85c0                 test eax, eax
// 00750b0b  7427                 je 0x750b34
// 00750b0d  8b16                 mov edx, dword ptr [esi]
// 00750b0f  8b4278               mov eax, dword ptr [edx + 0x78]
// 00750b12  8bce                 mov ecx, esi
// 00750b14  ffd0                 call eax
// 00750b16  85c0                 test eax, eax
// 00750b18  741a                 je 0x750b34
// 00750b1a  8b16                 mov edx, dword ptr [esi]
// 00750b1c  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00750b22  8bce                 mov ecx, esi
// 00750b24  ffd0                 call eax
// 00750b26  50                   push eax
// 00750b27  8bcb                 mov ecx, ebx
// 00750b29  e8b2ffffff           call 0x750ae0
// 00750b2e  5f                   pop edi
// 00750b2f  5e                   pop esi
// 00750b30  5b                   pop ebx
// 00750b31  c20400               ret 4
// 00750b34  8b16                 mov edx, dword ptr [esi]
// 00750b36  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00750b39  8bce                 mov ecx, esi
// 00750b3b  ffd0                 call eax
// 00750b3d  5f                   pop edi
// 00750b3e  5e                   pop esi
// 00750b3f  5b                   pop ebx
// 00750b40  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?GetLastChildRow@CXTPReportRow@@IBEHPAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
