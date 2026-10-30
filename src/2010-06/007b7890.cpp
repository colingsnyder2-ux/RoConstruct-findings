// roc 2010-06 007b7890  unit: CXTPControlComboBoxList  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b7890
//
// 007b7890  56                   push esi
// 007b7891  8bf1                 mov esi, ecx
// 007b7893  e858fdffff           call 0x7b75f0
// 007b7898  85c0                 test eax, eax
// 007b789a  740e                 je 0x7b78aa
// 007b789c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 007b78a2  8b805c020000         mov eax, dword ptr [eax + 0x25c]
// 007b78a8  5e                   pop esi
// 007b78a9  c3                   ret 
// 007b78aa  83c8ff               or eax, 0xffffffff
// 007b78ad  5e                   pop esi
// 007b78ae  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetListIconId@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
