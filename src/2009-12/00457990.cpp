// roc 2009-12 00457990  unit: VCRobloxDoc::?$VerbBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00457990
//
// 00457990  6aff                 push -1
// 00457992  6808bd9200           push 0x92bd08
// 00457997  64a100000000         mov eax, dword ptr fs:[0]
// 0045799d  50                   push eax
// 0045799e  64892500000000       mov dword ptr fs:[0], esp
// 004579a5  51                   push ecx
// 004579a6  56                   push esi
// 004579a7  8bf1                 mov esi, ecx
// 004579a9  89742404             mov dword ptr [esp + 4], esi
// 004579ad  8d4e54               lea ecx, [esi + 0x54]
// 004579b0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004579b8  e863ab2000           call 0x662520
// 004579bd  8bce                 mov ecx, esi
// 004579bf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004579c7  e82ac23900           call 0x7f3bf6
// 004579cc  f644241801           test byte ptr [esp + 0x18], 1
// 004579d1  7409                 je 0x4579dc
// 004579d3  56                   push esi
// 004579d4  e881be3900           call 0x7f385a
// 004579d9  83c404               add esp, 4
// 004579dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004579e0  8bc6                 mov eax, esi
// 004579e2  5e                   pop esi
// 004579e3  64890d00000000       mov dword ptr fs:[0], ecx
// 004579ea  83c410               add esp, 0x10
// 004579ed  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPReportInplaceButton@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp