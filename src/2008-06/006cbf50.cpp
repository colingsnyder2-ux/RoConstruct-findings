// roc 2008-06 006cbf50  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cbf50
//
// 006cbf50  53                   push ebx
// 006cbf51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006cbf55  55                   push ebp
// 006cbf56  56                   push esi
// 006cbf57  8b742414             mov esi, dword ptr [esp + 0x14]
// 006cbf5b  57                   push edi
// 006cbf5c  8bf9                 mov edi, ecx
// 006cbf5e  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 006cbf64  8b01                 mov eax, dword ptr [ecx]
// 006cbf66  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006cbf69  56                   push esi
// 006cbf6a  53                   push ebx
// 006cbf6b  ffd2                 call edx
// 006cbf6d  8d4604               lea eax, [esi + 4]
// 006cbf70  50                   push eax
// 006cbf71  ff15b0218000         call dword ptr [0x8021b0]
// 006cbf77  8b16                 mov edx, dword ptr [esi]
// 006cbf79  8b4278               mov eax, dword ptr [edx + 0x78]
// 006cbf7c  bd01000000           mov ebp, 1
// 006cbf81  8bce                 mov ecx, esi
// 006cbf83  896e5c               mov dword ptr [esi + 0x5c], ebp
// 006cbf86  ffd0                 call eax
// 006cbf88  85c0                 test eax, eax
// 006cbf8a  7426                 je 0x6cbfb2
// 006cbf8c  8b16                 mov edx, dword ptr [esi]
// 006cbf8e  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 006cbf94  8bce                 mov ecx, esi
// 006cbf96  ffd0                 call eax
// 006cbf98  85c0                 test eax, eax
// 006cbf9a  7416                 je 0x6cbfb2
// 006cbf9c  8b17                 mov edx, dword ptr [edi]
// 006cbf9e  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 006cbfa4  56                   push esi
// 006cbfa5  53                   push ebx
// 006cbfa6  8bcf                 mov ecx, edi
// 006cbfa8  ffd0                 call eax
// 006cbfaa  5f                   pop edi
// 006cbfab  5e                   pop esi
// 006cbfac  5d                   pop ebp
// 006cbfad  40                   inc eax
// 006cbfae  5b                   pop ebx
// 006cbfaf  c20800               ret 8
// 006cbfb2  5f                   pop edi
// 006cbfb3  5e                   pop esi
// 006cbfb4  8bc5                 mov eax, ebp
// 006cbfb6  5d                   pop ebp
// 006cbfb7  5b                   pop ebx
// 006cbfb8  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?InsertRow@CXTPReportControl@@MAEHHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
