// roc 2009-12 0082d570  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d570
//
// 0082d570  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0082d573  56                   push esi
// 0082d574  33f6                 xor esi, esi
// 0082d576  57                   push edi
// 0082d577  85c0                 test eax, eax
// 0082d579  7e1a                 jle 0x82d595
// 0082d57b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0082d57f  90                   nop 
// 0082d580  85f6                 test esi, esi
// 0082d582  7c28                 jl 0x82d5ac
// 0082d584  3bf0                 cmp esi, eax
// 0082d586  7d24                 jge 0x82d5ac
// 0082d588  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0082d58b  3914b7               cmp dword ptr [edi + esi*4], edx
// 0082d58e  740d                 je 0x82d59d
// 0082d590  46                   inc esi
// 0082d591  3bf0                 cmp esi, eax
// 0082d593  7ceb                 jl 0x82d580
// 0082d595  5f                   pop edi
// 0082d596  83c8ff               or eax, 0xffffffff
// 0082d599  5e                   pop esi
// 0082d59a  c20400               ret 4
// 0082d59d  8b01                 mov eax, dword ptr [ecx]
// 0082d59f  8b5064               mov edx, dword ptr [eax + 0x64]
// 0082d5a2  56                   push esi
// 0082d5a3  ffd2                 call edx
// 0082d5a5  5f                   pop edi
// 0082d5a6  8bc6                 mov eax, esi
// 0082d5a8  5e                   pop esi
// 0082d5a9  c20400               ret 4
// 0082d5ac  e85b65fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveRow@CXTPReportRows@@UAEHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp