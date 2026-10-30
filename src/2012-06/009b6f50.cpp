// roc 2012-06 009b6f50  unit: CInstanceRecord::CNameItem  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b6f50
//
// 009b6f50  56                   push esi
// 009b6f51  8bf1                 mov esi, ecx
// 009b6f53  8b4658               mov eax, dword ptr [esi + 0x58]
// 009b6f56  83f8ff               cmp eax, -1
// 009b6f59  740b                 je 0x9b6f66
// 009b6f5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009b6f5f  2b4158               sub eax, dword ptr [ecx + 0x58]
// 009b6f62  5e                   pop esi
// 009b6f63  c20800               ret 8
// 009b6f66  57                   push edi
// 009b6f67  8d7e5c               lea edi, [esi + 0x5c]
// 009b6f6a  8bcf                 mov ecx, edi
// 009b6f6c  ff156046b200         call dword ptr [0xb24660]
// 009b6f72  84c0                 test al, al
// 009b6f74  751b                 jne 0x9b6f91
// 009b6f76  8b564c               mov edx, dword ptr [esi + 0x4c]
// 009b6f79  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 009b6f7c  8b542410             mov edx, dword ptr [esp + 0x10]
// 009b6f80  8b01                 mov eax, dword ptr [ecx]
// 009b6f82  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009b6f85  83c25c               add edx, 0x5c
// 009b6f88  52                   push edx
// 009b6f89  57                   push edi
// 009b6f8a  ffd0                 call eax
// 009b6f8c  5f                   pop edi
// 009b6f8d  5e                   pop esi
// 009b6f8e  c20800               ret 8
// 009b6f91  8b16                 mov edx, dword ptr [esi]
// 009b6f93  8b4278               mov eax, dword ptr [edx + 0x78]
// 009b6f96  53                   push ebx
// 009b6f97  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009b6f9b  53                   push ebx
// 009b6f9c  8bce                 mov ecx, esi
// 009b6f9e  ffd0                 call eax
// 009b6fa0  8bf8                 mov edi, eax
// 009b6fa2  85ff                 test edi, edi
// 009b6fa4  7e16                 jle 0x9b6fbc
// 009b6fa6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b6faa  8b11                 mov edx, dword ptr [ecx]
// 009b6fac  8b4278               mov eax, dword ptr [edx + 0x78]
// 009b6faf  53                   push ebx
// 009b6fb0  ffd0                 call eax
// 009b6fb2  2bf8                 sub edi, eax
// 009b6fb4  5b                   pop ebx
// 009b6fb5  8bc7                 mov eax, edi
// 009b6fb7  5f                   pop edi
// 009b6fb8  5e                   pop esi
// 009b6fb9  c20800               ret 8
// 009b6fbc  8b442414             mov eax, dword ptr [esp + 0x14]
// 009b6fc0  8b16                 mov edx, dword ptr [esi]
// 009b6fc2  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 009b6fc8  50                   push eax
// 009b6fc9  53                   push ebx
// 009b6fca  8bce                 mov ecx, esi
// 009b6fcc  ffd2                 call edx
// 009b6fce  5b                   pop ebx
// 009b6fcf  5f                   pop edi
// 009b6fd0  5e                   pop esi
// 009b6fd1  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp