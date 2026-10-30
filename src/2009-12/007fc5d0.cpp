// roc 2009-12 007fc5d0  unit: CPatchedControlComboBox  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc5d0
//
// 007fc5d0  56                   push esi
// 007fc5d1  57                   push edi
// 007fc5d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fc5d6  57                   push edi
// 007fc5d7  8bf1                 mov esi, ecx
// 007fc5d9  e862bbffff           call 0x7f8140
// 007fc5de  85c0                 test eax, eax
// 007fc5e0  7505                 jne 0x7fc5e7
// 007fc5e2  5f                   pop edi
// 007fc5e3  5e                   pop esi
// 007fc5e4  c20400               ret 4
// 007fc5e7  85ff                 test edi, edi
// 007fc5e9  750a                 jne 0x7fc5f5
// 007fc5eb  8b06                 mov eax, dword ptr [esi]
// 007fc5ed  8b5070               mov edx, dword ptr [eax + 0x70]
// 007fc5f0  57                   push edi
// 007fc5f1  8bce                 mov ecx, esi
// 007fc5f3  ffd2                 call edx
// 007fc5f5  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc5fb  85c9                 test ecx, ecx
// 007fc5fd  740b                 je 0x7fc60a
// 007fc5ff  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fc603  7405                 je 0x7fc60a
// 007fc605  e816eeffff           call 0x7fb420
// 007fc60a  5f                   pop edi
// 007fc60b  b801000000           mov eax, 1
// 007fc610  5e                   pop esi
// 007fc611  c20400               ret 4
// copied from an identical function in another client (function ?OnSetSelected@CXTPControlComboBox@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp