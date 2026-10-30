// roc 2009-06 0044fff0  unit: VCRobloxDoc::?$VerbBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044fff0
//
// 0044fff0  6aff                 push -1
// 0044fff2  68f8148500           push 0x8514f8
// 0044fff7  64a100000000         mov eax, dword ptr fs:[0]
// 0044fffd  50                   push eax
// 0044fffe  64892500000000       mov dword ptr fs:[0], esp
// 00450005  51                   push ecx
// 00450006  56                   push esi
// 00450007  8bf1                 mov esi, ecx
// 00450009  89742404             mov dword ptr [esp + 4], esi
// 0045000d  8d4e54               lea ecx, [esi + 0x54]
// 00450010  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00450018  e8c3a21900           call 0x5ea2e0
// 0045001d  8bce                 mov ecx, esi
// 0045001f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00450027  e8a28d2c00           call 0x718dce
// 0045002c  f644241801           test byte ptr [esp + 0x18], 1
// 00450031  7409                 je 0x45003c
// 00450033  56                   push esi
// 00450034  e8f9892c00           call 0x718a32
// 00450039  83c404               add esp, 4
// 0045003c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00450040  8bc6                 mov eax, esi
// 00450042  5e                   pop esi
// 00450043  64890d00000000       mov dword ptr fs:[0], ecx
// 0045004a  83c410               add esp, 0x10
// 0045004d  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPReportInplaceButton@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp