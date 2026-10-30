// from server: 100% by auto
// roc 2007-08 006e0c10  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0c10
//
// 006e0c10  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006e0c13  85c0                 test eax, eax
// 006e0c15  740c                 je 0x6e0c23
// 006e0c17  83781805             cmp dword ptr [eax + 0x18], 5
// 006e0c1b  7506                 jne 0x6e0c23
// 006e0c1d  b801000000           mov eax, 1
// 006e0c22  c3                   ret 
// 006e0c23  33c0                 xor eax, eax
// 006e0c25  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsHidden@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
