// roc 2009-12 007faaa0  unit: CPatchedControlComboBox  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faaa0
//
// 007faaa0  56                   push esi
// 007faaa1  57                   push edi
// 007faaa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007faaa6  8bf1                 mov esi, ecx
// 007faaa8  85ff                 test edi, edi
// 007faaaa  7417                 je 0x7faac3
// 007faaac  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 007faab6  e865ffffff           call 0x7faa20
// 007faabb  898690010000         mov dword ptr [esi + 0x190], eax
// 007faac1  eb3b                 jmp 0x7faafe
// 007faac3  8b06                 mov eax, dword ptr [esi]
// 007faac5  8b5074               mov edx, dword ptr [eax + 0x74]
// 007faac8  ffd2                 call edx
// 007faaca  85c0                 test eax, eax
// 007faacc  751e                 jne 0x7faaec
// 007faace  398684010000         cmp dword ptr [esi + 0x184], eax
// 007faad4  7516                 jne 0x7faaec
// 007faad6  3986c0010000         cmp dword ptr [esi + 0x1c0], eax
// 007faadc  7520                 jne 0x7faafe
// 007faade  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 007faae4  50                   push eax
// 007faae5  8bce                 mov ecx, esi
// 007faae7  e864ffffff           call 0x7faa50
// 007faaec  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 007faaf3  7509                 jne 0x7faafe
// 007faaf5  6a0a                 push 0xa
// 007faaf7  8bce                 mov ecx, esi
// 007faaf9  e892daffff           call 0x7f8590
// 007faafe  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 007fab04  85c9                 test ecx, ecx
// 007fab06  7409                 je 0x7fab11
// 007fab08  85ff                 test edi, edi
// 007fab0a  7405                 je 0x7fab11
// 007fab0c  e8afe6ffff           call 0x7f91c0
// 007fab11  89be74010000         mov dword ptr [esi + 0x174], edi
// 007fab17  85ff                 test edi, edi
// 007fab19  740f                 je 0x7fab2a
// 007fab1b  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fab21  85c9                 test ecx, ecx
// 007fab23  7405                 je 0x7fab2a
// 007fab25  e8d890ffff           call 0x7f3c02
// 007fab2a  57                   push edi
// 007fab2b  8bce                 mov ecx, esi
// 007fab2d  e81e0a0400           call 0x83b550
// 007fab32  5f                   pop edi
// 007fab33  5e                   pop esi
// 007fab34  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CXTPControlComboBox@@MAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp