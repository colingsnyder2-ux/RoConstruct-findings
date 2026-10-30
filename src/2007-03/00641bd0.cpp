// roc 2007-03 00641bd0  unit: seg_00640000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00641bd0
//
// 00641bd0  56                   push esi
// 00641bd1  8bf1                 mov esi, ecx
// 00641bd3  8b4658               mov eax, dword ptr [esi + 0x58]
// 00641bd6  83f8ff               cmp eax, -1
// 00641bd9  740b                 je 0x641be6
// 00641bdb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00641bdf  2b4158               sub eax, dword ptr [ecx + 0x58]
// 00641be2  5e                   pop esi
// 00641be3  c20800               ret 8
// 00641be6  57                   push edi
// 00641be7  8d7e5c               lea edi, [esi + 0x5c]
// 00641bea  8bcf                 mov ecx, edi
// 00641bec  ff1528db7700         call dword ptr [0x77db28]
// 00641bf2  84c0                 test al, al
// 00641bf4  751b                 jne 0x641c11
// 00641bf6  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00641bf9  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 00641bfc  8b542410             mov edx, dword ptr [esp + 0x10]
// 00641c00  8b01                 mov eax, dword ptr [ecx]
// 00641c02  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00641c05  83c25c               add edx, 0x5c
// 00641c08  52                   push edx
// 00641c09  57                   push edi
// 00641c0a  ffd0                 call eax
// 00641c0c  5f                   pop edi
// 00641c0d  5e                   pop esi
// 00641c0e  c20800               ret 8
// 00641c11  8b16                 mov edx, dword ptr [esi]
// 00641c13  8b4278               mov eax, dword ptr [edx + 0x78]
// 00641c16  53                   push ebx
// 00641c17  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00641c1b  53                   push ebx
// 00641c1c  8bce                 mov ecx, esi
// 00641c1e  ffd0                 call eax
// 00641c20  8bf8                 mov edi, eax
// 00641c22  85ff                 test edi, edi
// 00641c24  7e16                 jle 0x641c3c
// 00641c26  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00641c2a  8b11                 mov edx, dword ptr [ecx]
// 00641c2c  8b4278               mov eax, dword ptr [edx + 0x78]
// 00641c2f  53                   push ebx
// 00641c30  ffd0                 call eax
// 00641c32  2bf8                 sub edi, eax
// 00641c34  5b                   pop ebx
// 00641c35  8bc7                 mov eax, edi
// 00641c37  5f                   pop edi
// 00641c38  5e                   pop esi
// 00641c39  c20800               ret 8
// 00641c3c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00641c40  8b16                 mov edx, dword ptr [esi]
// 00641c42  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00641c48  50                   push eax
// 00641c49  53                   push ebx
// 00641c4a  8bce                 mov ecx, esi
// 00641c4c  ffd2                 call edx
// 00641c4e  5b                   pop ebx
// 00641c4f  5f                   pop edi
// 00641c50  5e                   pop esi
// 00641c51  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp