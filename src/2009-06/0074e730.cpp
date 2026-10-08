// roc 2009-06 0074e730  unit: CXTPReportHeader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074e730
//
// 0074e730  83ec14               sub esp, 0x14
// 0074e733  55                   push ebp
// 0074e734  8be9                 mov ebp, ecx
// 0074e736  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0074e739  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0074e73c  2b4870               sub ecx, dword ptr [eax + 0x70]
// 0074e73f  83c070               add eax, 0x70
// 0074e742  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 0074e749  894c2404             mov dword ptr [esp + 4], ecx
// 0074e74d  750c                 jne 0x74e75b
// 0074e74f  b8007d0000           mov eax, 0x7d00
// 0074e754  5d                   pop ebp
// 0074e755  83c414               add esp, 0x14
// 0074e758  c20400               ret 4
// 0074e75b  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074e75e  53                   push ebx
// 0074e75f  56                   push esi
// 0074e760  57                   push edi
// 0074e761  33f6                 xor esi, esi
// 0074e763  33ff                 xor edi, edi
// 0074e765  397030               cmp dword ptr [eax + 0x30], esi
// 0074e768  7e52                 jle 0x74e7bc
// 0074e76a  8d9b00000000         lea ebx, [ebx]
// 0074e770  85f6                 test esi, esi
// 0074e772  7c0d                 jl 0x74e781
// 0074e774  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074e777  7d08                 jge 0x74e781
// 0074e779  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0074e77c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0074e77f  eb02                 jmp 0x74e783
// 0074e781  33db                 xor ebx, ebx
// 0074e783  8bcb                 mov ecx, ebx
// 0074e785  e8c6e5ffff           call 0x74cd50
// 0074e78a  85c0                 test eax, eax
// 0074e78c  7425                 je 0x74e7b3
// 0074e78e  85ff                 test edi, edi
// 0074e790  7e09                 jle 0x74e79b
// 0074e792  8bcb                 mov ecx, ebx
// 0074e794  e8f7e9ffff           call 0x74d190
// 0074e799  2bf8                 sub edi, eax
// 0074e79b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0074e79f  3bd9                 cmp ebx, ecx
// 0074e7a1  7510                 jne 0x74e7b3
// 0074e7a3  8d542414             lea edx, [esp + 0x14]
// 0074e7a7  52                   push edx
// 0074e7a8  e833e5ffff           call 0x74cce0
// 0074e7ad  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0074e7b1  2b38                 sub edi, dword ptr [eax]
// 0074e7b3  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074e7b6  46                   inc esi
// 0074e7b7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074e7ba  7cb4                 jl 0x74e770
// 0074e7bc  8bc7                 mov eax, edi
// 0074e7be  5f                   pop edi
// 0074e7bf  5e                   pop esi
// 0074e7c0  5b                   pop ebx
// 0074e7c1  5d                   pop ebp
// 0074e7c2  83c414               add esp, 0x14
// 0074e7c5  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
