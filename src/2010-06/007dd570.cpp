// roc 2010-06 007dd570  unit: CXTPReportHeader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dd570
//
// 007dd570  83ec14               sub esp, 0x14
// 007dd573  55                   push ebp
// 007dd574  8be9                 mov ebp, ecx
// 007dd576  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007dd579  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007dd57c  2b4870               sub ecx, dword ptr [eax + 0x70]
// 007dd57f  83c070               add eax, 0x70
// 007dd582  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 007dd589  894c2404             mov dword ptr [esp + 4], ecx
// 007dd58d  750c                 jne 0x7dd59b
// 007dd58f  b8007d0000           mov eax, 0x7d00
// 007dd594  5d                   pop ebp
// 007dd595  83c414               add esp, 0x14
// 007dd598  c20400               ret 4
// 007dd59b  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007dd59e  53                   push ebx
// 007dd59f  56                   push esi
// 007dd5a0  57                   push edi
// 007dd5a1  33f6                 xor esi, esi
// 007dd5a3  33ff                 xor edi, edi
// 007dd5a5  397030               cmp dword ptr [eax + 0x30], esi
// 007dd5a8  7e52                 jle 0x7dd5fc
// 007dd5aa  8d9b00000000         lea ebx, [ebx]
// 007dd5b0  85f6                 test esi, esi
// 007dd5b2  7c0d                 jl 0x7dd5c1
// 007dd5b4  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007dd5b7  7d08                 jge 0x7dd5c1
// 007dd5b9  8b402c               mov eax, dword ptr [eax + 0x2c]
// 007dd5bc  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 007dd5bf  eb02                 jmp 0x7dd5c3
// 007dd5c1  33db                 xor ebx, ebx
// 007dd5c3  8bcb                 mov ecx, ebx
// 007dd5c5  e8d6e5ffff           call 0x7dbba0
// 007dd5ca  85c0                 test eax, eax
// 007dd5cc  7425                 je 0x7dd5f3
// 007dd5ce  85ff                 test edi, edi
// 007dd5d0  7e09                 jle 0x7dd5db
// 007dd5d2  8bcb                 mov ecx, ebx
// 007dd5d4  e8f7e9ffff           call 0x7dbfd0
// 007dd5d9  2bf8                 sub edi, eax
// 007dd5db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007dd5df  3bd9                 cmp ebx, ecx
// 007dd5e1  7510                 jne 0x7dd5f3
// 007dd5e3  8d542414             lea edx, [esp + 0x14]
// 007dd5e7  52                   push edx
// 007dd5e8  e853e5ffff           call 0x7dbb40
// 007dd5ed  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007dd5f1  2b38                 sub edi, dword ptr [eax]
// 007dd5f3  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007dd5f6  46                   inc esi
// 007dd5f7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007dd5fa  7cb4                 jl 0x7dd5b0
// 007dd5fc  8bc7                 mov eax, edi
// 007dd5fe  5f                   pop edi
// 007dd5ff  5e                   pop esi
// 007dd600  5b                   pop ebx
// 007dd601  5d                   pop ebp
// 007dd602  83c414               add esp, 0x14
// 007dd605  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
