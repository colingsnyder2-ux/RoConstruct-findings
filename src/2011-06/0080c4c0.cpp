// roc 2011-06 0080c4c0  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c4c0
//
// 0080c4c0  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0080c4c6  83f8ff               cmp eax, -1
// 0080c4c9  7524                 jne 0x80c4ef
// 0080c4cb  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 0080c4d1  85c0                 test eax, eax
// 0080c4d3  751a                 jne 0x80c4ef
// 0080c4d5  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0080c4db  85c0                 test eax, eax
// 0080c4dd  7510                 jne 0x80c4ef
// 0080c4df  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0080c4e5  85c9                 test ecx, ecx
// 0080c4e7  7406                 je 0x80c4ef
// 0080c4e9  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 0080c4ef  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetStyle@CXTPControl@@QBE?AW4XTPButtonStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
