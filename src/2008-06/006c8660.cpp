// roc 2008-06 006c8660  unit: CInstanceRecord::CNameItem  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8660
//
// 006c8660  83ec08               sub esp, 8
// 006c8663  55                   push ebp
// 006c8664  56                   push esi
// 006c8665  8b742414             mov esi, dword ptr [esp + 0x14]
// 006c8669  8b6e04               mov ebp, dword ptr [esi + 4]
// 006c866c  57                   push edi
// 006c866d  8bf9                 mov edi, ecx
// 006c866f  8b07                 mov eax, dword ptr [edi]
// 006c8671  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006c8677  56                   push esi
// 006c8678  ffd2                 call edx
// 006c867a  85c0                 test eax, eax
// 006c867c  0f84b8000000         je 0x6c873a
// 006c8682  83bddc01000000       cmp dword ptr [ebp + 0x1dc], 0
// 006c8689  0f85ab000000         jne 0x6c873a
// 006c868f  8b8524020000         mov eax, dword ptr [ebp + 0x224]
// 006c8695  397864               cmp dword ptr [eax + 0x64], edi
// 006c8698  0f849c000000         je 0x6c873a
// 006c869e  53                   push ebx
// 006c869f  56                   push esi
// 006c86a0  8bcd                 mov ecx, ebp
// 006c86a2  e8398f0000           call 0x6d15e0
// 006c86a7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006c86aa  8b5628               mov edx, dword ptr [esi + 0x28]
// 006c86ad  8d442410             lea eax, [esp + 0x10]
// 006c86b1  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c86b5  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 006c86b8  50                   push eax
// 006c86b9  51                   push ecx
// 006c86ba  8954241c             mov dword ptr [esp + 0x1c], edx
// 006c86be  ff15802d8000         call dword ptr [0x802d80]
// 006c86c4  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c86c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c86cc  52                   push edx
// 006c86cd  50                   push eax
// 006c86ce  ff15a42b8000         call dword ptr [0x802ba4]
// 006c86d4  50                   push eax
// 006c86d5  e80485fdff           call 0x6a0bde
// 006c86da  50                   push eax
// 006c86db  e8804b0800           call 0x74d260
// 006c86e0  50                   push eax
// 006c86e1  e84085fdff           call 0x6a0c26
// 006c86e6  8bd8                 mov ebx, eax
// 006c86e8  83c408               add esp, 8
// 006c86eb  85db                 test ebx, ebx
// 006c86ed  744a                 je 0x6c8739
// 006c86ef  397b64               cmp dword ptr [ebx + 0x64], edi
// 006c86f2  7545                 jne 0x6c8739
// 006c86f4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006c86f7  51                   push ecx
// 006c86f8  8bcf                 mov ecx, edi
// 006c86fa  e801f9ffff           call 0x6c8000
// 006c86ff  83784000             cmp dword ptr [eax + 0x40], 0
// 006c8703  7428                 je 0x6c872d
// 006c8705  8b5320               mov edx, dword ptr [ebx + 0x20]
// 006c8708  6aff                 push -1
// 006c870a  6a00                 push 0
// 006c870c  68b1000000           push 0xb1
// 006c8711  52                   push edx
// 006c8712  ff15142e8000         call dword ptr [0x802e14]
// 006c8718  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006c871b  6a00                 push 0
// 006c871d  6a00                 push 0
// 006c871f  68b7000000           push 0xb7
// 006c8724  50                   push eax
// 006c8725  ff15142e8000         call dword ptr [0x802e14]
// 006c872b  eb0c                 jmp 0x6c8739
// 006c872d  8b17                 mov edx, dword ptr [edi]
// 006c872f  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006c8735  8bcf                 mov ecx, edi
// 006c8737  ffd0                 call eax
// 006c8739  5b                   pop ebx
// 006c873a  8b560c               mov edx, dword ptr [esi + 0xc]
// 006c873d  8b4608               mov eax, dword ptr [esi + 8]
// 006c8740  6aff                 push -1
// 006c8742  8d4e24               lea ecx, [esi + 0x24]
// 006c8745  51                   push ecx
// 006c8746  6afd                 push -3
// 006c8748  52                   push edx
// 006c8749  57                   push edi
// 006c874a  50                   push eax
// 006c874b  8bcd                 mov ecx, ebp
// 006c874d  e85e760000           call 0x6cfdb0
// 006c8752  5f                   pop edi
// 006c8753  5e                   pop esi
// 006c8754  5d                   pop ebp
// 006c8755  83c408               add esp, 8
// 006c8758  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnDblClick@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_CLICKARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
