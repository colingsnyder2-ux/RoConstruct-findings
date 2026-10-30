// roc 2009-12 0082dad0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082dad0
//
// 0082dad0  53                   push ebx
// 0082dad1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0082dad5  55                   push ebp
// 0082dad6  56                   push esi
// 0082dad7  57                   push edi
// 0082dad8  8bf1                 mov esi, ecx
// 0082dada  85db                 test ebx, ebx
// 0082dadc  7465                 je 0x82db43
// 0082dade  8b03                 mov eax, dword ptr [ebx]
// 0082dae0  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0082dae3  8bcb                 mov ecx, ebx
// 0082dae5  ffd2                 call edx
// 0082dae7  8bce                 mov ecx, esi
// 0082dae9  8bf8                 mov edi, eax
// 0082daeb  e830f1ffff           call 0x82cc20
// 0082daf0  48                   dec eax
// 0082daf1  3bf8                 cmp edi, eax
// 0082daf3  7d45                 jge 0x82db3a
// 0082daf5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0082daf9  8da42400000000       lea esp, [esp]
// 0082db00  8b06                 mov eax, dword ptr [esi]
// 0082db02  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082db05  47                   inc edi
// 0082db06  57                   push edi
// 0082db07  8bce                 mov ecx, esi
// 0082db09  ffd2                 call edx
// 0082db0b  8bd8                 mov ebx, eax
// 0082db0d  85ed                 test ebp, ebp
// 0082db0f  7429                 je 0x82db3a
// 0082db11  8b03                 mov eax, dword ptr [ebx]
// 0082db13  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0082db19  8bcb                 mov ecx, ebx
// 0082db1b  ffd2                 call edx
// 0082db1d  85c0                 test eax, eax
// 0082db1f  7419                 je 0x82db3a
// 0082db21  8b03                 mov eax, dword ptr [ebx]
// 0082db23  8b5078               mov edx, dword ptr [eax + 0x78]
// 0082db26  8bcb                 mov ecx, ebx
// 0082db28  ffd2                 call edx
// 0082db2a  85c0                 test eax, eax
// 0082db2c  740c                 je 0x82db3a
// 0082db2e  8bce                 mov ecx, esi
// 0082db30  e8ebf0ffff           call 0x82cc20
// 0082db35  48                   dec eax
// 0082db36  3bf8                 cmp edi, eax
// 0082db38  7cc6                 jl 0x82db00
// 0082db3a  5f                   pop edi
// 0082db3b  5e                   pop esi
// 0082db3c  5d                   pop ebp
// 0082db3d  8bc3                 mov eax, ebx
// 0082db3f  5b                   pop ebx
// 0082db40  c20800               ret 8
// 0082db43  e8d8f0ffff           call 0x82cc20
// 0082db48  85c0                 test eax, eax
// 0082db4a  7eee                 jle 0x82db3a
// 0082db4c  8b06                 mov eax, dword ptr [esi]
// 0082db4e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082db51  6a00                 push 0
// 0082db53  ffd2                 call edx
// 0082db55  5f                   pop edi
// 0082db56  5e                   pop esi
// 0082db57  5d                   pop ebp
// 0082db58  5b                   pop ebx
// 0082db59  c20800               ret 8
// copied from an identical function in another client (function ?GetNext@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp