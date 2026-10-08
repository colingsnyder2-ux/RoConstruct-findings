// from server: 100% by auto
// roc 2008-06 006e7000  unit: CXTPDockingPaneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7000
//
// 006e7000  8b442408             mov eax, dword ptr [esp + 8]
// 006e7004  56                   push esi
// 006e7005  8bf1                 mov esi, ecx
// 006e7007  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e700b  50                   push eax
// 006e700c  51                   push ecx
// 006e700d  8bce                 mov ecx, esi
// 006e700f  e88cf1ffff           call 0x6e61a0
// 006e7014  8bce                 mov ecx, esi
// 006e7016  e815e3ffff           call 0x6e5330
// 006e701b  5e                   pop esi
// 006e701c  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTPTaskDialogClient.cpp (function ?OnSettingChange@CXTPTaskDialogClient@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTPTaskDialogClient.cpp
