// roc 2009-12 007fa890  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa890
//
// 007fa890  8b442404             mov eax, dword ptr [esp + 4]
// 007fa894  56                   push esi
// 007fa895  8bf1                 mov esi, ecx
// 007fa897  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 007fa89d  7412                 je 0x7fa8b1
// 007fa89f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 007fa8a5  e806ffffff           call 0x7fa7b0
// 007fa8aa  8bce                 mov ecx, esi
// 007fa8ac  e80fb4ffff           call 0x7f5cc0
// 007fa8b1  5e                   pop esi
// 007fa8b2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
