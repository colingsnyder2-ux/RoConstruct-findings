// roc 2009-12 008a55c0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a55c0
//
// 008a55c0  53                   push ebx
// 008a55c1  8bd9                 mov ebx, ecx
// 008a55c3  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008a55c7  0f841a010000         je 0x8a56e7
// 008a55cd  57                   push edi
// 008a55ce  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a55d2  837f1000             cmp dword ptr [edi + 0x10], 0
// 008a55d6  0f840a010000         je 0x8a56e6
// 008a55dc  8b4704               mov eax, dword ptr [edi + 4]
// 008a55df  55                   push ebp
// 008a55e0  8ba800010000         mov ebp, dword ptr [eax + 0x100]
// 008a55e6  56                   push esi
// 008a55e7  8b742418             mov esi, dword ptr [esp + 0x18]
// 008a55eb  8d4d20               lea ecx, [ebp + 0x20]
// 008a55ee  894e20               mov dword ptr [esi + 0x20], ecx
// 008a55f1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008a55f4  83c9ff               or ecx, 0xffffffff
// 008a55f7  3bc1                 cmp eax, ecx
// 008a55f9  7503                 jne 0x8a55fe
// 008a55fb  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 008a55fe  894624               mov dword ptr [esi + 0x24], eax
// 008a5601  894e28               mov dword ptr [esi + 0x28], ecx
// 008a5604  8b5728               mov edx, dword ptr [edi + 0x28]
// 008a5607  895638               mov dword ptr [esi + 0x38], edx
// 008a560a  894e3c               mov dword ptr [esi + 0x3c], ecx
// 008a560d  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008a5610  8b01                 mov eax, dword ptr [ecx]
// 008a5612  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a5615  56                   push esi
// 008a5616  57                   push edi
// 008a5617  ffd2                 call edx
// 008a5619  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 008a561c  8b01                 mov eax, dword ptr [ecx]
// 008a561e  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 008a5624  56                   push esi
// 008a5625  57                   push edi
// 008a5626  ffd2                 call edx
// 008a5628  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a562b  8b01                 mov eax, dword ptr [ecx]
// 008a562d  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 008a5633  56                   push esi
// 008a5634  57                   push edi
// 008a5635  ffd2                 call edx
// 008a5637  8b4638               mov eax, dword ptr [esi + 0x38]
// 008a563a  894728               mov dword ptr [edi + 0x28], eax
// 008a563d  8b13                 mov edx, dword ptr [ebx]
// 008a563f  8b4274               mov eax, dword ptr [edx + 0x74]
// 008a5642  8bcb                 mov ecx, ebx
// 008a5644  ffd0                 call eax
// 008a5646  85c0                 test eax, eax
// 008a5648  0f8496000000         je 0x8a56e4
// 008a564e  8b4724               mov eax, dword ptr [edi + 0x24]
// 008a5651  85c0                 test eax, eax
// 008a5653  0f848b000000         je 0x8a56e4
// 008a5659  83780c00             cmp dword ptr [eax + 0xc], 0
// 008a565d  0f8581000000         jne 0x8a56e4
// 008a5663  837f0c00             cmp dword ptr [edi + 0xc], 0
// 008a5667  741b                 je 0x8a5684
// 008a5669  8b13                 mov edx, dword ptr [ebx]
// 008a566b  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a566e  8bcb                 mov ecx, ebx
// 008a5670  ffd0                 call eax
// 008a5672  85c0                 test eax, eax
// 008a5674  740e                 je 0x8a5684
// 008a5676  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a5679  8b9118020000         mov edx, dword ptr [ecx + 0x218]
// 008a567f  3b570c               cmp edx, dword ptr [edi + 0xc]
// 008a5682  7460                 je 0x8a56e4
// 008a5684  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008a5687  e8b4ddf7ff           call 0x823440
// 008a568c  85c0                 test eax, eax
// 008a568e  7423                 je 0x8a56b3
// 008a5690  8b456c               mov eax, dword ptr [ebp + 0x6c]
// 008a5693  83f8ff               cmp eax, -1
// 008a5696  7503                 jne 0x8a569b
// 008a5698  8b4568               mov eax, dword ptr [ebp + 0x68]
// 008a569b  894624               mov dword ptr [esi + 0x24], eax
// 008a569e  8b4548               mov eax, dword ptr [ebp + 0x48]
// 008a56a1  83f8ff               cmp eax, -1
// 008a56a4  753b                 jne 0x8a56e1
// 008a56a6  8b4544               mov eax, dword ptr [ebp + 0x44]
// 008a56a9  894628               mov dword ptr [esi + 0x28], eax
// 008a56ac  5e                   pop esi
// 008a56ad  5d                   pop ebp
// 008a56ae  5f                   pop edi
// 008a56af  5b                   pop ebx
// 008a56b0  c20800               ret 8
// 008a56b3  83bd2402000000       cmp dword ptr [ebp + 0x224], 0
// 008a56ba  7528                 jne 0x8a56e4
// 008a56bc  8b8550010000         mov eax, dword ptr [ebp + 0x150]
// 008a56c2  83f8ff               cmp eax, -1
// 008a56c5  7506                 jne 0x8a56cd
// 008a56c7  8b854c010000         mov eax, dword ptr [ebp + 0x14c]
// 008a56cd  894624               mov dword ptr [esi + 0x24], eax
// 008a56d0  8b8544010000         mov eax, dword ptr [ebp + 0x144]
// 008a56d6  83f8ff               cmp eax, -1
// 008a56d9  7506                 jne 0x8a56e1
// 008a56db  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 008a56e1  894628               mov dword ptr [esi + 0x28], eax
// 008a56e4  5e                   pop esi
// 008a56e5  5d                   pop ebp
// 008a56e6  5f                   pop edi
// 008a56e7  5b                   pop ebx
// 008a56e8  c20800               ret 8
// copied from an identical function in another client (function ?GetItemMetrics@CXTPReportRow@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp