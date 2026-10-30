// roc 2009-12 0082d620  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d620
//
// 0082d620  53                   push ebx
// 0082d621  56                   push esi
// 0082d622  57                   push edi
// 0082d623  8bf9                 mov edi, ecx
// 0082d625  33f6                 xor esi, esi
// 0082d627  397728               cmp dword ptr [edi + 0x28], esi
// 0082d62a  7e24                 jle 0x82d650
// 0082d62c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082d630  85f6                 test esi, esi
// 0082d632  7c35                 jl 0x82d669
// 0082d634  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d637  7d30                 jge 0x82d669
// 0082d639  8b4724               mov eax, dword ptr [edi + 0x24]
// 0082d63c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082d63f  8b11                 mov edx, dword ptr [ecx]
// 0082d641  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082d644  ffd0                 call eax
// 0082d646  3bc3                 cmp eax, ebx
// 0082d648  740e                 je 0x82d658
// 0082d64a  46                   inc esi
// 0082d64b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d64e  7ce0                 jl 0x82d630
// 0082d650  5f                   pop edi
// 0082d651  5e                   pop esi
// 0082d652  33c0                 xor eax, eax
// 0082d654  5b                   pop ebx
// 0082d655  c20400               ret 4
// 0082d658  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d65b  7d0c                 jge 0x82d669
// 0082d65d  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0082d660  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0082d663  5f                   pop edi
// 0082d664  5e                   pop esi
// 0082d665  5b                   pop ebx
// 0082d666  c20400               ret 4
// 0082d669  e89e64fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?Find@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp