// roc 2008-06 007521b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007521b0
//
// 007521b0  53                   push ebx
// 007521b1  8bd9                 mov ebx, ecx
// 007521b3  837b2000             cmp dword ptr [ebx + 0x20], 0
// 007521b7  0f841a010000         je 0x7522d7
// 007521bd  57                   push edi
// 007521be  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007521c2  837f1000             cmp dword ptr [edi + 0x10], 0
// 007521c6  0f840a010000         je 0x7522d6
// 007521cc  8b4704               mov eax, dword ptr [edi + 4]
// 007521cf  55                   push ebp
// 007521d0  8ba800010000         mov ebp, dword ptr [eax + 0x100]
// 007521d6  56                   push esi
// 007521d7  8b742418             mov esi, dword ptr [esp + 0x18]
// 007521db  8d4d20               lea ecx, [ebp + 0x20]
// 007521de  894e20               mov dword ptr [esi + 0x20], ecx
// 007521e1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007521e4  83c9ff               or ecx, 0xffffffff
// 007521e7  3bc1                 cmp eax, ecx
// 007521e9  7503                 jne 0x7521ee
// 007521eb  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 007521ee  894624               mov dword ptr [esi + 0x24], eax
// 007521f1  894e28               mov dword ptr [esi + 0x28], ecx
// 007521f4  8b5728               mov edx, dword ptr [edi + 0x28]
// 007521f7  895638               mov dword ptr [esi + 0x38], edx
// 007521fa  894e3c               mov dword ptr [esi + 0x3c], ecx
// 007521fd  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00752200  8b01                 mov eax, dword ptr [ecx]
// 00752202  8b5058               mov edx, dword ptr [eax + 0x58]
// 00752205  56                   push esi
// 00752206  57                   push edi
// 00752207  ffd2                 call edx
// 00752209  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0075220c  8b01                 mov eax, dword ptr [ecx]
// 0075220e  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00752214  56                   push esi
// 00752215  57                   push edi
// 00752216  ffd2                 call edx
// 00752218  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0075221b  8b01                 mov eax, dword ptr [ecx]
// 0075221d  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 00752223  56                   push esi
// 00752224  57                   push edi
// 00752225  ffd2                 call edx
// 00752227  8b4638               mov eax, dword ptr [esi + 0x38]
// 0075222a  894728               mov dword ptr [edi + 0x28], eax
// 0075222d  8b13                 mov edx, dword ptr [ebx]
// 0075222f  8b4274               mov eax, dword ptr [edx + 0x74]
// 00752232  8bcb                 mov ecx, ebx
// 00752234  ffd0                 call eax
// 00752236  85c0                 test eax, eax
// 00752238  0f8496000000         je 0x7522d4
// 0075223e  8b4724               mov eax, dword ptr [edi + 0x24]
// 00752241  85c0                 test eax, eax
// 00752243  0f848b000000         je 0x7522d4
// 00752249  83780c00             cmp dword ptr [eax + 0xc], 0
// 0075224d  0f8581000000         jne 0x7522d4
// 00752253  837f0c00             cmp dword ptr [edi + 0xc], 0
// 00752257  741b                 je 0x752274
// 00752259  8b13                 mov edx, dword ptr [ebx]
// 0075225b  8b4270               mov eax, dword ptr [edx + 0x70]
// 0075225e  8bcb                 mov ecx, ebx
// 00752260  ffd0                 call eax
// 00752262  85c0                 test eax, eax
// 00752264  740e                 je 0x752274
// 00752266  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00752269  8b9118020000         mov edx, dword ptr [ecx + 0x218]
// 0075226f  3b570c               cmp edx, dword ptr [edi + 0xc]
// 00752272  7460                 je 0x7522d4
// 00752274  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00752277  e874dcf7ff           call 0x6cfef0
// 0075227c  85c0                 test eax, eax
// 0075227e  7423                 je 0x7522a3
// 00752280  8b456c               mov eax, dword ptr [ebp + 0x6c]
// 00752283  83f8ff               cmp eax, -1
// 00752286  7503                 jne 0x75228b
// 00752288  8b4568               mov eax, dword ptr [ebp + 0x68]
// 0075228b  894624               mov dword ptr [esi + 0x24], eax
// 0075228e  8b4548               mov eax, dword ptr [ebp + 0x48]
// 00752291  83f8ff               cmp eax, -1
// 00752294  753b                 jne 0x7522d1
// 00752296  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00752299  894628               mov dword ptr [esi + 0x28], eax
// 0075229c  5e                   pop esi
// 0075229d  5d                   pop ebp
// 0075229e  5f                   pop edi
// 0075229f  5b                   pop ebx
// 007522a0  c20800               ret 8
// 007522a3  83bd2402000000       cmp dword ptr [ebp + 0x224], 0
// 007522aa  7528                 jne 0x7522d4
// 007522ac  8b8550010000         mov eax, dword ptr [ebp + 0x150]
// 007522b2  83f8ff               cmp eax, -1
// 007522b5  7506                 jne 0x7522bd
// 007522b7  8b854c010000         mov eax, dword ptr [ebp + 0x14c]
// 007522bd  894624               mov dword ptr [esi + 0x24], eax
// 007522c0  8b8544010000         mov eax, dword ptr [ebp + 0x144]
// 007522c6  83f8ff               cmp eax, -1
// 007522c9  7506                 jne 0x7522d1
// 007522cb  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 007522d1  894628               mov dword ptr [esi + 0x28], eax
// 007522d4  5e                   pop esi
// 007522d5  5d                   pop ebp
// 007522d6  5f                   pop edi
// 007522d7  5b                   pop ebx
// 007522d8  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?GetItemMetrics@CXTPReportRow@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
