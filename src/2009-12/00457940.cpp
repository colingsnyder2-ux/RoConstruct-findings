// roc 2009-12 00457940  unit: VCRobloxDoc::?$VerbBinder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00457940
//
// 00457940  6aff                 push -1
// 00457942  6808bd9200           push 0x92bd08
// 00457947  64a100000000         mov eax, dword ptr fs:[0]
// 0045794d  50                   push eax
// 0045794e  64892500000000       mov dword ptr fs:[0], esp
// 00457955  51                   push ecx
// 00457956  56                   push esi
// 00457957  8bf1                 mov esi, ecx
// 00457959  89742404             mov dword ptr [esp + 4], esi
// 0045795d  8d4e54               lea ecx, [esi + 0x54]
// 00457960  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00457968  e8b3ab2000           call 0x662520
// 0045796d  8bce                 mov ecx, esi
// 0045796f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00457977  e87ac23900           call 0x7f3bf6
// 0045797c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00457980  5e                   pop esi
// 00457981  64890d00000000       mov dword ptr fs:[0], ecx
// 00457988  83c410               add esp, 0x10
// 0045798b  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportInplaceButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp