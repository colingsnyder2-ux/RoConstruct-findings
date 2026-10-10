// from server: 100% by tester
// roc 2008-06 006a8010  unit: CPatchedControlComboBox  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8010
//
// 006a8010  56                   push esi
// 006a8011  57                   push edi
// 006a8012  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a8016  8bf1                 mov esi, ecx
// 006a8018  3bbe00010000         cmp edi, dword ptr [esi + 0x100]
// 006a801e  7429                 je 0x6a8049
// 006a8020  85ff                 test edi, edi
// 006a8022  7429                 je 0x6a804d
// 006a8024  8bcf                 mov ecx, edi
// 006a8026  e895f90000           call 0x6b79c0
// 006a802b  85c0                 test eax, eax
// 006a802d  741a                 je 0x6a8049
// 006a802f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006a8032  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006a8038  85c0                 test eax, eax
// 006a803a  7403                 je 0x6a803f
// 006a803c  8b4020               mov eax, dword ptr [eax + 0x20]
// 006a803f  51                   push ecx
// 006a8040  6af8                 push -8
// 006a8042  50                   push eax
// 006a8043  ff15d82d8000         call dword ptr [0x802dd8]
// 006a8049  85ff                 test edi, edi
// 006a804b  7517                 jne 0x6a8064
// 006a804d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006a8053  85c9                 test ecx, ecx
// 006a8055  740d                 je 0x6a8064
// 006a8057  83792000             cmp dword ptr [ecx + 0x20], 0
// 006a805b  7407                 je 0x6a8064
// 006a805d  8b01                 mov eax, dword ptr [ecx]
// 006a805f  8b5068               mov edx, dword ptr [eax + 0x68]
// 006a8062  ffd2                 call edx
// 006a8064  89be00010000         mov dword ptr [esi + 0x100], edi
// 006a806a  5f                   pop edi
// 006a806b  5e                   pop esi
// 006a806c  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?SetParent@CXTPControlComboBox@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
