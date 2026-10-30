// roc 2009-12 008a3ef0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3ef0
//
// 008a3ef0  53                   push ebx
// 008a3ef1  56                   push esi
// 008a3ef2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a3ef6  8bd9                 mov ebx, ecx
// 008a3ef8  57                   push edi
// 008a3ef9  8b3e                 mov edi, dword ptr [esi]
// 008a3efb  8bce                 mov ecx, esi
// 008a3efd  e81e8df8ff           call 0x82cc20
// 008a3f02  48                   dec eax
// 008a3f03  50                   push eax
// 008a3f04  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008a3f07  8bce                 mov ecx, esi
// 008a3f09  ffd0                 call eax
// 008a3f0b  8bf0                 mov esi, eax
// 008a3f0d  8b16                 mov edx, dword ptr [esi]
// 008a3f0f  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 008a3f15  8bce                 mov ecx, esi
// 008a3f17  ffd0                 call eax
// 008a3f19  85c0                 test eax, eax
// 008a3f1b  7427                 je 0x8a3f44
// 008a3f1d  8b16                 mov edx, dword ptr [esi]
// 008a3f1f  8b4278               mov eax, dword ptr [edx + 0x78]
// 008a3f22  8bce                 mov ecx, esi
// 008a3f24  ffd0                 call eax
// 008a3f26  85c0                 test eax, eax
// 008a3f28  741a                 je 0x8a3f44
// 008a3f2a  8b16                 mov edx, dword ptr [esi]
// 008a3f2c  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008a3f32  8bce                 mov ecx, esi
// 008a3f34  ffd0                 call eax
// 008a3f36  50                   push eax
// 008a3f37  8bcb                 mov ecx, ebx
// 008a3f39  e8b2ffffff           call 0x8a3ef0
// 008a3f3e  5f                   pop edi
// 008a3f3f  5e                   pop esi
// 008a3f40  5b                   pop ebx
// 008a3f41  c20400               ret 4
// 008a3f44  8b16                 mov edx, dword ptr [esi]
// 008a3f46  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008a3f49  8bce                 mov ecx, esi
// 008a3f4b  ffd0                 call eax
// 008a3f4d  5f                   pop edi
// 008a3f4e  5e                   pop esi
// 008a3f4f  5b                   pop ebx
// 008a3f50  c20400               ret 4
// copied from an identical function in another client (function ?GetLastChildRow@CXTPReportRow@@IBEHPAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp