// roc 2009-12 0082db60  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082db60
//
// 0082db60  53                   push ebx
// 0082db61  55                   push ebp
// 0082db62  56                   push esi
// 0082db63  57                   push edi
// 0082db64  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082db68  8bd9                 mov ebx, ecx
// 0082db6a  85ff                 test edi, edi
// 0082db6c  744e                 je 0x82dbbc
// 0082db6e  8b07                 mov eax, dword ptr [edi]
// 0082db70  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0082db73  8bcf                 mov ecx, edi
// 0082db75  ffd2                 call edx
// 0082db77  8bf0                 mov esi, eax
// 0082db79  85f6                 test esi, esi
// 0082db7b  7e36                 jle 0x82dbb3
// 0082db7d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0082db81  8b03                 mov eax, dword ptr [ebx]
// 0082db83  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082db86  4e                   dec esi
// 0082db87  56                   push esi
// 0082db88  8bcb                 mov ecx, ebx
// 0082db8a  ffd2                 call edx
// 0082db8c  8bf8                 mov edi, eax
// 0082db8e  85ed                 test ebp, ebp
// 0082db90  7421                 je 0x82dbb3
// 0082db92  8b07                 mov eax, dword ptr [edi]
// 0082db94  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0082db9a  8bcf                 mov ecx, edi
// 0082db9c  ffd2                 call edx
// 0082db9e  85c0                 test eax, eax
// 0082dba0  7411                 je 0x82dbb3
// 0082dba2  8b07                 mov eax, dword ptr [edi]
// 0082dba4  8b5078               mov edx, dword ptr [eax + 0x78]
// 0082dba7  8bcf                 mov ecx, edi
// 0082dba9  ffd2                 call edx
// 0082dbab  85c0                 test eax, eax
// 0082dbad  7404                 je 0x82dbb3
// 0082dbaf  85f6                 test esi, esi
// 0082dbb1  7fce                 jg 0x82db81
// 0082dbb3  8bc7                 mov eax, edi
// 0082dbb5  5f                   pop edi
// 0082dbb6  5e                   pop esi
// 0082dbb7  5d                   pop ebp
// 0082dbb8  5b                   pop ebx
// 0082dbb9  c20800               ret 8
// 0082dbbc  e85ff0ffff           call 0x82cc20
// 0082dbc1  85c0                 test eax, eax
// 0082dbc3  7eee                 jle 0x82dbb3
// 0082dbc5  8b03                 mov eax, dword ptr [ebx]
// 0082dbc7  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082dbca  6a00                 push 0
// 0082dbcc  ffd2                 call edx
// 0082dbce  5f                   pop edi
// 0082dbcf  5e                   pop esi
// 0082dbd0  5d                   pop ebp
// 0082dbd1  5b                   pop ebx
// 0082dbd2  c20800               ret 8
// copied from an identical function in another client (function ?GetPrev@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp