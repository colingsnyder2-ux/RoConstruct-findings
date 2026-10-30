// roc 2009-12 0082ed70  unit: CXTPReportSelectedRows::USELECTED_BLOCK::?$CArray  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ed70
//
// 0082ed70  56                   push esi
// 0082ed71  57                   push edi
// 0082ed72  8bf1                 mov esi, ecx
// 0082ed74  e8c9760f00           call 0x926442
// 0082ed79  8d7e20               lea edi, [esi + 0x20]
// 0082ed7c  8bcf                 mov ecx, edi
// 0082ed7e  c7068c629f00         mov dword ptr [esi], 0x9f628c
// 0082ed84  e897eaffff           call 0x82d820
// 0082ed89  33c0                 xor eax, eax
// 0082ed8b  c70770629f00         mov dword ptr [edi], 0x9f6270
// 0082ed91  894634               mov dword ptr [esi + 0x34], eax
// 0082ed94  894638               mov dword ptr [esi + 0x38], eax
// 0082ed97  5f                   pop edi
// 0082ed98  8bc6                 mov eax, esi
// 0082ed9a  5e                   pop esi
// 0082ed9b  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportRows@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp