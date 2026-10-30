// roc 2009-06 00752820  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752820
//
// 00752820  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00752823  56                   push esi
// 00752824  33f6                 xor esi, esi
// 00752826  57                   push edi
// 00752827  85c0                 test eax, eax
// 00752829  7e1a                 jle 0x752845
// 0075282b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0075282f  90                   nop 
// 00752830  85f6                 test esi, esi
// 00752832  7c28                 jl 0x75285c
// 00752834  3bf0                 cmp esi, eax
// 00752836  7d24                 jge 0x75285c
// 00752838  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0075283b  3914b7               cmp dword ptr [edi + esi*4], edx
// 0075283e  740d                 je 0x75284d
// 00752840  46                   inc esi
// 00752841  3bf0                 cmp esi, eax
// 00752843  7ceb                 jl 0x752830
// 00752845  5f                   pop edi
// 00752846  83c8ff               or eax, 0xffffffff
// 00752849  5e                   pop esi
// 0075284a  c20400               ret 4
// 0075284d  8b01                 mov eax, dword ptr [ecx]
// 0075284f  8b5064               mov edx, dword ptr [eax + 0x64]
// 00752852  56                   push esi
// 00752853  ffd2                 call edx
// 00752855  5f                   pop edi
// 00752856  8bc6                 mov eax, esi
// 00752858  5e                   pop esi
// 00752859  c20400               ret 4
// 0075285c  e88364fcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveRow@CXTPReportRows@@UAEHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp