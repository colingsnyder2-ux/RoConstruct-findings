// roc 2009-12 0082add0  unit: PAVCXTPReportRecordItem::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082add0
//
// 0082add0  56                   push esi
// 0082add1  8bf1                 mov esi, ecx
// 0082add3  e86ab60f00           call 0x926442
// 0082add8  8d4e20               lea ecx, [esi + 0x20]
// 0082addb  c7068c599f00         mov dword ptr [esi], 0x9f598c
// 0082ade1  e88affffff           call 0x82ad70
// 0082ade6  33c0                 xor eax, eax
// 0082ade8  b901000000           mov ecx, 1
// 0082aded  894638               mov dword ptr [esi + 0x38], eax
// 0082adf0  89463c               mov dword ptr [esi + 0x3c], eax
// 0082adf3  894640               mov dword ptr [esi + 0x40], eax
// 0082adf6  894644               mov dword ptr [esi + 0x44], eax
// 0082adf9  894650               mov dword ptr [esi + 0x50], eax
// 0082adfc  894e34               mov dword ptr [esi + 0x34], ecx
// 0082adff  894e48               mov dword ptr [esi + 0x48], ecx
// 0082ae02  c7464cffffffff       mov dword ptr [esi + 0x4c], 0xffffffff
// 0082ae09  8bc6                 mov eax, esi
// 0082ae0b  5e                   pop esi
// 0082ae0c  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportRecord@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp