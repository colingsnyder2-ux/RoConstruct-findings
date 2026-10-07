// roc 2012-06 00a78920  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78920
//
// 00a78920  56                   push esi
// 00a78921  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 00a78924  85f6                 test esi, esi
// 00a78926  7416                 je 0xa7893e
// 00a78928  8bc6                 mov eax, esi
// 00a7892a  8b4808               mov ecx, dword ptr [eax + 8]
// 00a7892d  8b01                 mov eax, dword ptr [ecx]
// 00a7892f  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a78932  8b36                 mov esi, dword ptr [esi]
// 00a78934  ffd2                 call edx
// 00a78936  85c0                 test eax, eax
// 00a78938  740b                 je 0xa78945
// 00a7893a  85f6                 test esi, esi
// 00a7893c  75ea                 jne 0xa78928
// 00a7893e  b801000000           mov eax, 1
// 00a78943  5e                   pop esi
// 00a78944  c3                   ret 
// 00a78945  33c0                 xor eax, eax
// 00a78947  5e                   pop esi
// 00a78948  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?IsEmpty@CXTPDockingPaneBaseContainer@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
