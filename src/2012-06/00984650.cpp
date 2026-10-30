// roc 2012-06 00984650  unit: boost::exception  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984650
//
// 00984650  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 00984656  83f8ff               cmp eax, -1
// 00984659  750d                 jne 0x984668
// 0098465b  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 00984661  85c9                 test ecx, ecx
// 00984663  7403                 je 0x984668
// 00984665  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00984668  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetChecked@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
