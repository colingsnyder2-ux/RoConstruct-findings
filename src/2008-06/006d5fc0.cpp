// roc 2008-06 006d5fc0  unit: CXTPReportHeader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d5fc0
//
// 006d5fc0  83ec14               sub esp, 0x14
// 006d5fc3  55                   push ebp
// 006d5fc4  8be9                 mov ebp, ecx
// 006d5fc6  8b4524               mov eax, dword ptr [ebp + 0x24]
// 006d5fc9  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006d5fcc  2b4870               sub ecx, dword ptr [eax + 0x70]
// 006d5fcf  83c070               add eax, 0x70
// 006d5fd2  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 006d5fd9  894c2404             mov dword ptr [esp + 4], ecx
// 006d5fdd  750c                 jne 0x6d5feb
// 006d5fdf  b8007d0000           mov eax, 0x7d00
// 006d5fe4  5d                   pop ebp
// 006d5fe5  83c414               add esp, 0x14
// 006d5fe8  c20400               ret 4
// 006d5feb  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006d5fee  53                   push ebx
// 006d5fef  56                   push esi
// 006d5ff0  57                   push edi
// 006d5ff1  33f6                 xor esi, esi
// 006d5ff3  33ff                 xor edi, edi
// 006d5ff5  397030               cmp dword ptr [eax + 0x30], esi
// 006d5ff8  7e52                 jle 0x6d604c
// 006d5ffa  8d9b00000000         lea ebx, [ebx]
// 006d6000  85f6                 test esi, esi
// 006d6002  7c0d                 jl 0x6d6011
// 006d6004  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d6007  7d08                 jge 0x6d6011
// 006d6009  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006d600c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006d600f  eb02                 jmp 0x6d6013
// 006d6011  33db                 xor ebx, ebx
// 006d6013  8bcb                 mov ecx, ebx
// 006d6015  e8c6e5ffff           call 0x6d45e0
// 006d601a  85c0                 test eax, eax
// 006d601c  7425                 je 0x6d6043
// 006d601e  85ff                 test edi, edi
// 006d6020  7e09                 jle 0x6d602b
// 006d6022  8bcb                 mov ecx, ebx
// 006d6024  e8f7e9ffff           call 0x6d4a20
// 006d6029  2bf8                 sub edi, eax
// 006d602b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006d602f  3bd9                 cmp ebx, ecx
// 006d6031  7510                 jne 0x6d6043
// 006d6033  8d542414             lea edx, [esp + 0x14]
// 006d6037  52                   push edx
// 006d6038  e843e5ffff           call 0x6d4580
// 006d603d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006d6041  2b38                 sub edi, dword ptr [eax]
// 006d6043  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006d6046  46                   inc esi
// 006d6047  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d604a  7cb4                 jl 0x6d6000
// 006d604c  8bc7                 mov eax, edi
// 006d604e  5f                   pop edi
// 006d604f  5e                   pop esi
// 006d6050  5b                   pop ebx
// 006d6051  5d                   pop ebp
// 006d6052  83c414               add esp, 0x14
// 006d6055  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
