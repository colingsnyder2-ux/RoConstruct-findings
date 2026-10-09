// roc 2009-12 008b58c0  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b58c0
//
// 008b58c0  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 008b58c6  83f807               cmp eax, 7
// 008b58c9  751f                 jne 0x8b58ea
// 008b58cb  e800a1f7ff           call 0x82f9d0
// 008b58d0  8bc8                 mov ecx, eax
// 008b58d2  e8099bf7ff           call 0x82f3e0
// 008b58d7  85c0                 test eax, eax
// 008b58d9  7403                 je 0x8b58de
// 008b58db  33c0                 xor eax, eax
// 008b58dd  c3                   ret 
// 008b58de  e8eda0f7ff           call 0x82f9d0
// 008b58e3  8bc8                 mov ecx, eax
// 008b58e5  e9469ef7ff           jmp 0x82f730
// 008b58ea  83f806               cmp eax, 6
// 008b58ed  75ee                 jne 0x8b58dd
// 008b58ef  e8dca0f7ff           call 0x82f9d0
// 008b58f4  8bc8                 mov ecx, eax
// 008b58f6  e9f59af7ff           jmp 0x82f3f0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCurrentSystemTheme@CXTPDockingPanePaintManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
