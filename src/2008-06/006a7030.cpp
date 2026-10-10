// roc 2008-06 006a7030  unit: CXTPControlComboBoxList  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7030
//
// 006a7030  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 006a7036  85c9                 test ecx, ecx
// 006a7038  740a                 je 0x6a7044
// 006a703a  8b01                 mov eax, dword ptr [ecx]
// 006a703c  8b807c010000         mov eax, dword ptr [eax + 0x17c]
// 006a7042  ffe0                 jmp eax
// 006a7044  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?MeasureItem@CXTPControlComboBoxList@@MAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
