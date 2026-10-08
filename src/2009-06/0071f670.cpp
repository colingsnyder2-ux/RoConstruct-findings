// roc 2009-06 0071f670  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f670
//
// 0071f670  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0071f676  83f8ff               cmp eax, -1
// 0071f679  7524                 jne 0x71f69f
// 0071f67b  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 0071f681  85c0                 test eax, eax
// 0071f683  751a                 jne 0x71f69f
// 0071f685  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0071f68b  85c0                 test eax, eax
// 0071f68d  7510                 jne 0x71f69f
// 0071f68f  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0071f695  85c9                 test ecx, ecx
// 0071f697  7406                 je 0x71f69f
// 0071f699  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 0071f69f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetStyle@CXTPControl@@QBE?AW4XTPButtonStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
