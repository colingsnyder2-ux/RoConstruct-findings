// roc 2007-03 00648e80  unit: seg_00640000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00648e80
//
// 00648e80  53                   push ebx
// 00648e81  56                   push esi
// 00648e82  8bd9                 mov ebx, ecx
// 00648e84  ff154cee7700         call dword ptr [0x77ee4c]
// 00648e8a  50                   push eax
// 00648e8b  e8be57fdff           call 0x61e64e
// 00648e90  8bf0                 mov esi, eax
// 00648e92  85f6                 test esi, esi
// 00648e94  7503                 jne 0x648e99
// 00648e96  5e                   pop esi
// 00648e97  5b                   pop ebx
// 00648e98  c3                   ret 
// 00648e99  8b4620               mov eax, dword ptr [esi + 0x20]
// 00648e9c  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00648e9f  57                   push edi
// 00648ea0  7440                 je 0x648ee2
// 00648ea2  8b3dc8ec7700         mov edi, dword ptr [0x77ecc8]
// 00648ea8  50                   push eax
// 00648ea9  ffd7                 call edi
// 00648eab  50                   push eax
// 00648eac  e89d57fdff           call 0x61e64e
// 00648eb1  85c0                 test eax, eax
// 00648eb3  7403                 je 0x648eb8
// 00648eb5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00648eb8  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00648ebb  7425                 je 0x648ee2
// 00648ebd  8b4638               mov eax, dword ptr [esi + 0x38]
// 00648ec0  85c0                 test eax, eax
// 00648ec2  7506                 jne 0x648eca
// 00648ec4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00648ec7  50                   push eax
// 00648ec8  ffd7                 call edi
// 00648eca  50                   push eax
// 00648ecb  e87e57fdff           call 0x61e64e
// 00648ed0  85c0                 test eax, eax
// 00648ed2  7403                 je 0x648ed7
// 00648ed4  8b4020               mov eax, dword ptr [eax + 0x20]
// 00648ed7  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00648eda  7406                 je 0x648ee2
// 00648edc  5f                   pop edi
// 00648edd  5e                   pop esi
// 00648ede  33c0                 xor eax, eax
// 00648ee0  5b                   pop ebx
// 00648ee1  c3                   ret 
// 00648ee2  5f                   pop edi
// 00648ee3  5e                   pop esi
// 00648ee4  b801000000           mov eax, 1
// 00648ee9  5b                   pop ebx
// 00648eea  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?HasFocus@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
