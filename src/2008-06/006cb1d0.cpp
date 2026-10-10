// roc 2008-06 006cb1d0  unit: CXTPReportControl  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb1d0
//
// 006cb1d0  51                   push ecx
// 006cb1d1  53                   push ebx
// 006cb1d2  8b9928010000         mov ebx, dword ptr [ecx + 0x128]
// 006cb1d8  55                   push ebp
// 006cb1d9  57                   push edi
// 006cb1da  85db                 test ebx, ebx
// 006cb1dc  0f847d000000         je 0x6cb25f
// 006cb1e2  8bcb                 mov ecx, ebx
// 006cb1e4  e827030100           call 0x6db510
// 006cb1e9  85c0                 test eax, eax
// 006cb1eb  7472                 je 0x6cb25f
// 006cb1ed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006cb1f1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006cb1f5  85ed                 test ebp, ebp
// 006cb1f7  7504                 jne 0x6cb1fd
// 006cb1f9  85ff                 test edi, edi
// 006cb1fb  7462                 je 0x6cb25f
// 006cb1fd  8bcb                 mov ecx, ebx
// 006cb1ff  e84c030100           call 0x6db550
// 006cb204  8944240c             mov dword ptr [esp + 0xc], eax
// 006cb208  85c0                 test eax, eax
// 006cb20a  7447                 je 0x6cb253
// 006cb20c  56                   push esi
// 006cb20d  8d4900               lea ecx, [ecx]
// 006cb210  8d442410             lea eax, [esp + 0x10]
// 006cb214  50                   push eax
// 006cb215  8bcb                 mov ecx, ebx
// 006cb217  e864030100           call 0x6db580
// 006cb21c  8bf0                 mov esi, eax
// 006cb21e  85f6                 test esi, esi
// 006cb220  7430                 je 0x6cb252
// 006cb222  8b16                 mov edx, dword ptr [esi]
// 006cb224  8b4260               mov eax, dword ptr [edx + 0x60]
// 006cb227  8bce                 mov ecx, esi
// 006cb229  ffd0                 call eax
// 006cb22b  85c0                 test eax, eax
// 006cb22d  740c                 je 0x6cb23b
// 006cb22f  85ed                 test ebp, ebp
// 006cb231  7408                 je 0x6cb23b
// 006cb233  50                   push eax
// 006cb234  8bcd                 mov ecx, ebp
// 006cb236  e865ca0000           call 0x6d7ca0
// 006cb23b  85ff                 test edi, edi
// 006cb23d  740c                 je 0x6cb24b
// 006cb23f  8b17                 mov edx, dword ptr [edi]
// 006cb241  8b4218               mov eax, dword ptr [edx + 0x18]
// 006cb244  6a01                 push 1
// 006cb246  56                   push esi
// 006cb247  8bcf                 mov ecx, edi
// 006cb249  ffd0                 call eax
// 006cb24b  837c241000           cmp dword ptr [esp + 0x10], 0
// 006cb250  75be                 jne 0x6cb210
// 006cb252  5e                   pop esi
// 006cb253  5f                   pop edi
// 006cb254  5d                   pop ebp
// 006cb255  b801000000           mov eax, 1
// 006cb25a  5b                   pop ebx
// 006cb25b  59                   pop ecx
// 006cb25c  c20800               ret 8
// 006cb25f  5f                   pop edi
// 006cb260  5d                   pop ebp
// 006cb261  33c0                 xor eax, eax
// 006cb263  5b                   pop ebx
// 006cb264  59                   pop ecx
// 006cb265  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_GetSelectedRows@CXTPReportControl@@IAEHPAVCXTPReportRecords@@PAV?$CXTPInternalCollectionT@VCXTPReportRow@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
