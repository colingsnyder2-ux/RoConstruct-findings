// roc 2008-06 006c5210  unit: CXTPPrintingDialog  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c5210
//
// 006c5210  53                   push ebx
// 006c5211  56                   push esi
// 006c5212  57                   push edi
// 006c5213  8bf1                 mov esi, ecx
// 006c5215  e84ebafdff           call 0x6a0c68
// 006c521a  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 006c5220  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006c5224  85c0                 test eax, eax
// 006c5226  7428                 je 0x6c5250
// 006c5228  83782000             cmp dword ptr [eax + 0x20], 0
// 006c522c  7422                 je 0x6c5250
// 006c522e  6a02                 push 2
// 006c5230  ff154c2d8000         call dword ptr [0x802d4c]
// 006c5236  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c523a  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 006c5240  6a01                 push 1
// 006c5242  53                   push ebx
// 006c5243  50                   push eax
// 006c5244  2bf8                 sub edi, eax
// 006c5246  6a00                 push 0
// 006c5248  57                   push edi
// 006c5249  e8feb7fdff           call 0x6a0a4c
// 006c524e  eb04                 jmp 0x6c5254
// 006c5250  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c5254  83be7403000000       cmp dword ptr [esi + 0x374], 0
// 006c525b  7431                 je 0x6c528e
// 006c525d  8b06                 mov eax, dword ptr [esi]
// 006c525f  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c5265  8bce                 mov ecx, esi
// 006c5267  ffd2                 call edx
// 006c5269  85c0                 test eax, eax
// 006c526b  7421                 je 0x6c528e
// 006c526d  83782000             cmp dword ptr [eax + 0x20], 0
// 006c5271  741b                 je 0x6c528e
// 006c5273  8b06                 mov eax, dword ptr [esi]
// 006c5275  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c527b  6a01                 push 1
// 006c527d  53                   push ebx
// 006c527e  57                   push edi
// 006c527f  6a00                 push 0
// 006c5281  6a00                 push 0
// 006c5283  8bce                 mov ecx, esi
// 006c5285  ffd2                 call edx
// 006c5287  8bc8                 mov ecx, eax
// 006c5289  e8beb7fdff           call 0x6a0a4c
// 006c528e  5f                   pop edi
// 006c528f  5e                   pop esi
// 006c5290  5b                   pop ebx
// 006c5291  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnSize@CXTPReportView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
