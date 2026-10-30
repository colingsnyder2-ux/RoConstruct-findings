// roc 2009-12 00894b60  unit: CXTPRibbonBarControlQuickAccessPopup  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894b60
//
// 00894b60  56                   push esi
// 00894b61  57                   push edi
// 00894b62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00894b66  8bf1                 mov esi, ecx
// 00894b68  85ff                 test edi, edi
// 00894b6a  742d                 je 0x894b99
// 00894b6c  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00894b72  85c9                 test ecx, ecx
// 00894b74  7405                 je 0x894b7b
// 00894b76  e861f2f5ff           call 0x7f3ddc
// 00894b7b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00894b81  e81af9f6ff           call 0x8044a0
// 00894b86  8b10                 mov edx, dword ptr [eax]
// 00894b88  8bc8                 mov ecx, eax
// 00894b8a  8b8240020000         mov eax, dword ptr [edx + 0x240]
// 00894b90  56                   push esi
// 00894b91  ffd0                 call eax
// 00894b93  898678010000         mov dword ptr [esi + 0x178], eax
// 00894b99  57                   push edi
// 00894b9a  8bce                 mov ecx, esi
// 00894b9c  e8af69faff           call 0x83b550
// 00894ba1  5f                   pop edi
// 00894ba2  5e                   pop esi
// 00894ba3  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CXTPRibbonBarControlQuickAccessPopup@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp