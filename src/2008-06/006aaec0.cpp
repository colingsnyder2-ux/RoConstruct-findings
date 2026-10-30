// from server: 100% by auto
// roc 2008-06 006aaec0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aaec0
//
// 006aaec0  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 006aaec6  83f8ff               cmp eax, -1
// 006aaec9  750d                 jne 0x6aaed8
// 006aaecb  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 006aaed1  85c9                 test ecx, ecx
// 006aaed3  7403                 je 0x6aaed8
// 006aaed5  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006aaed8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetChecked@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
