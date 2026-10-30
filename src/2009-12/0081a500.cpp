// roc 2009-12 0081a500  unit: CInstanceRecord::CNameItem  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a500
//
// 0081a500  56                   push esi
// 0081a501  57                   push edi
// 0081a502  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0081a506  8b4704               mov eax, dword ptr [edi + 4]
// 0081a509  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 0081a50f  8bf1                 mov esi, ecx
// 0081a511  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0081a514  85c9                 test ecx, ecx
// 0081a516  7421                 je 0x81a539
// 0081a518  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0081a51b  3b88f0000000         cmp ecx, dword ptr [eax + 0xf0]
// 0081a521  7508                 jne 0x81a52b
// 0081a523  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 0081a529  eb0e                 jmp 0x81a539
// 0081a52b  3b88f4000000         cmp ecx, dword ptr [eax + 0xf4]
// 0081a531  7506                 jne 0x81a539
// 0081a533  8b90e8010000         mov edx, dword ptr [eax + 0x1e8]
// 0081a539  85d2                 test edx, edx
// 0081a53b  743b                 je 0x81a578
// 0081a53d  8b06                 mov eax, dword ptr [esi]
// 0081a53f  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0081a545  8bce                 mov ecx, esi
// 0081a547  ffd2                 call edx
// 0081a549  85c0                 test eax, eax
// 0081a54b  742b                 je 0x81a578
// 0081a54d  8b470c               mov eax, dword ptr [edi + 0xc]
// 0081a550  85c0                 test eax, eax
// 0081a552  740d                 je 0x81a561
// 0081a554  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 0081a55b  7511                 jne 0x81a56e
// 0081a55d  85c0                 test eax, eax
// 0081a55f  7517                 jne 0x81a578
// 0081a561  8b4678               mov eax, dword ptr [esi + 0x78]
// 0081a564  85c0                 test eax, eax
// 0081a566  7410                 je 0x81a578
// 0081a568  83782000             cmp dword ptr [eax + 0x20], 0
// 0081a56c  740a                 je 0x81a578
// 0081a56e  5f                   pop edi
// 0081a56f  b801000000           mov eax, 1
// 0081a574  5e                   pop esi
// 0081a575  c20400               ret 4
// 0081a578  5f                   pop edi
// 0081a579  33c0                 xor eax, eax
// 0081a57b  5e                   pop esi
// 0081a57c  c20400               ret 4
// copied from an identical function in another client (function ?IsAllowEdit@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp