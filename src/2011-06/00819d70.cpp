// roc 2011-06 00819d70  unit: CXTPControlComboBoxList  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00819d70
//
// 00819d70  56                   push esi
// 00819d71  8bf1                 mov esi, ecx
// 00819d73  e858fdffff           call 0x819ad0
// 00819d78  85c0                 test eax, eax
// 00819d7a  740e                 je 0x819d8a
// 00819d7c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00819d82  8b805c020000         mov eax, dword ptr [eax + 0x25c]
// 00819d88  5e                   pop esi
// 00819d89  c3                   ret 
// 00819d8a  83c8ff               or eax, 0xffffffff
// 00819d8d  5e                   pop esi
// 00819d8e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetListIconId@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
