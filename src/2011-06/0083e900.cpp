// roc 2011-06 0083e900  unit: CInstanceRecord::CNameItem  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e900
//
// 0083e900  56                   push esi
// 0083e901  8bf1                 mov esi, ecx
// 0083e903  8b4658               mov eax, dword ptr [esi + 0x58]
// 0083e906  83f8ff               cmp eax, -1
// 0083e909  740b                 je 0x83e916
// 0083e90b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083e90f  2b4158               sub eax, dword ptr [ecx + 0x58]
// 0083e912  5e                   pop esi
// 0083e913  c20800               ret 8
// 0083e916  57                   push edi
// 0083e917  8d7e5c               lea edi, [esi + 0x5c]
// 0083e91a  8bcf                 mov ecx, edi
// 0083e91c  ff15b026a400         call dword ptr [0xa426b0]
// 0083e922  84c0                 test al, al
// 0083e924  751b                 jne 0x83e941
// 0083e926  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0083e929  8b4a50               mov ecx, dword ptr [edx + 0x50]
// 0083e92c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0083e930  8b01                 mov eax, dword ptr [ecx]
// 0083e932  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0083e935  83c25c               add edx, 0x5c
// 0083e938  52                   push edx
// 0083e939  57                   push edi
// 0083e93a  ffd0                 call eax
// 0083e93c  5f                   pop edi
// 0083e93d  5e                   pop esi
// 0083e93e  c20800               ret 8
// 0083e941  8b16                 mov edx, dword ptr [esi]
// 0083e943  8b4278               mov eax, dword ptr [edx + 0x78]
// 0083e946  53                   push ebx
// 0083e947  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0083e94b  53                   push ebx
// 0083e94c  8bce                 mov ecx, esi
// 0083e94e  ffd0                 call eax
// 0083e950  8bf8                 mov edi, eax
// 0083e952  85ff                 test edi, edi
// 0083e954  7e16                 jle 0x83e96c
// 0083e956  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083e95a  8b11                 mov edx, dword ptr [ecx]
// 0083e95c  8b4278               mov eax, dword ptr [edx + 0x78]
// 0083e95f  53                   push ebx
// 0083e960  ffd0                 call eax
// 0083e962  2bf8                 sub edi, eax
// 0083e964  5b                   pop ebx
// 0083e965  8bc7                 mov eax, edi
// 0083e967  5f                   pop edi
// 0083e968  5e                   pop esi
// 0083e969  c20800               ret 8
// 0083e96c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083e970  8b16                 mov edx, dword ptr [esi]
// 0083e972  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 0083e978  50                   push eax
// 0083e979  53                   push ebx
// 0083e97a  8bce                 mov ecx, esi
// 0083e97c  ffd2                 call edx
// 0083e97e  5b                   pop ebx
// 0083e97f  5f                   pop edi
// 0083e980  5e                   pop esi
// 0083e981  c20800               ret 8
// copied from an identical function in another client (function ?CompareGroupCaption@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp