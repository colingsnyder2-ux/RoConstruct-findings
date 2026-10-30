// roc 2010-06 007ce480  unit: CInstanceRecord::CNameItem  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce480
//
// 007ce480  56                   push esi
// 007ce481  8bf1                 mov esi, ecx
// 007ce483  8b4658               mov eax, dword ptr [esi + 0x58]
// 007ce486  83f8ff               cmp eax, -1
// 007ce489  740b                 je 0x7ce496
// 007ce48b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ce48f  2b4158               sub eax, dword ptr [ecx + 0x58]
// 007ce492  5e                   pop esi
// 007ce493  c20800               ret 8
// 007ce496  57                   push edi
// 007ce497  8d7e5c               lea edi, [esi + 0x5c]
// 007ce49a  8bcf                 mov ecx, edi
// 007ce49c  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007ce4a2  84c0                 test al, al
// 007ce4a4  751b                 jne 0x7ce4c1
// 007ce4a6  8b564c               mov edx, dword ptr [esi + 0x4c]
// 007ce4a9  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 007ce4ac  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ce4b0  8b01                 mov eax, dword ptr [ecx]
// 007ce4b2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 007ce4b5  83c25c               add edx, 0x5c
// 007ce4b8  52                   push edx
// 007ce4b9  57                   push edi
// 007ce4ba  ffd0                 call eax
// 007ce4bc  5f                   pop edi
// 007ce4bd  5e                   pop esi
// 007ce4be  c20800               ret 8
// 007ce4c1  8b16                 mov edx, dword ptr [esi]
// 007ce4c3  8b4278               mov eax, dword ptr [edx + 0x78]
// 007ce4c6  53                   push ebx
// 007ce4c7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007ce4cb  53                   push ebx
// 007ce4cc  8bce                 mov ecx, esi
// 007ce4ce  ffd0                 call eax
// 007ce4d0  8bf8                 mov edi, eax
// 007ce4d2  85ff                 test edi, edi
// 007ce4d4  7e16                 jle 0x7ce4ec
// 007ce4d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ce4da  8b11                 mov edx, dword ptr [ecx]
// 007ce4dc  8b4278               mov eax, dword ptr [edx + 0x78]
// 007ce4df  53                   push ebx
// 007ce4e0  ffd0                 call eax
// 007ce4e2  2bf8                 sub edi, eax
// 007ce4e4  5b                   pop ebx
// 007ce4e5  8bc7                 mov eax, edi
// 007ce4e7  5f                   pop edi
// 007ce4e8  5e                   pop esi
// 007ce4e9  c20800               ret 8
// 007ce4ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ce4f0  8b16                 mov edx, dword ptr [esi]
// 007ce4f2  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 007ce4f8  50                   push eax
// 007ce4f9  53                   push ebx
// 007ce4fa  8bce                 mov ecx, esi
// 007ce4fc  ffd2                 call edx
// 007ce4fe  5b                   pop ebx
// 007ce4ff  5f                   pop edi
// 007ce500  5e                   pop esi
// 007ce501  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp