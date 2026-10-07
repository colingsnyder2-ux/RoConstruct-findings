// roc 2011-06 00900700  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900700
//
// 00900700  56                   push esi
// 00900701  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 00900704  85f6                 test esi, esi
// 00900706  7416                 je 0x90071e
// 00900708  8bc6                 mov eax, esi
// 0090070a  8b4808               mov ecx, dword ptr [eax + 8]
// 0090070d  8b01                 mov eax, dword ptr [ecx]
// 0090070f  8b5014               mov edx, dword ptr [eax + 0x14]
// 00900712  8b36                 mov esi, dword ptr [esi]
// 00900714  ffd2                 call edx
// 00900716  85c0                 test eax, eax
// 00900718  740b                 je 0x900725
// 0090071a  85f6                 test esi, esi
// 0090071c  75ea                 jne 0x900708
// 0090071e  b801000000           mov eax, 1
// 00900723  5e                   pop esi
// 00900724  c3                   ret 
// 00900725  33c0                 xor eax, eax
// 00900727  5e                   pop esi
// 00900728  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?IsEmpty@CXTPDockingPaneBaseContainer@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
