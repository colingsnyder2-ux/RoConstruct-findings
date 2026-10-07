// roc 2008-06 006aaf90  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aaf90
//
// 006aaf90  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 006aaf96  83f8ff               cmp eax, -1
// 006aaf99  7524                 jne 0x6aafbf
// 006aaf9b  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 006aafa1  85c0                 test eax, eax
// 006aafa3  751a                 jne 0x6aafbf
// 006aafa5  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 006aafab  85c0                 test eax, eax
// 006aafad  7510                 jne 0x6aafbf
// 006aafaf  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006aafb5  85c9                 test ecx, ecx
// 006aafb7  7406                 je 0x6aafbf
// 006aafb9  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 006aafbf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetStyle@CXTPControl@@QBE?AW4XTPButtonStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
