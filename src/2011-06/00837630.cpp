// roc 2011-06 00837630  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837630
//
// 00837630  53                   push ebx
// 00837631  56                   push esi
// 00837632  8bd9                 mov ebx, ecx
// 00837634  ff15f819a400         call dword ptr [0xa419f8]
// 0083763a  50                   push eax
// 0083763b  e8e82cfdff           call 0x80a328
// 00837640  8bf0                 mov esi, eax
// 00837642  85f6                 test esi, esi
// 00837644  7503                 jne 0x837649
// 00837646  5e                   pop esi
// 00837647  5b                   pop ebx
// 00837648  c3                   ret 
// 00837649  8b4620               mov eax, dword ptr [esi + 0x20]
// 0083764c  57                   push edi
// 0083764d  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00837650  7440                 je 0x837692
// 00837652  8b3db819a400         mov edi, dword ptr [0xa419b8]
// 00837658  50                   push eax
// 00837659  ffd7                 call edi
// 0083765b  50                   push eax
// 0083765c  e8c72cfdff           call 0x80a328
// 00837661  85c0                 test eax, eax
// 00837663  7403                 je 0x837668
// 00837665  8b4020               mov eax, dword ptr [eax + 0x20]
// 00837668  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 0083766b  7425                 je 0x837692
// 0083766d  8b4638               mov eax, dword ptr [esi + 0x38]
// 00837670  85c0                 test eax, eax
// 00837672  7506                 jne 0x83767a
// 00837674  8b4620               mov eax, dword ptr [esi + 0x20]
// 00837677  50                   push eax
// 00837678  ffd7                 call edi
// 0083767a  50                   push eax
// 0083767b  e8a82cfdff           call 0x80a328
// 00837680  85c0                 test eax, eax
// 00837682  7403                 je 0x837687
// 00837684  8b4020               mov eax, dword ptr [eax + 0x20]
// 00837687  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 0083768a  7406                 je 0x837692
// 0083768c  5f                   pop edi
// 0083768d  5e                   pop esi
// 0083768e  33c0                 xor eax, eax
// 00837690  5b                   pop ebx
// 00837691  c3                   ret 
// 00837692  5f                   pop edi
// 00837693  5e                   pop esi
// 00837694  b801000000           mov eax, 1
// 00837699  5b                   pop ebx
// 0083769a  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ?HasFocus@CXTPReportControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
