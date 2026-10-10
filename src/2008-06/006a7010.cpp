// roc 2008-06 006a7010  unit: CXTPControlComboBoxList  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7010
//
// 006a7010  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 006a7016  85c9                 test ecx, ecx
// 006a7018  740a                 je 0x6a7024
// 006a701a  8b01                 mov eax, dword ptr [ecx]
// 006a701c  8b8078010000         mov eax, dword ptr [eax + 0x178]
// 006a7022  ffe0                 jmp eax
// 006a7024  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?DrawItem@CXTPControlComboBoxList@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
