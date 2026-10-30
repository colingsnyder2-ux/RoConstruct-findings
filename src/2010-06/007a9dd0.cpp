// roc 2010-06 007a9dd0  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9dd0
//
// 007a9dd0  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 007a9dd6  83f8ff               cmp eax, -1
// 007a9dd9  7524                 jne 0x7a9dff
// 007a9ddb  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 007a9de1  85c0                 test eax, eax
// 007a9de3  751a                 jne 0x7a9dff
// 007a9de5  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 007a9deb  85c0                 test eax, eax
// 007a9ded  7510                 jne 0x7a9dff
// 007a9def  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007a9df5  85c9                 test ecx, ecx
// 007a9df7  7406                 je 0x7a9dff
// 007a9df9  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 007a9dff  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetStyle@CXTPControl@@QBE?AW4XTPButtonStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
