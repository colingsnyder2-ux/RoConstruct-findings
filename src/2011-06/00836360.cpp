// roc 2011-06 00836360  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836360
//
// 00836360  53                   push ebx
// 00836361  8b1d201ca400         mov ebx, dword ptr [0xa41c20]
// 00836367  56                   push esi
// 00836368  8bf1                 mov esi, ecx
// 0083636a  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 00836370  57                   push edi
// 00836371  85c0                 test eax, eax
// 00836373  7415                 je 0x83638a
// 00836375  8b4020               mov eax, dword ptr [eax + 0x20]
// 00836378  85c0                 test eax, eax
// 0083637a  740e                 je 0x83638a
// 0083637c  50                   push eax
// 0083637d  ffd3                 call ebx
// 0083637f  85c0                 test eax, eax
// 00836381  7407                 je 0x83638a
// 00836383  bf01000000           mov edi, 1
// 00836388  eb02                 jmp 0x83638c
// 0083638a  33ff                 xor edi, edi
// 0083638c  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 00836392  85c0                 test eax, eax
// 00836394  741b                 je 0x8363b1
// 00836396  83782000             cmp dword ptr [eax + 0x20], 0
// 0083639a  7415                 je 0x8363b1
// 0083639c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083639f  50                   push eax
// 008363a0  ffd3                 call ebx
// 008363a2  85c0                 test eax, eax
// 008363a4  740b                 je 0x8363b1
// 008363a6  b801000000           mov eax, 1
// 008363ab  0bc7                 or eax, edi
// 008363ad  5f                   pop edi
// 008363ae  5e                   pop esi
// 008363af  5b                   pop ebx
// 008363b0  c3                   ret 
// 008363b1  33c0                 xor eax, eax
// 008363b3  0bc7                 or eax, edi
// 008363b5  5f                   pop edi
// 008363b6  5e                   pop esi
// 008363b7  5b                   pop ebx
// 008363b8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsEditMode@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
