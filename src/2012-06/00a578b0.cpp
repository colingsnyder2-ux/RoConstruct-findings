// roc 2012-06 00a578b0  unit: VCEdit::?$CXTMaskEditT  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a578b0
//
// 00a578b0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a578b3  50                   push eax
// 00a578b4  ff15583ab200         call dword ptr [0xb23a58]
// 00a578ba  85c0                 test eax, eax
// 00a578bc  7503                 jne 0xa578c1
// 00a578be  c20400               ret 4
// 00a578c1  56                   push esi
// 00a578c2  57                   push edi
// 00a578c3  ff15703ab200         call dword ptr [0xb23a70]
// 00a578c9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a578cd  8bcf                 mov ecx, edi
// 00a578cf  ff155846b200         call dword ptr [0xb24658]
// 00a578d5  40                   inc eax
// 00a578d6  50                   push eax
// 00a578d7  6a02                 push 2
// 00a578d9  ff155822b200         call dword ptr [0xb22258]
// 00a578df  8bf0                 mov esi, eax
// 00a578e1  85f6                 test esi, esi
// 00a578e3  750d                 jne 0xa578f2
// 00a578e5  ff15643ab200         call dword ptr [0xb23a64]
// 00a578eb  5f                   pop edi
// 00a578ec  33c0                 xor eax, eax
// 00a578ee  5e                   pop esi
// 00a578ef  c20400               ret 4
// 00a578f2  53                   push ebx
// 00a578f3  55                   push ebp
// 00a578f4  56                   push esi
// 00a578f5  ff155422b200         call dword ptr [0xb22254]
// 00a578fb  8bcf                 mov ecx, edi
// 00a578fd  8bd8                 mov ebx, eax
// 00a578ff  ff159847b200         call dword ptr [0xb24798]
// 00a57905  8bcf                 mov ecx, edi
// 00a57907  8be8                 mov ebp, eax
// 00a57909  ff155846b200         call dword ptr [0xb24658]
// 00a5790f  40                   inc eax
// 00a57910  55                   push ebp
// 00a57911  50                   push eax
// 00a57912  53                   push ebx
// 00a57913  ff15d82ab200         call dword ptr [0xb22ad8]
// 00a57919  83c40c               add esp, 0xc
// 00a5791c  56                   push esi
// 00a5791d  ff155022b200         call dword ptr [0xb22250]
// 00a57923  56                   push esi
// 00a57924  6a01                 push 1
// 00a57926  ff156c3ab200         call dword ptr [0xb23a6c]
// 00a5792c  ff15643ab200         call dword ptr [0xb23a64]
// 00a57932  5d                   pop ebp
// 00a57933  f7d8                 neg eax
// 00a57935  5b                   pop ebx
// 00a57936  1bc0                 sbb eax, eax
// 00a57938  5f                   pop edi
// 00a57939  f7d8                 neg eax
// 00a5793b  5e                   pop esi
// 00a5793c  c20400               ret 4
// copied from an identical function in another client (function ?CopyToClipboard@?$CXTMaskEditT@VCEdit@@@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp