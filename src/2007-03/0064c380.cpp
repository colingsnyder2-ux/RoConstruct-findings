// roc 2007-03 0064c380  unit: seg_00640000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064c380
//
// 0064c380  83ec14               sub esp, 0x14
// 0064c383  55                   push ebp
// 0064c384  8be9                 mov ebp, ecx
// 0064c386  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0064c389  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0064c38c  2b4870               sub ecx, dword ptr [eax + 0x70]
// 0064c38f  83c070               add eax, 0x70
// 0064c392  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 0064c399  894c2404             mov dword ptr [esp + 4], ecx
// 0064c39d  750c                 jne 0x64c3ab
// 0064c39f  b8007d0000           mov eax, 0x7d00
// 0064c3a4  5d                   pop ebp
// 0064c3a5  83c414               add esp, 0x14
// 0064c3a8  c20400               ret 4
// 0064c3ab  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0064c3ae  53                   push ebx
// 0064c3af  56                   push esi
// 0064c3b0  57                   push edi
// 0064c3b1  33f6                 xor esi, esi
// 0064c3b3  33ff                 xor edi, edi
// 0064c3b5  397030               cmp dword ptr [eax + 0x30], esi
// 0064c3b8  7e54                 jle 0x64c40e
// 0064c3ba  8d9b00000000         lea ebx, [ebx]
// 0064c3c0  85f6                 test esi, esi
// 0064c3c2  7c0d                 jl 0x64c3d1
// 0064c3c4  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0064c3c7  7d08                 jge 0x64c3d1
// 0064c3c9  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0064c3cc  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0064c3cf  eb02                 jmp 0x64c3d3
// 0064c3d1  33db                 xor ebx, ebx
// 0064c3d3  8bcb                 mov ecx, ebx
// 0064c3d5  e8a6e5ffff           call 0x64a980
// 0064c3da  85c0                 test eax, eax
// 0064c3dc  7425                 je 0x64c403
// 0064c3de  85ff                 test edi, edi
// 0064c3e0  7e09                 jle 0x64c3eb
// 0064c3e2  8bcb                 mov ecx, ebx
// 0064c3e4  e887e9ffff           call 0x64ad70
// 0064c3e9  2bf8                 sub edi, eax
// 0064c3eb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064c3ef  3bd9                 cmp ebx, ecx
// 0064c3f1  7510                 jne 0x64c403
// 0064c3f3  8d542414             lea edx, [esp + 0x14]
// 0064c3f7  52                   push edx
// 0064c3f8  e8b3f70200           call 0x67bbb0
// 0064c3fd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064c401  2b38                 sub edi, dword ptr [eax]
// 0064c403  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0064c406  83c601               add esi, 1
// 0064c409  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0064c40c  7cb2                 jl 0x64c3c0
// 0064c40e  8bc7                 mov eax, edi
// 0064c410  5f                   pop edi
// 0064c411  5e                   pop esi
// 0064c412  5b                   pop ebx
// 0064c413  5d                   pop ebp
// 0064c414  83c414               add esp, 0x14
// 0064c417  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
