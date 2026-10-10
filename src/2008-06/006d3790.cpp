// roc 2008-06 006d3790  unit: CXTPReportControl  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d3790
//
// 006d3790  83ec08               sub esp, 8
// 006d3793  53                   push ebx
// 006d3794  8b99e0000000         mov ebx, dword ptr [ecx + 0xe0]
// 006d379a  894c2408             mov dword ptr [esp + 8], ecx
// 006d379e  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 006d37a4  894c2404             mov dword ptr [esp + 4], ecx
// 006d37a8  85db                 test ebx, ebx
// 006d37aa  7463                 je 0x6d380f
// 006d37ac  85c9                 test ecx, ecx
// 006d37ae  745f                 je 0x6d380f
// 006d37b0  55                   push ebp
// 006d37b1  57                   push edi
// 006d37b2  e8b9760000           call 0x6dae70
// 006d37b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d37bb  e890680000           call 0x6da050
// 006d37c0  8be8                 mov ebp, eax
// 006d37c2  33ff                 xor edi, edi
// 006d37c4  85ed                 test ebp, ebp
// 006d37c6  7e45                 jle 0x6d380d
// 006d37c8  56                   push esi
// 006d37c9  8da42400000000       lea esp, [esp]
// 006d37d0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d37d4  57                   push edi
// 006d37d5  e846410000           call 0x6d7920
// 006d37da  8b13                 mov edx, dword ptr [ebx]
// 006d37dc  50                   push eax
// 006d37dd  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006d37e0  8bcb                 mov ecx, ebx
// 006d37e2  ffd0                 call eax
// 006d37e4  8bf0                 mov esi, eax
// 006d37e6  85f6                 test esi, esi
// 006d37e8  741d                 je 0x6d3807
// 006d37ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d37ee  56                   push esi
// 006d37ef  e88c790000           call 0x6db180
// 006d37f4  8d4dff               lea ecx, [ebp - 1]
// 006d37f7  3bf9                 cmp edi, ecx
// 006d37f9  750c                 jne 0x6d3807
// 006d37fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d37ff  6a01                 push 1
// 006d3801  56                   push esi
// 006d3802  e849ecffff           call 0x6d2450
// 006d3807  47                   inc edi
// 006d3808  3bfd                 cmp edi, ebp
// 006d380a  7cc4                 jl 0x6d37d0
// 006d380c  5e                   pop esi
// 006d380d  5f                   pop edi
// 006d380e  5d                   pop ebp
// 006d380f  5b                   pop ebx
// 006d3810  83c408               add esp, 8
// 006d3813  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_SelectRows@CXTPReportControl@@IAEXPAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
