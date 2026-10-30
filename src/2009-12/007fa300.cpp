// roc 2009-12 007fa300  unit: CPatchedControlComboBox  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa300
//
// 007fa300  51                   push ecx
// 007fa301  56                   push esi
// 007fa302  8bf1                 mov esi, ecx
// 007fa304  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fa30a  c744240400000000     mov dword ptr [esp + 4], 0
// 007fa312  85c9                 test ecx, ecx
// 007fa314  7425                 je 0x7fa33b
// 007fa316  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fa31a  741f                 je 0x7fa33b
// 007fa31c  83becc01000000       cmp dword ptr [esi + 0x1cc], 0
// 007fa323  7416                 je 0x7fa33b
// 007fa325  8d86c8010000         lea eax, [esi + 0x1c8]
// 007fa32b  50                   push eax
// 007fa32c  e89fecffff           call 0x7f8fd0
// 007fa331  c786cc01000000000000 mov dword ptr [esi + 0x1cc], 0
// 007fa33b  81c6c8010000         add esi, 0x1c8
// 007fa341  56                   push esi
// 007fa342  8b742410             mov esi, dword ptr [esp + 0x10]
// 007fa346  8bce                 mov ecx, esi
// 007fa348  ff1594de9800         call dword ptr [0x98de94]
// 007fa34e  8bc6                 mov eax, esi
// 007fa350  5e                   pop esi
// 007fa351  59                   pop ecx
// 007fa352  c20400               ret 4
// copied from an identical function in another client (function ?_GetEditText@CXTPControlComboBox@@IBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp