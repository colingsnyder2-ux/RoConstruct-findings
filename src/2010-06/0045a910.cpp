// roc 2010-06 0045a910  unit: VCRobloxDoc::?$VerbBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045a910
//
// 0045a910  6aff                 push -1
// 0045a912  68e82b9800           push 0x982be8
// 0045a917  64a100000000         mov eax, dword ptr fs:[0]
// 0045a91d  50                   push eax
// 0045a91e  64892500000000       mov dword ptr fs:[0], esp
// 0045a925  51                   push ecx
// 0045a926  56                   push esi
// 0045a927  8bf1                 mov esi, ecx
// 0045a929  89742404             mov dword ptr [esp + 4], esi
// 0045a92d  8d4e54               lea ecx, [esi + 0x54]
// 0045a930  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045a938  e863e60000           call 0x468fa0
// 0045a93d  8bce                 mov ecx, esi
// 0045a93f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0045a947  e8ead33400           call 0x7a7d36
// 0045a94c  f644241801           test byte ptr [esp + 0x18], 1
// 0045a951  7409                 je 0x45a95c
// 0045a953  56                   push esi
// 0045a954  e841d03400           call 0x7a799a
// 0045a959  83c404               add esp, 4
// 0045a95c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045a960  8bc6                 mov eax, esi
// 0045a962  5e                   pop esi
// 0045a963  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a96a  83c410               add esp, 0x10
// 0045a96d  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPReportInplaceButton@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp