// roc 2008-06 0075dc00  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dc00
//
// 0075dc00  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0075dc03  85c0                 test eax, eax
// 0075dc05  740c                 je 0x75dc13
// 0075dc07  83781805             cmp dword ptr [eax + 0x18], 5
// 0075dc0b  7506                 jne 0x75dc13
// 0075dc0d  b801000000           mov eax, 1
// 0075dc12  c3                   ret 
// 0075dc13  33c0                 xor eax, eax
// 0075dc15  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsHidden@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
