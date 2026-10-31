// roc 2009-06 00454350  unit: CRobloxReportPaneView  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454350
//
// 00454350  6aff                 push -1
// 00454352  689a1b8500           push 0x851b9a
// 00454357  64a100000000         mov eax, dword ptr fs:[0]
// 0045435d  50                   push eax
// 0045435e  64892500000000       mov dword ptr fs:[0], esp
// 00454365  51                   push ecx
// 00454366  53                   push ebx
// 00454367  56                   push esi
// 00454368  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045436c  33db                 xor ebx, ebx
// 0045436e  57                   push edi
// 0045436f  8bce                 mov ecx, esi
// 00454371  895c240c             mov dword ptr [esp + 0xc], ebx
// 00454375  ff1548fb8900         call dword ptr [0x89fb48]
// 0045437b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0045437f  50                   push eax
// 00454380  8bcf                 mov ecx, edi
// 00454382  ff154cfb8900         call dword ptr [0x89fb4c]
// 00454388  895c2418             mov dword ptr [esp + 0x18], ebx
// 0045438c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00454390  8bcb                 mov ecx, ebx
// 00454392  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0045439a  ff1554fb8900         call dword ptr [0x89fb54]
// 004543a0  50                   push eax
// 004543a1  8bcb                 mov ecx, ebx
// 004543a3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004543a9  50                   push eax
// 004543aa  8bce                 mov ecx, esi
// 004543ac  ff1554fb8900         call dword ptr [0x89fb54]
// 004543b2  50                   push eax
// 004543b3  8bce                 mov ecx, esi
// 004543b5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004543bb  50                   push eax
// 004543bc  57                   push edi
// 004543bd  ff1558fb8900         call dword ptr [0x89fb58]
// 004543c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004543c7  83c414               add esp, 0x14
// 004543ca  8bc7                 mov eax, edi
// 004543cc  5f                   pop edi
// 004543cd  5e                   pop esi
// 004543ce  5b                   pop ebx
// 004543cf  64890d00000000       mov dword ptr fs:[0], ecx
// 004543d6  83c410               add esp, 0x10
// 004543d9  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@0@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7e1dea9a7966a33a.cpp