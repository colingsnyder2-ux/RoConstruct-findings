// roc 2009-12 00826ce0  unit: CXTPReportControl  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826ce0
//
// 00826ce0  83ec08               sub esp, 8
// 00826ce3  53                   push ebx
// 00826ce4  8b99e0000000         mov ebx, dword ptr [ecx + 0xe0]
// 00826cea  894c2408             mov dword ptr [esp + 8], ecx
// 00826cee  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00826cf4  894c2404             mov dword ptr [esp + 4], ecx
// 00826cf8  85db                 test ebx, ebx
// 00826cfa  7463                 je 0x826d5f
// 00826cfc  85c9                 test ecx, ecx
// 00826cfe  745f                 je 0x826d5f
// 00826d00  55                   push ebp
// 00826d01  57                   push edi
// 00826d02  e899770000           call 0x82e4a0
// 00826d07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00826d0b  e8105f0000           call 0x82cc20
// 00826d10  8be8                 mov ebp, eax
// 00826d12  33ff                 xor edi, edi
// 00826d14  85ed                 test ebp, ebp
// 00826d16  7e45                 jle 0x826d5d
// 00826d18  56                   push esi
// 00826d19  8da42400000000       lea esp, [esp]
// 00826d20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00826d24  57                   push edi
// 00826d25  e8065f0000           call 0x82cc30
// 00826d2a  8b13                 mov edx, dword ptr [ebx]
// 00826d2c  50                   push eax
// 00826d2d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00826d30  8bcb                 mov ecx, ebx
// 00826d32  ffd0                 call eax
// 00826d34  8bf0                 mov esi, eax
// 00826d36  85f6                 test esi, esi
// 00826d38  741d                 je 0x826d57
// 00826d3a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00826d3e  56                   push esi
// 00826d3f  e86c7a0000           call 0x82e7b0
// 00826d44  8d4dff               lea ecx, [ebp - 1]
// 00826d47  3bf9                 cmp edi, ecx
// 00826d49  750c                 jne 0x826d57
// 00826d4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00826d4f  6a01                 push 1
// 00826d51  56                   push esi
// 00826d52  e849ecffff           call 0x8259a0
// 00826d57  47                   inc edi
// 00826d58  3bfd                 cmp edi, ebp
// 00826d5a  7cc4                 jl 0x826d20
// 00826d5c  5e                   pop esi
// 00826d5d  5f                   pop edi
// 00826d5e  5d                   pop ebp
// 00826d5f  5b                   pop ebx
// 00826d60  83c408               add esp, 8
// 00826d63  c20400               ret 4
// copied from an identical function in another client (function ?_SelectRows@CXTPReportControl@@IAEXPAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp