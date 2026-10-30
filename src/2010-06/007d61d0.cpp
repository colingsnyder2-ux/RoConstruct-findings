// roc 2010-06 007d61d0  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d61d0
//
// 007d61d0  53                   push ebx
// 007d61d1  8b1de8bb9e00         mov ebx, dword ptr [0x9ebbe8]
// 007d61d7  56                   push esi
// 007d61d8  8bf1                 mov esi, ecx
// 007d61da  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 007d61e0  57                   push edi
// 007d61e1  85c0                 test eax, eax
// 007d61e3  7415                 je 0x7d61fa
// 007d61e5  8b4020               mov eax, dword ptr [eax + 0x20]
// 007d61e8  85c0                 test eax, eax
// 007d61ea  740e                 je 0x7d61fa
// 007d61ec  50                   push eax
// 007d61ed  ffd3                 call ebx
// 007d61ef  85c0                 test eax, eax
// 007d61f1  7407                 je 0x7d61fa
// 007d61f3  bf01000000           mov edi, 1
// 007d61f8  eb02                 jmp 0x7d61fc
// 007d61fa  33ff                 xor edi, edi
// 007d61fc  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 007d6202  85c0                 test eax, eax
// 007d6204  741b                 je 0x7d6221
// 007d6206  83782000             cmp dword ptr [eax + 0x20], 0
// 007d620a  7415                 je 0x7d6221
// 007d620c  8b4020               mov eax, dword ptr [eax + 0x20]
// 007d620f  50                   push eax
// 007d6210  ffd3                 call ebx
// 007d6212  85c0                 test eax, eax
// 007d6214  740b                 je 0x7d6221
// 007d6216  b801000000           mov eax, 1
// 007d621b  0bc7                 or eax, edi
// 007d621d  5f                   pop edi
// 007d621e  5e                   pop esi
// 007d621f  5b                   pop ebx
// 007d6220  c3                   ret 
// 007d6221  33c0                 xor eax, eax
// 007d6223  0bc7                 or eax, edi
// 007d6225  5f                   pop edi
// 007d6226  5e                   pop esi
// 007d6227  5b                   pop ebx
// 007d6228  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsEditMode@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
