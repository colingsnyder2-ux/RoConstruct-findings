// roc 2011-06 0083cdf0  unit: CXTPReportHeader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083cdf0
//
// 0083cdf0  83ec14               sub esp, 0x14
// 0083cdf3  55                   push ebp
// 0083cdf4  8be9                 mov ebp, ecx
// 0083cdf6  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0083cdf9  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0083cdfc  2b4870               sub ecx, dword ptr [eax + 0x70]
// 0083cdff  83c070               add eax, 0x70
// 0083ce02  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 0083ce09  894c2404             mov dword ptr [esp + 4], ecx
// 0083ce0d  750c                 jne 0x83ce1b
// 0083ce0f  b8007d0000           mov eax, 0x7d00
// 0083ce14  5d                   pop ebp
// 0083ce15  83c414               add esp, 0x14
// 0083ce18  c20400               ret 4
// 0083ce1b  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0083ce1e  53                   push ebx
// 0083ce1f  56                   push esi
// 0083ce20  57                   push edi
// 0083ce21  33f6                 xor esi, esi
// 0083ce23  33ff                 xor edi, edi
// 0083ce25  397030               cmp dword ptr [eax + 0x30], esi
// 0083ce28  7e52                 jle 0x83ce7c
// 0083ce2a  8d9b00000000         lea ebx, [ebx]
// 0083ce30  85f6                 test esi, esi
// 0083ce32  7c0d                 jl 0x83ce41
// 0083ce34  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083ce37  7d08                 jge 0x83ce41
// 0083ce39  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0083ce3c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0083ce3f  eb02                 jmp 0x83ce43
// 0083ce41  33db                 xor ebx, ebx
// 0083ce43  8bcb                 mov ecx, ebx
// 0083ce45  e8262effff           call 0x82fc70
// 0083ce4a  85c0                 test eax, eax
// 0083ce4c  7425                 je 0x83ce73
// 0083ce4e  85ff                 test edi, edi
// 0083ce50  7e09                 jle 0x83ce5b
// 0083ce52  8bcb                 mov ecx, ebx
// 0083ce54  e84732ffff           call 0x8300a0
// 0083ce59  2bf8                 sub edi, eax
// 0083ce5b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083ce5f  3bd9                 cmp ebx, ecx
// 0083ce61  7510                 jne 0x83ce73
// 0083ce63  8d542414             lea edx, [esp + 0x14]
// 0083ce67  52                   push edx
// 0083ce68  e8932dffff           call 0x82fc00
// 0083ce6d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0083ce71  2b38                 sub edi, dword ptr [eax]
// 0083ce73  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0083ce76  46                   inc esi
// 0083ce77  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083ce7a  7cb4                 jl 0x83ce30
// 0083ce7c  8bc7                 mov eax, edi
// 0083ce7e  5f                   pop edi
// 0083ce7f  5e                   pop esi
// 0083ce80  5b                   pop ebx
// 0083ce81  5d                   pop ebp
// 0083ce82  83c414               add esp, 0x14
// 0083ce85  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
