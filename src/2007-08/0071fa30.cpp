// from server: 100% by auto
// roc 2007-08 0071fa30  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fa30
//
// 0071fa30  56                   push esi
// 0071fa31  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 0071fa34  85f6                 test esi, esi
// 0071fa36  7416                 je 0x71fa4e
// 0071fa38  8bc6                 mov eax, esi
// 0071fa3a  8b4808               mov ecx, dword ptr [eax + 8]
// 0071fa3d  8b01                 mov eax, dword ptr [ecx]
// 0071fa3f  8b5014               mov edx, dword ptr [eax + 0x14]
// 0071fa42  8b36                 mov esi, dword ptr [esi]
// 0071fa44  ffd2                 call edx
// 0071fa46  85c0                 test eax, eax
// 0071fa48  740b                 je 0x71fa55
// 0071fa4a  85f6                 test esi, esi
// 0071fa4c  75ea                 jne 0x71fa38
// 0071fa4e  b801000000           mov eax, 1
// 0071fa53  5e                   pop esi
// 0071fa54  c3                   ret 
// 0071fa55  33c0                 xor eax, eax
// 0071fa57  5e                   pop esi
// 0071fa58  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?IsEmpty@CXTPDockingPaneBaseContainer@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
