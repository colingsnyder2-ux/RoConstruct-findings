// roc 2012-06 009ae970  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ae970
//
// 009ae970  53                   push ebx
// 009ae971  8b1d3c3bb200         mov ebx, dword ptr [0xb23b3c]
// 009ae977  56                   push esi
// 009ae978  8bf1                 mov esi, ecx
// 009ae97a  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 009ae980  57                   push edi
// 009ae981  85c0                 test eax, eax
// 009ae983  7415                 je 0x9ae99a
// 009ae985  8b4020               mov eax, dword ptr [eax + 0x20]
// 009ae988  85c0                 test eax, eax
// 009ae98a  740e                 je 0x9ae99a
// 009ae98c  50                   push eax
// 009ae98d  ffd3                 call ebx
// 009ae98f  85c0                 test eax, eax
// 009ae991  7407                 je 0x9ae99a
// 009ae993  bf01000000           mov edi, 1
// 009ae998  eb02                 jmp 0x9ae99c
// 009ae99a  33ff                 xor edi, edi
// 009ae99c  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 009ae9a2  85c0                 test eax, eax
// 009ae9a4  741b                 je 0x9ae9c1
// 009ae9a6  83782000             cmp dword ptr [eax + 0x20], 0
// 009ae9aa  7415                 je 0x9ae9c1
// 009ae9ac  8b4020               mov eax, dword ptr [eax + 0x20]
// 009ae9af  50                   push eax
// 009ae9b0  ffd3                 call ebx
// 009ae9b2  85c0                 test eax, eax
// 009ae9b4  740b                 je 0x9ae9c1
// 009ae9b6  b801000000           mov eax, 1
// 009ae9bb  0bc7                 or eax, edi
// 009ae9bd  5f                   pop edi
// 009ae9be  5e                   pop esi
// 009ae9bf  5b                   pop ebx
// 009ae9c0  c3                   ret 
// 009ae9c1  33c0                 xor eax, eax
// 009ae9c3  0bc7                 or eax, edi
// 009ae9c5  5f                   pop edi
// 009ae9c6  5e                   pop esi
// 009ae9c7  5b                   pop ebx
// 009ae9c8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsEditMode@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
