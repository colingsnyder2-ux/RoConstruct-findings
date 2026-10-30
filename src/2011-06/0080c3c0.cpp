// roc 2011-06 0080c3c0  unit: boost::exception  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c3c0
//
// 0080c3c0  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 0080c3c6  83f8ff               cmp eax, -1
// 0080c3c9  750d                 jne 0x80c3d8
// 0080c3cb  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 0080c3d1  85c9                 test ecx, ecx
// 0080c3d3  7403                 je 0x80c3d8
// 0080c3d5  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0080c3d8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetChecked@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
