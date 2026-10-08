// roc 2010-06 00858440  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00858440
//
// 00858440  53                   push ebx
// 00858441  56                   push esi
// 00858442  57                   push edi
// 00858443  8bf1                 mov esi, ecx
// 00858445  e834491200           call 0x97cd7e
// 0085844a  8b1de4ba9e00         mov ebx, dword ptr [0x9ebae4]
// 00858450  33ff                 xor edi, edi
// 00858452  8d462c               lea eax, [esi + 0x2c]
// 00858455  50                   push eax
// 00858456  c706349fa600         mov dword ptr [esi], 0xa69f34
// 0085845c  897e20               mov dword ptr [esi + 0x20], edi
// 0085845f  897e24               mov dword ptr [esi + 0x24], edi
// 00858462  897e4c               mov dword ptr [esi + 0x4c], edi
// 00858465  897e50               mov dword ptr [esi + 0x50], edi
// 00858468  897e54               mov dword ptr [esi + 0x54], edi
// 0085846b  897e58               mov dword ptr [esi + 0x58], edi
// 0085846e  897e5c               mov dword ptr [esi + 0x5c], edi
// 00858471  897e60               mov dword ptr [esi + 0x60], edi
// 00858474  c7466401000000       mov dword ptr [esi + 0x64], 1
// 0085847b  ffd3                 call ebx
// 0085847d  8d4e3c               lea ecx, [esi + 0x3c]
// 00858480  51                   push ecx
// 00858481  ffd3                 call ebx
// 00858483  83c8ff               or eax, 0xffffffff
// 00858486  897e68               mov dword ptr [esi + 0x68], edi
// 00858489  897e70               mov dword ptr [esi + 0x70], edi
// 0085848c  894628               mov dword ptr [esi + 0x28], eax
// 0085848f  89466c               mov dword ptr [esi + 0x6c], eax
// 00858492  5f                   pop edi
// 00858493  8bc6                 mov eax, esi
// 00858495  5e                   pop esi
// 00858496  5b                   pop ebx
// 00858497  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ??0CXTPReportRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
