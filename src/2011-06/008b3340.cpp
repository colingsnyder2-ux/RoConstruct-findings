// roc 2011-06 008b3340  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b3340
//
// 008b3340  53                   push ebx
// 008b3341  56                   push esi
// 008b3342  57                   push edi
// 008b3343  8bf1                 mov esi, ecx
// 008b3345  e880921100           call 0x9cc5ca
// 008b334a  8b1dac19a400         mov ebx, dword ptr [0xa419ac]
// 008b3350  33ff                 xor edi, edi
// 008b3352  8d462c               lea eax, [esi + 0x2c]
// 008b3355  50                   push eax
// 008b3356  c7060442ad00         mov dword ptr [esi], 0xad4204
// 008b335c  897e20               mov dword ptr [esi + 0x20], edi
// 008b335f  897e24               mov dword ptr [esi + 0x24], edi
// 008b3362  897e4c               mov dword ptr [esi + 0x4c], edi
// 008b3365  897e50               mov dword ptr [esi + 0x50], edi
// 008b3368  897e54               mov dword ptr [esi + 0x54], edi
// 008b336b  897e58               mov dword ptr [esi + 0x58], edi
// 008b336e  897e5c               mov dword ptr [esi + 0x5c], edi
// 008b3371  897e60               mov dword ptr [esi + 0x60], edi
// 008b3374  c7466401000000       mov dword ptr [esi + 0x64], 1
// 008b337b  ffd3                 call ebx
// 008b337d  8d4e3c               lea ecx, [esi + 0x3c]
// 008b3380  51                   push ecx
// 008b3381  ffd3                 call ebx
// 008b3383  83c8ff               or eax, 0xffffffff
// 008b3386  897e68               mov dword ptr [esi + 0x68], edi
// 008b3389  897e70               mov dword ptr [esi + 0x70], edi
// 008b338c  894628               mov dword ptr [esi + 0x28], eax
// 008b338f  89466c               mov dword ptr [esi + 0x6c], eax
// 008b3392  5f                   pop edi
// 008b3393  8bc6                 mov eax, esi
// 008b3395  5e                   pop esi
// 008b3396  5b                   pop ebx
// 008b3397  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ??0CXTPReportRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
