// roc 2008-06 007a0740  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0740
//
// 007a0740  56                   push esi
// 007a0741  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 007a0744  85f6                 test esi, esi
// 007a0746  7416                 je 0x7a075e
// 007a0748  8bc6                 mov eax, esi
// 007a074a  8b4808               mov ecx, dword ptr [eax + 8]
// 007a074d  8b01                 mov eax, dword ptr [ecx]
// 007a074f  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a0752  8b36                 mov esi, dword ptr [esi]
// 007a0754  ffd2                 call edx
// 007a0756  85c0                 test eax, eax
// 007a0758  740b                 je 0x7a0765
// 007a075a  85f6                 test esi, esi
// 007a075c  75ea                 jne 0x7a0748
// 007a075e  b801000000           mov eax, 1
// 007a0763  5e                   pop esi
// 007a0764  c3                   ret 
// 007a0765  33c0                 xor eax, eax
// 007a0767  5e                   pop esi
// 007a0768  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?IsEmpty@CXTPDockingPaneBaseContainer@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
