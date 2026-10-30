// roc 2009-12 0082d670  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d670
//
// 0082d670  53                   push ebx
// 0082d671  56                   push esi
// 0082d672  57                   push edi
// 0082d673  8bf9                 mov edi, ecx
// 0082d675  33f6                 xor esi, esi
// 0082d677  397728               cmp dword ptr [edi + 0x28], esi
// 0082d67a  7e63                 jle 0x82d6df
// 0082d67c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082d680  85f6                 test esi, esi
// 0082d682  7c74                 jl 0x82d6f8
// 0082d684  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d687  7d6f                 jge 0x82d6f8
// 0082d689  8b4724               mov eax, dword ptr [edi + 0x24]
// 0082d68c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082d68f  8b11                 mov edx, dword ptr [ecx]
// 0082d691  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082d694  ffd0                 call eax
// 0082d696  3bc3                 cmp eax, ebx
// 0082d698  744d                 je 0x82d6e7
// 0082d69a  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d69d  7d59                 jge 0x82d6f8
// 0082d69f  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0082d6a2  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0082d6a5  8b11                 mov edx, dword ptr [ecx]
// 0082d6a7  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0082d6ad  ffd0                 call eax
// 0082d6af  85c0                 test eax, eax
// 0082d6b1  7426                 je 0x82d6d9
// 0082d6b3  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d6b6  7d40                 jge 0x82d6f8
// 0082d6b8  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0082d6bb  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0082d6be  8b11                 mov edx, dword ptr [ecx]
// 0082d6c0  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082d6c6  ffd0                 call eax
// 0082d6c8  8b10                 mov edx, dword ptr [eax]
// 0082d6ca  8bc8                 mov ecx, eax
// 0082d6cc  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0082d6d2  53                   push ebx
// 0082d6d3  ffd0                 call eax
// 0082d6d5  85c0                 test eax, eax
// 0082d6d7  7508                 jne 0x82d6e1
// 0082d6d9  46                   inc esi
// 0082d6da  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d6dd  7ca1                 jl 0x82d680
// 0082d6df  33c0                 xor eax, eax
// 0082d6e1  5f                   pop edi
// 0082d6e2  5e                   pop esi
// 0082d6e3  5b                   pop ebx
// 0082d6e4  c20400               ret 4
// 0082d6e7  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d6ea  7d0c                 jge 0x82d6f8
// 0082d6ec  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0082d6ef  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0082d6f2  5f                   pop edi
// 0082d6f3  5e                   pop esi
// 0082d6f4  5b                   pop ebx
// 0082d6f5  c20400               ret 4
// 0082d6f8  e80f64fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?FindInTree@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp