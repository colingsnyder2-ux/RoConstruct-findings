// from server: 100% by auto
// roc 2012-06 00a3a8e0  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a8e0
//
// 00a3a8e0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00a3a8e3  85c0                 test eax, eax
// 00a3a8e5  740c                 je 0xa3a8f3
// 00a3a8e7  83781805             cmp dword ptr [eax + 0x18], 5
// 00a3a8eb  7506                 jne 0xa3a8f3
// 00a3a8ed  b801000000           mov eax, 1
// 00a3a8f2  c3                   ret 
// 00a3a8f3  33c0                 xor eax, eax
// 00a3a8f5  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsHidden@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
