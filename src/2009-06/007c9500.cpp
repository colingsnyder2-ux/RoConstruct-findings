// roc 2009-06 007c9500  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9500
//
// 007c9500  53                   push ebx
// 007c9501  56                   push esi
// 007c9502  57                   push edi
// 007c9503  8bf1                 mov esi, ecx
// 007c9505  e8202a0800           call 0x84bf2a
// 007c950a  8b1dc8ee8900         mov ebx, dword ptr [0x89eec8]
// 007c9510  33ff                 xor edi, edi
// 007c9512  8d462c               lea eax, [esi + 0x2c]
// 007c9515  50                   push eax
// 007c9516  c706d4579000         mov dword ptr [esi], 0x9057d4
// 007c951c  897e20               mov dword ptr [esi + 0x20], edi
// 007c951f  897e24               mov dword ptr [esi + 0x24], edi
// 007c9522  897e4c               mov dword ptr [esi + 0x4c], edi
// 007c9525  897e50               mov dword ptr [esi + 0x50], edi
// 007c9528  897e54               mov dword ptr [esi + 0x54], edi
// 007c952b  897e58               mov dword ptr [esi + 0x58], edi
// 007c952e  897e5c               mov dword ptr [esi + 0x5c], edi
// 007c9531  897e60               mov dword ptr [esi + 0x60], edi
// 007c9534  c7466401000000       mov dword ptr [esi + 0x64], 1
// 007c953b  ffd3                 call ebx
// 007c953d  8d4e3c               lea ecx, [esi + 0x3c]
// 007c9540  51                   push ecx
// 007c9541  ffd3                 call ebx
// 007c9543  83c8ff               or eax, 0xffffffff
// 007c9546  897e68               mov dword ptr [esi + 0x68], edi
// 007c9549  897e70               mov dword ptr [esi + 0x70], edi
// 007c954c  894628               mov dword ptr [esi + 0x28], eax
// 007c954f  89466c               mov dword ptr [esi + 0x6c], eax
// 007c9552  5f                   pop edi
// 007c9553  8bc6                 mov eax, esi
// 007c9555  5e                   pop esi
// 007c9556  5b                   pop ebx
// 007c9557  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ??0CXTPReportRow@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
