// roc 2012-06 0098fc30  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098fc30
//
// 0098fc30  8b442404             mov eax, dword ptr [esp + 4]
// 0098fc34  56                   push esi
// 0098fc35  8bf1                 mov esi, ecx
// 0098fc37  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 0098fc3d  7412                 je 0x98fc51
// 0098fc3f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0098fc45  e806ffffff           call 0x98fb50
// 0098fc4a  8bce                 mov ecx, esi
// 0098fc4c  e82f4bffff           call 0x984780
// 0098fc51  5e                   pop esi
// 0098fc52  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
