// roc 2012-06 009b5410  unit: CXTPReportHeader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b5410
//
// 009b5410  83ec14               sub esp, 0x14
// 009b5413  55                   push ebp
// 009b5414  8be9                 mov ebp, ecx
// 009b5416  8b4524               mov eax, dword ptr [ebp + 0x24]
// 009b5419  8b4878               mov ecx, dword ptr [eax + 0x78]
// 009b541c  2b4870               sub ecx, dword ptr [eax + 0x70]
// 009b541f  83c070               add eax, 0x70
// 009b5422  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 009b5429  894c2404             mov dword ptr [esp + 4], ecx
// 009b542d  750c                 jne 0x9b543b
// 009b542f  b8007d0000           mov eax, 0x7d00
// 009b5434  5d                   pop ebp
// 009b5435  83c414               add esp, 0x14
// 009b5438  c20400               ret 4
// 009b543b  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009b543e  53                   push ebx
// 009b543f  56                   push esi
// 009b5440  57                   push edi
// 009b5441  33f6                 xor esi, esi
// 009b5443  33ff                 xor edi, edi
// 009b5445  397030               cmp dword ptr [eax + 0x30], esi
// 009b5448  7e52                 jle 0x9b549c
// 009b544a  8d9b00000000         lea ebx, [ebx]
// 009b5450  85f6                 test esi, esi
// 009b5452  7c0d                 jl 0x9b5461
// 009b5454  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b5457  7d08                 jge 0x9b5461
// 009b5459  8b402c               mov eax, dword ptr [eax + 0x2c]
// 009b545c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 009b545f  eb02                 jmp 0x9b5463
// 009b5461  33db                 xor ebx, ebx
// 009b5463  8bcb                 mov ecx, ebx
// 009b5465  e8c67f0800           call 0xa3d430
// 009b546a  85c0                 test eax, eax
// 009b546c  7425                 je 0x9b5493
// 009b546e  85ff                 test edi, edi
// 009b5470  7e09                 jle 0x9b547b
// 009b5472  8bcb                 mov ecx, ebx
// 009b5474  e81732ffff           call 0x9a8690
// 009b5479  2bf8                 sub edi, eax
// 009b547b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b547f  3bd9                 cmp ebx, ecx
// 009b5481  7510                 jne 0x9b5493
// 009b5483  8d542414             lea edx, [esp + 0x14]
// 009b5487  52                   push edx
// 009b5488  e8732dffff           call 0x9a8200
// 009b548d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009b5491  2b38                 sub edi, dword ptr [eax]
// 009b5493  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009b5496  46                   inc esi
// 009b5497  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b549a  7cb4                 jl 0x9b5450
// 009b549c  8bc7                 mov eax, edi
// 009b549e  5f                   pop edi
// 009b549f  5e                   pop esi
// 009b54a0  5b                   pop ebx
// 009b54a1  5d                   pop ebp
// 009b54a2  83c414               add esp, 0x14
// 009b54a5  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
