// roc 2008-06 006c7070  unit: CInstanceRecord::CNameItem  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7070
//
// 006c7070  56                   push esi
// 006c7071  57                   push edi
// 006c7072  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c7076  8b4704               mov eax, dword ptr [edi + 4]
// 006c7079  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 006c707f  8bf1                 mov esi, ecx
// 006c7081  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006c7084  85c9                 test ecx, ecx
// 006c7086  7421                 je 0x6c70a9
// 006c7088  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 006c708b  3b88f0000000         cmp ecx, dword ptr [eax + 0xf0]
// 006c7091  7508                 jne 0x6c709b
// 006c7093  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 006c7099  eb0e                 jmp 0x6c70a9
// 006c709b  3b88f4000000         cmp ecx, dword ptr [eax + 0xf4]
// 006c70a1  7506                 jne 0x6c70a9
// 006c70a3  8b90e8010000         mov edx, dword ptr [eax + 0x1e8]
// 006c70a9  85d2                 test edx, edx
// 006c70ab  743b                 je 0x6c70e8
// 006c70ad  8b06                 mov eax, dword ptr [esi]
// 006c70af  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 006c70b5  8bce                 mov ecx, esi
// 006c70b7  ffd2                 call edx
// 006c70b9  85c0                 test eax, eax
// 006c70bb  742b                 je 0x6c70e8
// 006c70bd  8b470c               mov eax, dword ptr [edi + 0xc]
// 006c70c0  85c0                 test eax, eax
// 006c70c2  740d                 je 0x6c70d1
// 006c70c4  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 006c70cb  7511                 jne 0x6c70de
// 006c70cd  85c0                 test eax, eax
// 006c70cf  7517                 jne 0x6c70e8
// 006c70d1  8b4678               mov eax, dword ptr [esi + 0x78]
// 006c70d4  85c0                 test eax, eax
// 006c70d6  7410                 je 0x6c70e8
// 006c70d8  83782000             cmp dword ptr [eax + 0x20], 0
// 006c70dc  740a                 je 0x6c70e8
// 006c70de  5f                   pop edi
// 006c70df  b801000000           mov eax, 1
// 006c70e4  5e                   pop esi
// 006c70e5  c20400               ret 4
// 006c70e8  5f                   pop edi
// 006c70e9  33c0                 xor eax, eax
// 006c70eb  5e                   pop esi
// 006c70ec  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsAllowEdit@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
