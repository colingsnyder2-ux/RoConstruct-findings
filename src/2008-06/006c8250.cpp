// from server: 100% by auto
// roc 2008-06 006c8250  unit: CInstanceRecord::CNameItem  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8250
//
// 006c8250  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006c8257  7410                 je 0x6c8269
// 006c8259  8b442404             mov eax, dword ptr [esp + 4]
// 006c825d  50                   push eax
// 006c825e  e81d88d5ff           call 0x420a80
// 006c8263  83c404               add esp, 4
// 006c8266  c20400               ret 4
// 006c8269  680ce19700           push 0x97e10c
// 006c826e  ff15ac218000         call dword ptr [0x8021ac]
// 006c8274  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c8278  51                   push ecx
// 006c8279  e8fc83fdff           call 0x6a067a
// 006c827e  59                   pop ecx
// 006c827f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
