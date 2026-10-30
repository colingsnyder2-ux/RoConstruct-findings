// roc 2009-12 007fa830  unit: CPatchedControlComboBox  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa830
//
// 007fa830  56                   push esi
// 007fa831  57                   push edi
// 007fa832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fa836  8bf1                 mov esi, ecx
// 007fa838  3bbe00010000         cmp edi, dword ptr [esi + 0x100]
// 007fa83e  7429                 je 0x7fa869
// 007fa840  85ff                 test edi, edi
// 007fa842  7429                 je 0x7fa86d
// 007fa844  8bcf                 mov ecx, edi
// 007fa846  e845c80000           call 0x807090
// 007fa84b  85c0                 test eax, eax
// 007fa84d  741a                 je 0x7fa869
// 007fa84f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007fa852  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 007fa858  85c0                 test eax, eax
// 007fa85a  7403                 je 0x7fa85f
// 007fa85c  8b4020               mov eax, dword ptr [eax + 0x20]
// 007fa85f  51                   push ecx
// 007fa860  6af8                 push -8
// 007fa862  50                   push eax
// 007fa863  ff15c0c99800         call dword ptr [0x98c9c0]
// 007fa869  85ff                 test edi, edi
// 007fa86b  7517                 jne 0x7fa884
// 007fa86d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fa873  85c9                 test ecx, ecx
// 007fa875  740d                 je 0x7fa884
// 007fa877  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fa87b  7407                 je 0x7fa884
// 007fa87d  8b01                 mov eax, dword ptr [ecx]
// 007fa87f  8b5068               mov edx, dword ptr [eax + 0x68]
// 007fa882  ffd2                 call edx
// 007fa884  89be00010000         mov dword ptr [esi + 0x100], edi
// 007fa88a  5f                   pop edi
// 007fa88b  5e                   pop esi
// 007fa88c  c20400               ret 4
// copied from an identical function in another client (function ?SetParent@CXTPControlComboBox@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp