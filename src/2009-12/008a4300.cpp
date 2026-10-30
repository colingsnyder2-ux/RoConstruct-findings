// roc 2009-12 008a4300  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4300
//
// 008a4300  53                   push ebx
// 008a4301  56                   push esi
// 008a4302  57                   push edi
// 008a4303  8bf1                 mov esi, ecx
// 008a4305  e838210800           call 0x926442
// 008a430a  8b1d9cca9800         mov ebx, dword ptr [0x98ca9c]
// 008a4310  33ff                 xor edi, edi
// 008a4312  8d462c               lea eax, [esi + 0x2c]
// 008a4315  50                   push eax
// 008a4316  c7064c5ca000         mov dword ptr [esi], 0xa05c4c
// 008a431c  897e20               mov dword ptr [esi + 0x20], edi
// 008a431f  897e24               mov dword ptr [esi + 0x24], edi
// 008a4322  897e4c               mov dword ptr [esi + 0x4c], edi
// 008a4325  897e50               mov dword ptr [esi + 0x50], edi
// 008a4328  897e54               mov dword ptr [esi + 0x54], edi
// 008a432b  897e58               mov dword ptr [esi + 0x58], edi
// 008a432e  897e5c               mov dword ptr [esi + 0x5c], edi
// 008a4331  897e60               mov dword ptr [esi + 0x60], edi
// 008a4334  c7466401000000       mov dword ptr [esi + 0x64], 1
// 008a433b  ffd3                 call ebx
// 008a433d  8d4e3c               lea ecx, [esi + 0x3c]
// 008a4340  51                   push ecx
// 008a4341  ffd3                 call ebx
// 008a4343  83c8ff               or eax, 0xffffffff
// 008a4346  897e68               mov dword ptr [esi + 0x68], edi
// 008a4349  897e70               mov dword ptr [esi + 0x70], edi
// 008a434c  894628               mov dword ptr [esi + 0x28], eax
// 008a434f  89466c               mov dword ptr [esi + 0x6c], eax
// 008a4352  5f                   pop edi
// 008a4353  8bc6                 mov eax, esi
// 008a4355  5e                   pop esi
// 008a4356  5b                   pop ebx
// 008a4357  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ??0CXTPReportRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
