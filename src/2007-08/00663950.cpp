// from server: 100% by auto
// roc 2007-08 00663950  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663950
//
// 00663950  56                   push esi
// 00663951  8bf1                 mov esi, ecx
// 00663953  8d467c               lea eax, [esi + 0x7c]
// 00663956  50                   push eax
// 00663957  ff15d8e97700         call dword ptr [0x77e9d8]
// 0066395d  8bce                 mov ecx, esi
// 0066395f  e83cfffeff           call 0x6538a0
// 00663964  f644240801           test byte ptr [esp + 8], 1
// 00663969  742c                 je 0x663997
// 0066396b  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00663972  740f                 je 0x663983
// 00663974  56                   push esi
// 00663975  e836a1dbff           call 0x41dab0
// 0066397a  83c404               add esp, 4
// 0066397d  8bc6                 mov eax, esi
// 0066397f  5e                   pop esi
// 00663980  c20400               ret 4
// 00663983  6870878c00           push 0x8c8770
// 00663988  ff15e8d27700         call dword ptr [0x77d2e8]
// 0066398e  56                   push esi
// 0066398f  e8cec2fcff           call 0x62fc62
// 00663994  83c404               add esp, 4
// 00663997  8bc6                 mov eax, esi
// 00663999  5e                   pop esi
// 0066399a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
