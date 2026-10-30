// roc 2009-12 008a50f0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a50f0
//
// 008a50f0  6aff                 push -1
// 008a50f2  6838259600           push 0x962538
// 008a50f7  64a100000000         mov eax, dword ptr fs:[0]
// 008a50fd  50                   push eax
// 008a50fe  83ec2c               sub esp, 0x2c
// 008a5101  56                   push esi
// 008a5102  a10052b600           mov eax, dword ptr [0xb65200]
// 008a5107  33c4                 xor eax, esp
// 008a5109  50                   push eax
// 008a510a  8d442434             lea eax, [esp + 0x34]
// 008a510e  64a300000000         mov dword ptr fs:[0], eax
// 008a5114  8bf1                 mov esi, ecx
// 008a5116  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5119  ff405c               inc dword ptr [eax + 0x5c]
// 008a511c  8d4c2408             lea ecx, [esp + 8]
// 008a5120  e83b55f7ff           call 0x81a660
// 008a5125  c7442408dc429f00     mov dword ptr [esp + 8], 0x9f42dc
// 008a512d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a5130  33c0                 xor eax, eax
// 008a5132  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a5136  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a513a  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a513e  8d54241c             lea edx, [esp + 0x1c]
// 008a5142  52                   push edx
// 008a5143  89442418             mov dword ptr [esp + 0x18], eax
// 008a5147  894c2410             mov dword ptr [esp + 0x10], ecx
// 008a514b  89742414             mov dword ptr [esp + 0x14], esi
// 008a514f  ff159cca9800         call dword ptr [0x98ca9c]
// 008a5155  8b442448             mov eax, dword ptr [esp + 0x48]
// 008a5159  8b16                 mov edx, dword ptr [esi]
// 008a515b  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 008a5161  89442418             mov dword ptr [esp + 0x18], eax
// 008a5165  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008a5169  50                   push eax
// 008a516a  8d4c240c             lea ecx, [esp + 0xc]
// 008a516e  51                   push ecx
// 008a516f  8bce                 mov ecx, esi
// 008a5171  ffd2                 call edx
// 008a5173  8b7624               mov esi, dword ptr [esi + 0x24]
// 008a5176  83c8ff               or eax, 0xffffffff
// 008a5179  01465c               add dword ptr [esi + 0x5c], eax
// 008a517c  8d4c2408             lea ecx, [esp + 8]
// 008a5180  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a5184  e8174ff7ff           call 0x81a0a0
// 008a5189  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a518d  64890d00000000       mov dword ptr fs:[0], ecx
// 008a5194  59                   pop ecx
// 008a5195  5e                   pop esi
// 008a5196  83c438               add esp, 0x38
// 008a5199  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillMetrics@CXTPReportRow@@UAEXPAVCXTPReportColumn@@PAVCXTPReportRecordItem@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp