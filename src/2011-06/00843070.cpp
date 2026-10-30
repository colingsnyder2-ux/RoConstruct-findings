// roc 2011-06 00843070  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843070
//
// 00843070  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00843073  56                   push esi
// 00843074  33f6                 xor esi, esi
// 00843076  57                   push edi
// 00843077  85c0                 test eax, eax
// 00843079  7e1a                 jle 0x843095
// 0084307b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0084307f  90                   nop 
// 00843080  85f6                 test esi, esi
// 00843082  7c28                 jl 0x8430ac
// 00843084  3bf0                 cmp esi, eax
// 00843086  7d24                 jge 0x8430ac
// 00843088  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0084308b  3914b7               cmp dword ptr [edi + esi*4], edx
// 0084308e  740d                 je 0x84309d
// 00843090  46                   inc esi
// 00843091  3bf0                 cmp esi, eax
// 00843093  7ceb                 jl 0x843080
// 00843095  5f                   pop edi
// 00843096  83c8ff               or eax, 0xffffffff
// 00843099  5e                   pop esi
// 0084309a  c20400               ret 4
// 0084309d  8b01                 mov eax, dword ptr [ecx]
// 0084309f  8b5064               mov edx, dword ptr [eax + 0x64]
// 008430a2  56                   push esi
// 008430a3  ffd2                 call edx
// 008430a5  5f                   pop edi
// 008430a6  8bc6                 mov eax, esi
// 008430a8  5e                   pop esi
// 008430a9  c20400               ret 4
// 008430ac  e85972fcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveRow@CXTPReportRows@@UAEHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp