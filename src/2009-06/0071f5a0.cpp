// roc 2009-06 0071f5a0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f5a0
//
// 0071f5a0  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 0071f5a6  83f8ff               cmp eax, -1
// 0071f5a9  750d                 jne 0x71f5b8
// 0071f5ab  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 0071f5b1  85c9                 test ecx, ecx
// 0071f5b3  7403                 je 0x71f5b8
// 0071f5b5  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0071f5b8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetChecked@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
