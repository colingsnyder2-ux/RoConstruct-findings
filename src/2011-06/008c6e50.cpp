// roc 2011-06 008c6e50  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6e50
//
// 008c6e50  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 008c6e56  83f807               cmp eax, 7
// 008c6e59  751f                 jne 0x8c6e7a
// 008c6e5b  e880e5f7ff           call 0x8453e0
// 008c6e60  8bc8                 mov ecx, eax
// 008c6e62  e829e0f7ff           call 0x844e90
// 008c6e67  85c0                 test eax, eax
// 008c6e69  7403                 je 0x8c6e6e
// 008c6e6b  33c0                 xor eax, eax
// 008c6e6d  c3                   ret 
// 008c6e6e  e86de5f7ff           call 0x8453e0
// 008c6e73  8bc8                 mov ecx, eax
// 008c6e75  e966e3f7ff           jmp 0x8451e0
// 008c6e7a  83f806               cmp eax, 6
// 008c6e7d  75ee                 jne 0x8c6e6d
// 008c6e7f  e85ce5f7ff           call 0x8453e0
// 008c6e84  8bc8                 mov ecx, eax
// 008c6e86  e915e0f7ff           jmp 0x844ea0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCurrentSystemTheme@CXTPDockingPanePaintManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
