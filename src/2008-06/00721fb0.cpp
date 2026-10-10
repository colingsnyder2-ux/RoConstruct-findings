// roc 2008-06 00721fb0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721fb0
//
// 00721fb0  56                   push esi
// 00721fb1  57                   push edi
// 00721fb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00721fb6  8bf1                 mov esi, ecx
// 00721fb8  85ff                 test edi, edi
// 00721fba  742d                 je 0x721fe9
// 00721fbc  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00721fc2  85c9                 test ecx, ecx
// 00721fc4  7405                 je 0x721fcb
// 00721fc6  e819ecf7ff           call 0x6a0be4
// 00721fcb  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00721fd1  e80a2ef9ff           call 0x6b4de0
// 00721fd6  8b10                 mov edx, dword ptr [eax]
// 00721fd8  8bc8                 mov ecx, eax
// 00721fda  8b8240020000         mov eax, dword ptr [edx + 0x240]
// 00721fe0  56                   push esi
// 00721fe1  ffd0                 call eax
// 00721fe3  898678010000         mov dword ptr [esi + 0x178], eax
// 00721fe9  57                   push edi
// 00721fea  8bce                 mov ecx, esi
// 00721fec  e86f5efcff           call 0x6e7e60
// 00721ff1  5f                   pop edi
// 00721ff2  5e                   pop esi
// 00721ff3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSetPopup@CXTPRibbonBarControlQuickAccessPopup@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
