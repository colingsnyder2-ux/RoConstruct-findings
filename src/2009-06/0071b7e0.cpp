// roc 2009-06 0071b7e0  unit: CPatchedControlComboBox  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b7e0
//
// 0071b7e0  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0071b7e6  8b89a0010000         mov ecx, dword ptr [ecx + 0x1a0]
// 0071b7ec  8d440805             lea eax, [eax + ecx + 5]
// 0071b7f0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetCustomizeMinWidth@CXTPControlComboBox@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
