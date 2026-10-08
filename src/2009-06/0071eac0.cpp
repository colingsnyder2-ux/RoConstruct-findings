// roc 2009-06 0071eac0  unit: CXTPControlComboBoxList  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071eac0
//
// 0071eac0  56                   push esi
// 0071eac1  8bf1                 mov esi, ecx
// 0071eac3  e858fdffff           call 0x71e820
// 0071eac8  85c0                 test eax, eax
// 0071eaca  740e                 je 0x71eada
// 0071eacc  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0071ead2  8b805c020000         mov eax, dword ptr [eax + 0x25c]
// 0071ead8  5e                   pop esi
// 0071ead9  c3                   ret 
// 0071eada  83c8ff               or eax, 0xffffffff
// 0071eadd  5e                   pop esi
// 0071eade  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetListIconId@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
