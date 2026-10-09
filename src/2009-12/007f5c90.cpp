// roc 2009-12 007f5c90  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5c90
//
// 007f5c90  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 007f5c96  83f8ff               cmp eax, -1
// 007f5c99  7524                 jne 0x7f5cbf
// 007f5c9b  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 007f5ca1  85c0                 test eax, eax
// 007f5ca3  751a                 jne 0x7f5cbf
// 007f5ca5  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 007f5cab  85c0                 test eax, eax
// 007f5cad  7510                 jne 0x7f5cbf
// 007f5caf  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007f5cb5  85c9                 test ecx, ecx
// 007f5cb7  7406                 je 0x7f5cbf
// 007f5cb9  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 007f5cbf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetStyle@CXTPControl@@QBE?AW4XTPButtonStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
