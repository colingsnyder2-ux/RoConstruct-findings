// roc 2009-06 00747360  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00747360
//
// 00747360  53                   push ebx
// 00747361  8b1dc8ed8900         mov ebx, dword ptr [0x89edc8]
// 00747367  56                   push esi
// 00747368  8bf1                 mov esi, ecx
// 0074736a  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 00747370  57                   push edi
// 00747371  85c0                 test eax, eax
// 00747373  7415                 je 0x74738a
// 00747375  8b4020               mov eax, dword ptr [eax + 0x20]
// 00747378  85c0                 test eax, eax
// 0074737a  740e                 je 0x74738a
// 0074737c  50                   push eax
// 0074737d  ffd3                 call ebx
// 0074737f  85c0                 test eax, eax
// 00747381  7407                 je 0x74738a
// 00747383  bf01000000           mov edi, 1
// 00747388  eb02                 jmp 0x74738c
// 0074738a  33ff                 xor edi, edi
// 0074738c  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 00747392  85c0                 test eax, eax
// 00747394  741b                 je 0x7473b1
// 00747396  83782000             cmp dword ptr [eax + 0x20], 0
// 0074739a  7415                 je 0x7473b1
// 0074739c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0074739f  50                   push eax
// 007473a0  ffd3                 call ebx
// 007473a2  85c0                 test eax, eax
// 007473a4  740b                 je 0x7473b1
// 007473a6  b801000000           mov eax, 1
// 007473ab  0bc7                 or eax, edi
// 007473ad  5f                   pop edi
// 007473ae  5e                   pop esi
// 007473af  5b                   pop ebx
// 007473b0  c3                   ret 
// 007473b1  33c0                 xor eax, eax
// 007473b3  0bc7                 or eax, edi
// 007473b5  5f                   pop edi
// 007473b6  5e                   pop esi
// 007473b7  5b                   pop ebx
// 007473b8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsEditMode@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
