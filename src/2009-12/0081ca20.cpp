// roc 2009-12 0081ca20  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081ca20
//
// 0081ca20  56                   push esi
// 0081ca21  57                   push edi
// 0081ca22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0081ca26  8bf1                 mov esi, ecx
// 0081ca28  8bcf                 mov ecx, edi
// 0081ca2a  e8f1010100           call 0x82cc20
// 0081ca2f  85c0                 test eax, eax
// 0081ca31  7453                 je 0x81ca86
// 0081ca33  8b86b8020000         mov eax, dword ptr [esi + 0x2b8]
// 0081ca39  85c0                 test eax, eax
// 0081ca3b  7419                 je 0x81ca56
// 0081ca3d  3d10dc8200           cmp eax, 0x82dc10
// 0081ca42  7412                 je 0x81ca56
// 0081ca44  8b17                 mov edx, dword ptr [edi]
// 0081ca46  50                   push eax
// 0081ca47  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0081ca4d  8bcf                 mov ecx, edi
// 0081ca4f  ffd0                 call eax
// 0081ca51  5f                   pop edi
// 0081ca52  5e                   pop esi
// 0081ca53  c20400               ret 4
// 0081ca56  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0081ca5c  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0081ca5f  e80c8ecbff           call 0x4d5870
// 0081ca64  85c0                 test eax, eax
// 0081ca66  7512                 jne 0x81ca7a
// 0081ca68  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0081ca6e  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0081ca71  e8fa8dcbff           call 0x4d5870
// 0081ca76  85c0                 test eax, eax
// 0081ca78  740c                 je 0x81ca86
// 0081ca7a  8b07                 mov eax, dword ptr [edi]
// 0081ca7c  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0081ca82  8bcf                 mov ecx, edi
// 0081ca84  ffd2                 call edx
// 0081ca86  5f                   pop edi
// 0081ca87  5e                   pop esi
// 0081ca88  c20400               ret 4
// copied from an identical function in another client (function ?SortRows@CXTPReportControl@@MAEXPAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp