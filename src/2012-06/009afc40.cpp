// from server: 100% by auto
// roc 2012-06 009afc40  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afc40
//
// 009afc40  53                   push ebx
// 009afc41  56                   push esi
// 009afc42  8bd9                 mov ebx, ecx
// 009afc44  ff15e83bb200         call dword ptr [0xb23be8]
// 009afc4a  50                   push eax
// 009afc4b  e8162afdff           call 0x982666
// 009afc50  8bf0                 mov esi, eax
// 009afc52  85f6                 test esi, esi
// 009afc54  7503                 jne 0x9afc59
// 009afc56  5e                   pop esi
// 009afc57  5b                   pop ebx
// 009afc58  c3                   ret 
// 009afc59  8b4620               mov eax, dword ptr [esi + 0x20]
// 009afc5c  57                   push edi
// 009afc5d  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 009afc60  7440                 je 0x9afca2
// 009afc62  8b3d503ab200         mov edi, dword ptr [0xb23a50]
// 009afc68  50                   push eax
// 009afc69  ffd7                 call edi
// 009afc6b  50                   push eax
// 009afc6c  e8f529fdff           call 0x982666
// 009afc71  85c0                 test eax, eax
// 009afc73  7403                 je 0x9afc78
// 009afc75  8b4020               mov eax, dword ptr [eax + 0x20]
// 009afc78  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 009afc7b  7425                 je 0x9afca2
// 009afc7d  8b4638               mov eax, dword ptr [esi + 0x38]
// 009afc80  85c0                 test eax, eax
// 009afc82  7506                 jne 0x9afc8a
// 009afc84  8b4620               mov eax, dword ptr [esi + 0x20]
// 009afc87  50                   push eax
// 009afc88  ffd7                 call edi
// 009afc8a  50                   push eax
// 009afc8b  e8d629fdff           call 0x982666
// 009afc90  85c0                 test eax, eax
// 009afc92  7403                 je 0x9afc97
// 009afc94  8b4020               mov eax, dword ptr [eax + 0x20]
// 009afc97  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 009afc9a  7406                 je 0x9afca2
// 009afc9c  5f                   pop edi
// 009afc9d  5e                   pop esi
// 009afc9e  33c0                 xor eax, eax
// 009afca0  5b                   pop ebx
// 009afca1  c3                   ret 
// 009afca2  5f                   pop edi
// 009afca3  5e                   pop esi
// 009afca4  b801000000           mov eax, 1
// 009afca9  5b                   pop ebx
// 009afcaa  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?HasFocus@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
