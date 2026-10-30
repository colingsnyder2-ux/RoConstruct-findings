// roc 2009-12 00822170  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00822170
//
// 00822170  53                   push ebx
// 00822171  8b1d64ca9800         mov ebx, dword ptr [0x98ca64]
// 00822177  56                   push esi
// 00822178  8bf1                 mov esi, ecx
// 0082217a  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 00822180  57                   push edi
// 00822181  85c0                 test eax, eax
// 00822183  7415                 je 0x82219a
// 00822185  8b4020               mov eax, dword ptr [eax + 0x20]
// 00822188  85c0                 test eax, eax
// 0082218a  740e                 je 0x82219a
// 0082218c  50                   push eax
// 0082218d  ffd3                 call ebx
// 0082218f  85c0                 test eax, eax
// 00822191  7407                 je 0x82219a
// 00822193  bf01000000           mov edi, 1
// 00822198  eb02                 jmp 0x82219c
// 0082219a  33ff                 xor edi, edi
// 0082219c  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 008221a2  85c0                 test eax, eax
// 008221a4  741b                 je 0x8221c1
// 008221a6  83782000             cmp dword ptr [eax + 0x20], 0
// 008221aa  7415                 je 0x8221c1
// 008221ac  8b4020               mov eax, dword ptr [eax + 0x20]
// 008221af  50                   push eax
// 008221b0  ffd3                 call ebx
// 008221b2  85c0                 test eax, eax
// 008221b4  740b                 je 0x8221c1
// 008221b6  b801000000           mov eax, 1
// 008221bb  0bc7                 or eax, edi
// 008221bd  5f                   pop edi
// 008221be  5e                   pop esi
// 008221bf  5b                   pop ebx
// 008221c0  c3                   ret 
// 008221c1  33c0                 xor eax, eax
// 008221c3  0bc7                 or eax, edi
// 008221c5  5f                   pop edi
// 008221c6  5e                   pop esi
// 008221c7  5b                   pop ebx
// 008221c8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsEditMode@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
