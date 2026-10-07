// roc 2011-06 008c24b0  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c24b0
//
// 008c24b0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 008c24b3  85c0                 test eax, eax
// 008c24b5  740c                 je 0x8c24c3
// 008c24b7  83781805             cmp dword ptr [eax + 0x18], 5
// 008c24bb  7506                 jne 0x8c24c3
// 008c24bd  b801000000           mov eax, 1
// 008c24c2  c3                   ret 
// 008c24c3  33c0                 xor eax, eax
// 008c24c5  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsHidden@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
