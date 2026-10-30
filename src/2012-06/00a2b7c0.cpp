// roc 2012-06 00a2b7c0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b7c0
//
// 00a2b7c0  53                   push ebx
// 00a2b7c1  56                   push esi
// 00a2b7c2  57                   push edi
// 00a2b7c3  8bf1                 mov esi, ecx
// 00a2b7c5  e8badd0600           call 0xa99584
// 00a2b7ca  8b1d903ab200         mov ebx, dword ptr [0xb23a90]
// 00a2b7d0  33ff                 xor edi, edi
// 00a2b7d2  8d462c               lea eax, [esi + 0x2c]
// 00a2b7d5  50                   push eax
// 00a2b7d6  c70694f8c100         mov dword ptr [esi], 0xc1f894
// 00a2b7dc  897e20               mov dword ptr [esi + 0x20], edi
// 00a2b7df  897e24               mov dword ptr [esi + 0x24], edi
// 00a2b7e2  897e4c               mov dword ptr [esi + 0x4c], edi
// 00a2b7e5  897e50               mov dword ptr [esi + 0x50], edi
// 00a2b7e8  897e54               mov dword ptr [esi + 0x54], edi
// 00a2b7eb  897e58               mov dword ptr [esi + 0x58], edi
// 00a2b7ee  897e5c               mov dword ptr [esi + 0x5c], edi
// 00a2b7f1  897e60               mov dword ptr [esi + 0x60], edi
// 00a2b7f4  c7466401000000       mov dword ptr [esi + 0x64], 1
// 00a2b7fb  ffd3                 call ebx
// 00a2b7fd  8d4e3c               lea ecx, [esi + 0x3c]
// 00a2b800  51                   push ecx
// 00a2b801  ffd3                 call ebx
// 00a2b803  83c8ff               or eax, 0xffffffff
// 00a2b806  897e68               mov dword ptr [esi + 0x68], edi
// 00a2b809  897e70               mov dword ptr [esi + 0x70], edi
// 00a2b80c  894628               mov dword ptr [esi + 0x28], eax
// 00a2b80f  89466c               mov dword ptr [esi + 0x6c], eax
// 00a2b812  5f                   pop edi
// 00a2b813  8bc6                 mov eax, esi
// 00a2b815  5e                   pop esi
// 00a2b816  5b                   pop ebx
// 00a2b817  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ??0CXTPReportRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
