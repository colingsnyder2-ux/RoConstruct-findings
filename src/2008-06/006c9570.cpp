// roc 2008-06 006c9570  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9570
//
// 006c9570  56                   push esi
// 006c9571  57                   push edi
// 006c9572  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c9576  8bf1                 mov esi, ecx
// 006c9578  8bcf                 mov ecx, edi
// 006c957a  e8d10a0100           call 0x6da050
// 006c957f  85c0                 test eax, eax
// 006c9581  7453                 je 0x6c95d6
// 006c9583  8b86b8020000         mov eax, dword ptr [esi + 0x2b8]
// 006c9589  85c0                 test eax, eax
// 006c958b  7419                 je 0x6c95a6
// 006c958d  3de0a56d00           cmp eax, 0x6da5e0
// 006c9592  7412                 je 0x6c95a6
// 006c9594  8b17                 mov edx, dword ptr [edi]
// 006c9596  50                   push eax
// 006c9597  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006c959d  8bcf                 mov ecx, edi
// 006c959f  ffd0                 call eax
// 006c95a1  5f                   pop edi
// 006c95a2  5e                   pop esi
// 006c95a3  c20400               ret 4
// 006c95a6  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 006c95ac  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006c95af  e8ac04ffff           call 0x6b9a60
// 006c95b4  85c0                 test eax, eax
// 006c95b6  7512                 jne 0x6c95ca
// 006c95b8  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 006c95be  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 006c95c1  e89a04ffff           call 0x6b9a60
// 006c95c6  85c0                 test eax, eax
// 006c95c8  740c                 je 0x6c95d6
// 006c95ca  8b07                 mov eax, dword ptr [edi]
// 006c95cc  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 006c95d2  8bcf                 mov ecx, edi
// 006c95d4  ffd2                 call edx
// 006c95d6  5f                   pop edi
// 006c95d7  5e                   pop esi
// 006c95d8  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?SortRows@CXTPReportControl@@MAEXPAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
