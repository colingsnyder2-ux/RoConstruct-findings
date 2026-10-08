// roc 2012-06 00991ff0  unit: CXTPControlComboBoxList  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00991ff0
//
// 00991ff0  56                   push esi
// 00991ff1  8bf1                 mov esi, ecx
// 00991ff3  e858fdffff           call 0x991d50
// 00991ff8  85c0                 test eax, eax
// 00991ffa  740e                 je 0x99200a
// 00991ffc  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00992002  8b805c020000         mov eax, dword ptr [eax + 0x25c]
// 00992008  5e                   pop esi
// 00992009  c3                   ret 
// 0099200a  83c8ff               or eax, 0xffffffff
// 0099200d  5e                   pop esi
// 0099200e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetListIconId@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
