// roc 2011-06 00816bd0  unit: CPatchedControlComboBox  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816bd0
//
// 00816bd0  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00816bd6  8b89a0010000         mov ecx, dword ptr [ecx + 0x1a0]
// 00816bdc  8d440805             lea eax, [eax + ecx + 5]
// 00816be0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetCustomizeMinWidth@CXTPControlComboBox@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
