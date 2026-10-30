// roc 2009-06 0073f4a0  unit: CInstanceRecord::CNameItem  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f4a0
//
// 0073f4a0  56                   push esi
// 0073f4a1  8bf1                 mov esi, ecx
// 0073f4a3  8b4658               mov eax, dword ptr [esi + 0x58]
// 0073f4a6  83f8ff               cmp eax, -1
// 0073f4a9  740b                 je 0x73f4b6
// 0073f4ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073f4af  2b4158               sub eax, dword ptr [ecx + 0x58]
// 0073f4b2  5e                   pop esi
// 0073f4b3  c20800               ret 8
// 0073f4b6  57                   push edi
// 0073f4b7  8d7e5c               lea edi, [esi + 0x5c]
// 0073f4ba  8bcf                 mov ecx, edi
// 0073f4bc  ff155cfb8900         call dword ptr [0x89fb5c]
// 0073f4c2  84c0                 test al, al
// 0073f4c4  751b                 jne 0x73f4e1
// 0073f4c6  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0073f4c9  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 0073f4cc  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073f4d0  8b01                 mov eax, dword ptr [ecx]
// 0073f4d2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0073f4d5  83c25c               add edx, 0x5c
// 0073f4d8  52                   push edx
// 0073f4d9  57                   push edi
// 0073f4da  ffd0                 call eax
// 0073f4dc  5f                   pop edi
// 0073f4dd  5e                   pop esi
// 0073f4de  c20800               ret 8
// 0073f4e1  8b16                 mov edx, dword ptr [esi]
// 0073f4e3  8b4278               mov eax, dword ptr [edx + 0x78]
// 0073f4e6  53                   push ebx
// 0073f4e7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0073f4eb  53                   push ebx
// 0073f4ec  8bce                 mov ecx, esi
// 0073f4ee  ffd0                 call eax
// 0073f4f0  8bf8                 mov edi, eax
// 0073f4f2  85ff                 test edi, edi
// 0073f4f4  7e16                 jle 0x73f50c
// 0073f4f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073f4fa  8b11                 mov edx, dword ptr [ecx]
// 0073f4fc  8b4278               mov eax, dword ptr [edx + 0x78]
// 0073f4ff  53                   push ebx
// 0073f500  ffd0                 call eax
// 0073f502  2bf8                 sub edi, eax
// 0073f504  5b                   pop ebx
// 0073f505  8bc7                 mov eax, edi
// 0073f507  5f                   pop edi
// 0073f508  5e                   pop esi
// 0073f509  c20800               ret 8
// 0073f50c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073f510  8b16                 mov edx, dword ptr [esi]
// 0073f512  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0073f518  50                   push eax
// 0073f519  53                   push ebx
// 0073f51a  8bce                 mov ecx, esi
// 0073f51c  ffd2                 call edx
// 0073f51e  5b                   pop ebx
// 0073f51f  5f                   pop edi
// 0073f520  5e                   pop esi
// 0073f521  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp