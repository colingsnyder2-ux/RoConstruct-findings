// roc 2008-06 006a7250  unit: CPatchedControlComboBox  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7250
//
// 006a7250  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 006a7256  8b89a0010000         mov ecx, dword ptr [ecx + 0x1a0]
// 006a725c  8d440805             lea eax, [eax + ecx + 5]
// 006a7260  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?GetCustomizeMinWidth@CXTPControlComboBox@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
