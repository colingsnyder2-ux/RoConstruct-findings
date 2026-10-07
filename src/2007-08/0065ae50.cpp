// roc 2007-08 0065ae50  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ae50
//
// 0065ae50  53                   push ebx
// 0065ae51  56                   push esi
// 0065ae52  8bd9                 mov ebx, ecx
// 0065ae54  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0065ae5a  50                   push eax
// 0065ae5b  e86053fdff           call 0x6301c0
// 0065ae60  8bf0                 mov esi, eax
// 0065ae62  85f6                 test esi, esi
// 0065ae64  7503                 jne 0x65ae69
// 0065ae66  5e                   pop esi
// 0065ae67  5b                   pop ebx
// 0065ae68  c3                   ret 
// 0065ae69  8b4620               mov eax, dword ptr [esi + 0x20]
// 0065ae6c  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 0065ae6f  57                   push edi
// 0065ae70  7440                 je 0x65aeb2
// 0065ae72  8b3df8eb7700         mov edi, dword ptr [0x77ebf8]
// 0065ae78  50                   push eax
// 0065ae79  ffd7                 call edi
// 0065ae7b  50                   push eax
// 0065ae7c  e83f53fdff           call 0x6301c0
// 0065ae81  85c0                 test eax, eax
// 0065ae83  7403                 je 0x65ae88
// 0065ae85  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065ae88  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 0065ae8b  7425                 je 0x65aeb2
// 0065ae8d  8b4638               mov eax, dword ptr [esi + 0x38]
// 0065ae90  85c0                 test eax, eax
// 0065ae92  7506                 jne 0x65ae9a
// 0065ae94  8b4620               mov eax, dword ptr [esi + 0x20]
// 0065ae97  50                   push eax
// 0065ae98  ffd7                 call edi
// 0065ae9a  50                   push eax
// 0065ae9b  e82053fdff           call 0x6301c0
// 0065aea0  85c0                 test eax, eax
// 0065aea2  7403                 je 0x65aea7
// 0065aea4  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065aea7  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 0065aeaa  7406                 je 0x65aeb2
// 0065aeac  5f                   pop edi
// 0065aead  5e                   pop esi
// 0065aeae  33c0                 xor eax, eax
// 0065aeb0  5b                   pop ebx
// 0065aeb1  c3                   ret 
// 0065aeb2  5f                   pop edi
// 0065aeb3  5e                   pop esi
// 0065aeb4  b801000000           mov eax, 1
// 0065aeb9  5b                   pop ebx
// 0065aeba  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?HasFocus@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
