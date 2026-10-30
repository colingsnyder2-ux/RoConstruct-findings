// roc 2009-12 007f9770  unit: CXTPControlComboBoxList  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9770
//
// 007f9770  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 007f9776  85c9                 test ecx, ecx
// 007f9778  740a                 je 0x7f9784
// 007f977a  8b01                 mov eax, dword ptr [ecx]
// 007f977c  8b8078010000         mov eax, dword ptr [eax + 0x178]
// 007f9782  ffe0                 jmp eax
// 007f9784  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPControlComboBoxList@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp