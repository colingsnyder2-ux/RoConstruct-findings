// roc 2008-06 006a8070  unit: CPatchedControlComboBox  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8070
//
// 006a8070  8b442404             mov eax, dword ptr [esp + 4]
// 006a8074  56                   push esi
// 006a8075  8bf1                 mov esi, ecx
// 006a8077  3986d0000000         cmp dword ptr [esi + 0xd0], eax
// 006a807d  7412                 je 0x6a8091
// 006a807f  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 006a8085  e806ffffff           call 0x6a7f90
// 006a808a  8bce                 mov ecx, esi
// 006a808c  e82f2f0000           call 0x6aafc0
// 006a8091  5e                   pop esi
// 006a8092  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetHideFlags@CXTPControlComboBox@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
