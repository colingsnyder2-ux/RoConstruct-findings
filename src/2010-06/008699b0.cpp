// roc 2010-06 008699b0  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008699b0
//
// 008699b0  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 008699b6  83f807               cmp eax, 7
// 008699b9  751f                 jne 0x8699da
// 008699bb  e860a1f7ff           call 0x7e3b20
// 008699c0  8bc8                 mov ecx, eax
// 008699c2  e839b3e4ff           call 0x6b4d00
// 008699c7  85c0                 test eax, eax
// 008699c9  7403                 je 0x8699ce
// 008699cb  33c0                 xor eax, eax
// 008699cd  c3                   ret 
// 008699ce  e84da1f7ff           call 0x7e3b20
// 008699d3  8bc8                 mov ecx, eax
// 008699d5  e9f69ef7ff           jmp 0x7e38d0
// 008699da  83f806               cmp eax, 6
// 008699dd  75ee                 jne 0x8699cd
// 008699df  e83ca1f7ff           call 0x7e3b20
// 008699e4  8bc8                 mov ecx, eax
// 008699e6  e9a59bf7ff           jmp 0x7e3590
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCurrentSystemTheme@CXTPDockingPanePaintManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
