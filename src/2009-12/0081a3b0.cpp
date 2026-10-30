// roc 2009-12 0081a3b0  unit: CInstanceRecord::CNameItem  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a3b0
//
// 0081a3b0  56                   push esi
// 0081a3b1  8bf1                 mov esi, ecx
// 0081a3b3  8b4658               mov eax, dword ptr [esi + 0x58]
// 0081a3b6  83f8ff               cmp eax, -1
// 0081a3b9  740b                 je 0x81a3c6
// 0081a3bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081a3bf  2b4158               sub eax, dword ptr [ecx + 0x58]
// 0081a3c2  5e                   pop esi
// 0081a3c3  c20800               ret 8
// 0081a3c6  57                   push edi
// 0081a3c7  8d7e5c               lea edi, [esi + 0x5c]
// 0081a3ca  8bcf                 mov ecx, edi
// 0081a3cc  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0081a3d2  84c0                 test al, al
// 0081a3d4  751b                 jne 0x81a3f1
// 0081a3d6  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0081a3d9  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 0081a3dc  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081a3e0  8b01                 mov eax, dword ptr [ecx]
// 0081a3e2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0081a3e5  83c25c               add edx, 0x5c
// 0081a3e8  52                   push edx
// 0081a3e9  57                   push edi
// 0081a3ea  ffd0                 call eax
// 0081a3ec  5f                   pop edi
// 0081a3ed  5e                   pop esi
// 0081a3ee  c20800               ret 8
// 0081a3f1  8b16                 mov edx, dword ptr [esi]
// 0081a3f3  8b4278               mov eax, dword ptr [edx + 0x78]
// 0081a3f6  53                   push ebx
// 0081a3f7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081a3fb  53                   push ebx
// 0081a3fc  8bce                 mov ecx, esi
// 0081a3fe  ffd0                 call eax
// 0081a400  8bf8                 mov edi, eax
// 0081a402  85ff                 test edi, edi
// 0081a404  7e16                 jle 0x81a41c
// 0081a406  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081a40a  8b11                 mov edx, dword ptr [ecx]
// 0081a40c  8b4278               mov eax, dword ptr [edx + 0x78]
// 0081a40f  53                   push ebx
// 0081a410  ffd0                 call eax
// 0081a412  2bf8                 sub edi, eax
// 0081a414  5b                   pop ebx
// 0081a415  8bc7                 mov eax, edi
// 0081a417  5f                   pop edi
// 0081a418  5e                   pop esi
// 0081a419  c20800               ret 8
// 0081a41c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081a420  8b16                 mov edx, dword ptr [esi]
// 0081a422  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0081a428  50                   push eax
// 0081a429  53                   push ebx
// 0081a42a  8bce                 mov ecx, esi
// 0081a42c  ffd2                 call edx
// 0081a42e  5b                   pop ebx
// 0081a42f  5f                   pop edi
// 0081a430  5e                   pop esi
// 0081a431  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp