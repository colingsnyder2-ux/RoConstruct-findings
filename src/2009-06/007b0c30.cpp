// roc 2009-06 007b0c30  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0c30
//
// 007b0c30  8b442404             mov eax, dword ptr [esp + 4]
// 007b0c34  56                   push esi
// 007b0c35  8bf1                 mov esi, ecx
// 007b0c37  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 007b0c3d  7412                 je 0x7b0c51
// 007b0c3f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 007b0c45  e8a6fcffff           call 0x7b08f0
// 007b0c4a  8bce                 mov ecx, esi
// 007b0c4c  e84feaf6ff           call 0x71f6a0
// 007b0c51  5e                   pop esi
// 007b0c52  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
