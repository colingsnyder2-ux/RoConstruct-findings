// roc 2010-06 0045a8c0  unit: VCRobloxDoc::?$VerbBinder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045a8c0
//
// 0045a8c0  6aff                 push -1
// 0045a8c2  68e82b9800           push 0x982be8
// 0045a8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0045a8cd  50                   push eax
// 0045a8ce  64892500000000       mov dword ptr fs:[0], esp
// 0045a8d5  51                   push ecx
// 0045a8d6  56                   push esi
// 0045a8d7  8bf1                 mov esi, ecx
// 0045a8d9  89742404             mov dword ptr [esp + 4], esi
// 0045a8dd  8d4e54               lea ecx, [esi + 0x54]
// 0045a8e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045a8e8  e8b3e60000           call 0x468fa0
// 0045a8ed  8bce                 mov ecx, esi
// 0045a8ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0045a8f7  e83ad43400           call 0x7a7d36
// 0045a8fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045a900  5e                   pop esi
// 0045a901  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a908  83c410               add esp, 0x10
// 0045a90b  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportInplaceButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp