// roc 2007-08 00653bc0  unit: CInstanceRecord::CNameItem  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653bc0
//
// 00653bc0  56                   push esi
// 00653bc1  8bf1                 mov esi, ecx
// 00653bc3  8b4658               mov eax, dword ptr [esi + 0x58]
// 00653bc6  83f8ff               cmp eax, -1
// 00653bc9  740b                 je 0x653bd6
// 00653bcb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00653bcf  2b4158               sub eax, dword ptr [ecx + 0x58]
// 00653bd2  5e                   pop esi
// 00653bd3  c20800               ret 8
// 00653bd6  57                   push edi
// 00653bd7  8d7e5c               lea edi, [esi + 0x5c]
// 00653bda  8bcf                 mov ecx, edi
// 00653bdc  ff15d0dc7700         call dword ptr [0x77dcd0]
// 00653be2  84c0                 test al, al
// 00653be4  751b                 jne 0x653c01
// 00653be6  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00653be9  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 00653bec  8b542410             mov edx, dword ptr [esp + 0x10]
// 00653bf0  8b01                 mov eax, dword ptr [ecx]
// 00653bf2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00653bf5  83c25c               add edx, 0x5c
// 00653bf8  52                   push edx
// 00653bf9  57                   push edi
// 00653bfa  ffd0                 call eax
// 00653bfc  5f                   pop edi
// 00653bfd  5e                   pop esi
// 00653bfe  c20800               ret 8
// 00653c01  8b16                 mov edx, dword ptr [esi]
// 00653c03  8b4278               mov eax, dword ptr [edx + 0x78]
// 00653c06  53                   push ebx
// 00653c07  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00653c0b  53                   push ebx
// 00653c0c  8bce                 mov ecx, esi
// 00653c0e  ffd0                 call eax
// 00653c10  8bf8                 mov edi, eax
// 00653c12  85ff                 test edi, edi
// 00653c14  7e16                 jle 0x653c2c
// 00653c16  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00653c1a  8b11                 mov edx, dword ptr [ecx]
// 00653c1c  8b4278               mov eax, dword ptr [edx + 0x78]
// 00653c1f  53                   push ebx
// 00653c20  ffd0                 call eax
// 00653c22  2bf8                 sub edi, eax
// 00653c24  5b                   pop ebx
// 00653c25  8bc7                 mov eax, edi
// 00653c27  5f                   pop edi
// 00653c28  5e                   pop esi
// 00653c29  c20800               ret 8
// 00653c2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00653c30  8b16                 mov edx, dword ptr [esi]
// 00653c32  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00653c38  50                   push eax
// 00653c39  53                   push ebx
// 00653c3a  8bce                 mov ecx, esi
// 00653c3c  ffd2                 call edx
// 00653c3e  5b                   pop ebx
// 00653c3f  5f                   pop edi
// 00653c40  5e                   pop esi
// 00653c41  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp