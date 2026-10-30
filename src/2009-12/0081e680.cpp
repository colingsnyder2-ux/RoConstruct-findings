// roc 2009-12 0081e680  unit: CXTPReportControl  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e680
//
// 0081e680  51                   push ecx
// 0081e681  53                   push ebx
// 0081e682  8b9928010000         mov ebx, dword ptr [ecx + 0x128]
// 0081e688  55                   push ebp
// 0081e689  57                   push edi
// 0081e68a  85db                 test ebx, ebx
// 0081e68c  0f847d000000         je 0x81e70f
// 0081e692  8bcb                 mov ecx, ebx
// 0081e694  e8a7040100           call 0x82eb40
// 0081e699  85c0                 test eax, eax
// 0081e69b  7472                 je 0x81e70f
// 0081e69d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0081e6a1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0081e6a5  85ed                 test ebp, ebp
// 0081e6a7  7504                 jne 0x81e6ad
// 0081e6a9  85ff                 test edi, edi
// 0081e6ab  7462                 je 0x81e70f
// 0081e6ad  8bcb                 mov ecx, ebx
// 0081e6af  e8cc040100           call 0x82eb80
// 0081e6b4  8944240c             mov dword ptr [esp + 0xc], eax
// 0081e6b8  85c0                 test eax, eax
// 0081e6ba  7447                 je 0x81e703
// 0081e6bc  56                   push esi
// 0081e6bd  8d4900               lea ecx, [ecx]
// 0081e6c0  8d442410             lea eax, [esp + 0x10]
// 0081e6c4  50                   push eax
// 0081e6c5  8bcb                 mov ecx, ebx
// 0081e6c7  e8e4040100           call 0x82ebb0
// 0081e6cc  8bf0                 mov esi, eax
// 0081e6ce  85f6                 test esi, esi
// 0081e6d0  7430                 je 0x81e702
// 0081e6d2  8b16                 mov edx, dword ptr [esi]
// 0081e6d4  8b4260               mov eax, dword ptr [edx + 0x60]
// 0081e6d7  8bce                 mov ecx, esi
// 0081e6d9  ffd0                 call eax
// 0081e6db  85c0                 test eax, eax
// 0081e6dd  740c                 je 0x81e6eb
// 0081e6df  85ed                 test ebp, ebp
// 0081e6e1  7408                 je 0x81e6eb
// 0081e6e3  50                   push eax
// 0081e6e4  8bcd                 mov ecx, ebp
// 0081e6e6  e8c5e80000           call 0x82cfb0
// 0081e6eb  85ff                 test edi, edi
// 0081e6ed  740c                 je 0x81e6fb
// 0081e6ef  8b17                 mov edx, dword ptr [edi]
// 0081e6f1  8b4218               mov eax, dword ptr [edx + 0x18]
// 0081e6f4  6a01                 push 1
// 0081e6f6  56                   push esi
// 0081e6f7  8bcf                 mov ecx, edi
// 0081e6f9  ffd0                 call eax
// 0081e6fb  837c241000           cmp dword ptr [esp + 0x10], 0
// 0081e700  75be                 jne 0x81e6c0
// 0081e702  5e                   pop esi
// 0081e703  5f                   pop edi
// 0081e704  5d                   pop ebp
// 0081e705  b801000000           mov eax, 1
// 0081e70a  5b                   pop ebx
// 0081e70b  59                   pop ecx
// 0081e70c  c20800               ret 8
// 0081e70f  5f                   pop edi
// 0081e710  5d                   pop ebp
// 0081e711  33c0                 xor eax, eax
// 0081e713  5b                   pop ebx
// 0081e714  59                   pop ecx
// 0081e715  c20800               ret 8
// copied from an identical function in another client (function ?_GetSelectedRows@CXTPReportControl@@IAEHPAVCXTPReportRecords@@PAV?$CXTPInternalCollectionT@VCXTPReportRow@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp