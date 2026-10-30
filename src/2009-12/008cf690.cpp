// roc 2009-12 008cf690  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf690
//
// 008cf690  8b442408             mov eax, dword ptr [esp + 8]
// 008cf694  83ec10               sub esp, 0x10
// 008cf697  53                   push ebx
// 008cf698  55                   push ebp
// 008cf699  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008cf69f  8bd9                 mov ebx, ecx
// 008cf6a1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cf6a5  50                   push eax
// 008cf6a6  51                   push ecx
// 008cf6a7  8d5334               lea edx, [ebx + 0x34]
// 008cf6aa  52                   push edx
// 008cf6ab  ffd5                 call ebp
// 008cf6ad  85c0                 test eax, eax
// 008cf6af  7508                 jne 0x8cf6b9
// 008cf6b1  5d                   pop ebp
// 008cf6b2  5b                   pop ebx
// 008cf6b3  83c410               add esp, 0x10
// 008cf6b6  c20800               ret 8
// 008cf6b9  56                   push esi
// 008cf6ba  8d7324               lea esi, [ebx + 0x24]
// 008cf6bd  56                   push esi
// 008cf6be  ff1568cc9800         call dword ptr [0x98cc68]
// 008cf6c4  85c0                 test eax, eax
// 008cf6c6  751a                 jne 0x8cf6e2
// 008cf6c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 008cf6cc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008cf6d0  50                   push eax
// 008cf6d1  51                   push ecx
// 008cf6d2  56                   push esi
// 008cf6d3  ffd5                 call ebp
// 008cf6d5  85c0                 test eax, eax
// 008cf6d7  7509                 jne 0x8cf6e2
// 008cf6d9  5e                   pop esi
// 008cf6da  5d                   pop ebp
// 008cf6db  5b                   pop ebx
// 008cf6dc  83c410               add esp, 0x10
// 008cf6df  c20800               ret 8
// 008cf6e2  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008cf6e5  33f6                 xor esi, esi
// 008cf6e7  57                   push edi
// 008cf6e8  85c0                 test eax, eax
// 008cf6ea  7e68                 jle 0x8cf754
// 008cf6ec  8d642400             lea esp, [esp]
// 008cf6f0  85f6                 test esi, esi
// 008cf6f2  7c11                 jl 0x8cf705
// 008cf6f4  3bf0                 cmp esi, eax
// 008cf6f6  7d0d                 jge 0x8cf705
// 008cf6f8  3b735c               cmp esi, dword ptr [ebx + 0x5c]
// 008cf6fb  7d63                 jge 0x8cf760
// 008cf6fd  8b5358               mov edx, dword ptr [ebx + 0x58]
// 008cf700  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 008cf703  eb02                 jmp 0x8cf707
// 008cf705  33ff                 xor edi, edi
// 008cf707  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 008cf70a  8b4744               mov eax, dword ptr [edi + 0x44]
// 008cf70d  8b574c               mov edx, dword ptr [edi + 0x4c]
// 008cf710  89442410             mov dword ptr [esp + 0x10], eax
// 008cf714  8b4750               mov eax, dword ptr [edi + 0x50]
// 008cf717  894c2414             mov dword ptr [esp + 0x14], ecx
// 008cf71b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008cf71f  89542418             mov dword ptr [esp + 0x18], edx
// 008cf723  8b542424             mov edx, dword ptr [esp + 0x24]
// 008cf727  51                   push ecx
// 008cf728  89442420             mov dword ptr [esp + 0x20], eax
// 008cf72c  52                   push edx
// 008cf72d  8d442418             lea eax, [esp + 0x18]
// 008cf731  50                   push eax
// 008cf732  ffd5                 call ebp
// 008cf734  85c0                 test eax, eax
// 008cf736  7414                 je 0x8cf74c
// 008cf738  8bcf                 mov ecx, edi
// 008cf73a  e861acf4ff           call 0x81a3a0
// 008cf73f  85c0                 test eax, eax
// 008cf741  7409                 je 0x8cf74c
// 008cf743  e8a83ceaff           call 0x7733f0
// 008cf748  85c0                 test eax, eax
// 008cf74a  7519                 jne 0x8cf765
// 008cf74c  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008cf74f  46                   inc esi
// 008cf750  3bf0                 cmp esi, eax
// 008cf752  7c9c                 jl 0x8cf6f0
// 008cf754  5f                   pop edi
// 008cf755  5e                   pop esi
// 008cf756  5d                   pop ebp
// 008cf757  33c0                 xor eax, eax
// 008cf759  5b                   pop ebx
// 008cf75a  83c410               add esp, 0x10
// 008cf75d  c20800               ret 8
// 008cf760  e8a743f2ff           call 0x7f3b0c
// 008cf765  8bc7                 mov eax, edi
// 008cf767  5f                   pop edi
// 008cf768  5e                   pop esi
// 008cf769  5d                   pop ebp
// 008cf76a  5b                   pop ebx
// 008cf76b  83c410               add esp, 0x10
// 008cf76e  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPTabManager@@QBEPAVCXTPTabManagerItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp