// roc 2010-06 007b4720  unit: CPatchedControlComboBox  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b4720
//
// 007b4720  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 007b4726  8b89a0010000         mov ecx, dword ptr [ecx + 0x1a0]
// 007b472c  8d440805             lea eax, [eax + ecx + 5]
// 007b4730  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetCustomizeMinWidth@CXTPControlComboBox@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
