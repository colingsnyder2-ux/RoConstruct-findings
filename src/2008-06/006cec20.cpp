// from server: 100% by auto
// roc 2008-06 006cec20  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cec20
//
// 006cec20  53                   push ebx
// 006cec21  8b1d3c2d8000         mov ebx, dword ptr [0x802d3c]
// 006cec27  56                   push esi
// 006cec28  8bf1                 mov esi, ecx
// 006cec2a  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 006cec30  57                   push edi
// 006cec31  85c0                 test eax, eax
// 006cec33  7415                 je 0x6cec4a
// 006cec35  8b4020               mov eax, dword ptr [eax + 0x20]
// 006cec38  85c0                 test eax, eax
// 006cec3a  740e                 je 0x6cec4a
// 006cec3c  50                   push eax
// 006cec3d  ffd3                 call ebx
// 006cec3f  85c0                 test eax, eax
// 006cec41  7407                 je 0x6cec4a
// 006cec43  bf01000000           mov edi, 1
// 006cec48  eb02                 jmp 0x6cec4c
// 006cec4a  33ff                 xor edi, edi
// 006cec4c  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 006cec52  85c0                 test eax, eax
// 006cec54  741b                 je 0x6cec71
// 006cec56  83782000             cmp dword ptr [eax + 0x20], 0
// 006cec5a  7415                 je 0x6cec71
// 006cec5c  8b4020               mov eax, dword ptr [eax + 0x20]
// 006cec5f  50                   push eax
// 006cec60  ffd3                 call ebx
// 006cec62  85c0                 test eax, eax
// 006cec64  740b                 je 0x6cec71
// 006cec66  b801000000           mov eax, 1
// 006cec6b  0bc7                 or eax, edi
// 006cec6d  5f                   pop edi
// 006cec6e  5e                   pop esi
// 006cec6f  5b                   pop ebx
// 006cec70  c3                   ret 
// 006cec71  33c0                 xor eax, eax
// 006cec73  0bc7                 or eax, edi
// 006cec75  5f                   pop edi
// 006cec76  5e                   pop esi
// 006cec77  5b                   pop ebx
// 006cec78  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsEditMode@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
