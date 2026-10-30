// roc 2009-12 00819ba0  unit: CRobloxReportView  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819ba0
//
// 00819ba0  83ec08               sub esp, 8
// 00819ba3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00819ba7  8b11                 mov edx, dword ptr [ecx]
// 00819ba9  53                   push ebx
// 00819baa  55                   push ebp
// 00819bab  56                   push esi
// 00819bac  8944240c             mov dword ptr [esp + 0xc], eax
// 00819bb0  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00819bb6  57                   push edi
// 00819bb7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00819bbb  ffd0                 call eax
// 00819bbd  837c243000           cmp dword ptr [esp + 0x30], 0
// 00819bc2  7408                 je 0x819bcc
// 00819bc4  8b98f8000000         mov ebx, dword ptr [eax + 0xf8]
// 00819bca  eb06                 jmp 0x819bd2
// 00819bcc  8b98fc000000         mov ebx, dword ptr [eax + 0xfc]
// 00819bd2  8bcb                 mov ecx, ebx
// 00819bd4  33ed                 xor ebp, ebp
// 00819bd6  e845300100           call 0x82cc20
// 00819bdb  85c0                 test eax, eax
// 00819bdd  7e77                 jle 0x819c56
// 00819bdf  90                   nop 
// 00819be0  8b13                 mov edx, dword ptr [ebx]
// 00819be2  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00819be5  55                   push ebp
// 00819be6  8bcb                 mov ecx, ebx
// 00819be8  ffd0                 call eax
// 00819bea  8bf8                 mov edi, eax
// 00819bec  8b442428             mov eax, dword ptr [esp + 0x28]
// 00819bf0  2b442420             sub eax, dword ptr [esp + 0x20]
// 00819bf4  8b17                 mov edx, dword ptr [edi]
// 00819bf6  8b5268               mov edx, dword ptr [edx + 0x68]
// 00819bf9  50                   push eax
// 00819bfa  8b442420             mov eax, dword ptr [esp + 0x20]
// 00819bfe  50                   push eax
// 00819bff  8bcf                 mov ecx, edi
// 00819c01  ffd2                 call edx
// 00819c03  8b542410             mov edx, dword ptr [esp + 0x10]
// 00819c07  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00819c0b  8d3410               lea esi, [eax + edx]
// 00819c0e  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 00819c12  7f42                 jg 0x819c56
// 00819c14  8b442414             mov eax, dword ptr [esp + 0x14]
// 00819c18  8b10                 mov edx, dword ptr [eax]
// 00819c1a  8b92ac010000         mov edx, dword ptr [edx + 0x1ac]
// 00819c20  6a00                 push 0
// 00819c22  83ec10               sub esp, 0x10
// 00819c25  8bc4                 mov eax, esp
// 00819c27  8908                 mov dword ptr [eax], ecx
// 00819c29  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00819c2d  894804               mov dword ptr [eax + 4], ecx
// 00819c30  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00819c34  894808               mov dword ptr [eax + 8], ecx
// 00819c37  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00819c3b  89700c               mov dword ptr [eax + 0xc], esi
// 00819c3e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00819c42  57                   push edi
// 00819c43  50                   push eax
// 00819c44  ffd2                 call edx
// 00819c46  8bcb                 mov ecx, ebx
// 00819c48  89742410             mov dword ptr [esp + 0x10], esi
// 00819c4c  45                   inc ebp
// 00819c4d  e8ce2f0100           call 0x82cc20
// 00819c52  3be8                 cmp ebp, eax
// 00819c54  7c8a                 jl 0x819be0
// 00819c56  8b442410             mov eax, dword ptr [esp + 0x10]
// 00819c5a  2b442424             sub eax, dword ptr [esp + 0x24]
// 00819c5e  5f                   pop edi
// 00819c5f  5e                   pop esi
// 00819c60  5d                   pop ebp
// 00819c61  5b                   pop ebx
// 00819c62  83c408               add esp, 8
// 00819c65  c21800               ret 0x18
// copied from an identical function in another client (function ?PrintFixedRows@CXTPReportView@@IAEHPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp