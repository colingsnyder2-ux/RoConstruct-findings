// roc 2012-06 009bb4b0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb4b0
//
// 009bb4b0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 009bb4b3  56                   push esi
// 009bb4b4  33f6                 xor esi, esi
// 009bb4b6  57                   push edi
// 009bb4b7  85c0                 test eax, eax
// 009bb4b9  7e1a                 jle 0x9bb4d5
// 009bb4bb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009bb4bf  90                   nop 
// 009bb4c0  85f6                 test esi, esi
// 009bb4c2  7c28                 jl 0x9bb4ec
// 009bb4c4  3bf0                 cmp esi, eax
// 009bb4c6  7d24                 jge 0x9bb4ec
// 009bb4c8  8b7924               mov edi, dword ptr [ecx + 0x24]
// 009bb4cb  3914b7               cmp dword ptr [edi + esi*4], edx
// 009bb4ce  740d                 je 0x9bb4dd
// 009bb4d0  46                   inc esi
// 009bb4d1  3bf0                 cmp esi, eax
// 009bb4d3  7ceb                 jl 0x9bb4c0
// 009bb4d5  5f                   pop edi
// 009bb4d6  83c8ff               or eax, 0xffffffff
// 009bb4d9  5e                   pop esi
// 009bb4da  c20400               ret 4
// 009bb4dd  8b01                 mov eax, dword ptr [ecx]
// 009bb4df  8b5064               mov edx, dword ptr [eax + 0x64]
// 009bb4e2  56                   push esi
// 009bb4e3  ffd2                 call edx
// 009bb4e5  5f                   pop edi
// 009bb4e6  8bc6                 mov eax, esi
// 009bb4e8  5e                   pop esi
// 009bb4e9  c20400               ret 4
// 009bb4ec  e8cf6efcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveRow@CXTPReportRows@@UAEHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp