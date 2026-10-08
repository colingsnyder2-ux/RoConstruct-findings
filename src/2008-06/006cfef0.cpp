// from server: 100% by auto
// roc 2008-06 006cfef0  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cfef0
//
// 006cfef0  53                   push ebx
// 006cfef1  56                   push esi
// 006cfef2  8bd9                 mov ebx, ecx
// 006cfef4  ff15102e8000         call dword ptr [0x802e10]
// 006cfefa  50                   push eax
// 006cfefb  e8de0cfdff           call 0x6a0bde
// 006cff00  8bf0                 mov esi, eax
// 006cff02  85f6                 test esi, esi
// 006cff04  7503                 jne 0x6cff09
// 006cff06  5e                   pop esi
// 006cff07  5b                   pop ebx
// 006cff08  c3                   ret 
// 006cff09  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cff0c  57                   push edi
// 006cff0d  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 006cff10  7440                 je 0x6cff52
// 006cff12  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 006cff18  50                   push eax
// 006cff19  ffd7                 call edi
// 006cff1b  50                   push eax
// 006cff1c  e8bd0cfdff           call 0x6a0bde
// 006cff21  85c0                 test eax, eax
// 006cff23  7403                 je 0x6cff28
// 006cff25  8b4020               mov eax, dword ptr [eax + 0x20]
// 006cff28  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 006cff2b  7425                 je 0x6cff52
// 006cff2d  8b4638               mov eax, dword ptr [esi + 0x38]
// 006cff30  85c0                 test eax, eax
// 006cff32  7506                 jne 0x6cff3a
// 006cff34  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cff37  50                   push eax
// 006cff38  ffd7                 call edi
// 006cff3a  50                   push eax
// 006cff3b  e89e0cfdff           call 0x6a0bde
// 006cff40  85c0                 test eax, eax
// 006cff42  7403                 je 0x6cff47
// 006cff44  8b4020               mov eax, dword ptr [eax + 0x20]
// 006cff47  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 006cff4a  7406                 je 0x6cff52
// 006cff4c  5f                   pop edi
// 006cff4d  5e                   pop esi
// 006cff4e  33c0                 xor eax, eax
// 006cff50  5b                   pop ebx
// 006cff51  c3                   ret 
// 006cff52  5f                   pop edi
// 006cff53  5e                   pop esi
// 006cff54  b801000000           mov eax, 1
// 006cff59  5b                   pop ebx
// 006cff5a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?HasFocus@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
