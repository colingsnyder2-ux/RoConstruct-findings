// from server: 100% by auto
// roc 2008-06 00750ef0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750ef0
//
// 00750ef0  53                   push ebx
// 00750ef1  56                   push esi
// 00750ef2  57                   push edi
// 00750ef3  8bf1                 mov esi, ecx
// 00750ef5  e8b0b00600           call 0x7bbfaa
// 00750efa  8b1d7c2c8000         mov ebx, dword ptr [0x802c7c]
// 00750f00  33ff                 xor edi, edi
// 00750f02  8d462c               lea eax, [esi + 0x2c]
// 00750f05  50                   push eax
// 00750f06  c7069c478600         mov dword ptr [esi], 0x86479c
// 00750f0c  897e20               mov dword ptr [esi + 0x20], edi
// 00750f0f  897e24               mov dword ptr [esi + 0x24], edi
// 00750f12  897e4c               mov dword ptr [esi + 0x4c], edi
// 00750f15  897e50               mov dword ptr [esi + 0x50], edi
// 00750f18  897e54               mov dword ptr [esi + 0x54], edi
// 00750f1b  897e58               mov dword ptr [esi + 0x58], edi
// 00750f1e  897e5c               mov dword ptr [esi + 0x5c], edi
// 00750f21  897e60               mov dword ptr [esi + 0x60], edi
// 00750f24  c7466401000000       mov dword ptr [esi + 0x64], 1
// 00750f2b  ffd3                 call ebx
// 00750f2d  8d4e3c               lea ecx, [esi + 0x3c]
// 00750f30  51                   push ecx
// 00750f31  ffd3                 call ebx
// 00750f33  83c8ff               or eax, 0xffffffff
// 00750f36  897e68               mov dword ptr [esi + 0x68], edi
// 00750f39  897e70               mov dword ptr [esi + 0x70], edi
// 00750f3c  894628               mov dword ptr [esi + 0x28], eax
// 00750f3f  89466c               mov dword ptr [esi + 0x6c], eax
// 00750f42  5f                   pop edi
// 00750f43  8bc6                 mov eax, esi
// 00750f45  5e                   pop esi
// 00750f46  5b                   pop ebx
// 00750f47  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ??0CXTPReportRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
