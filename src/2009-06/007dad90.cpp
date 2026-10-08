// roc 2009-06 007dad90  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dad90
//
// 007dad90  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 007dad96  83f807               cmp eax, 7
// 007dad99  751f                 jne 0x7dadba
// 007dad9b  e8809df7ff           call 0x754b20
// 007dada0  8bc8                 mov ecx, eax
// 007dada2  e8d997f7ff           call 0x754580
// 007dada7  85c0                 test eax, eax
// 007dada9  7403                 je 0x7dadae
// 007dadab  33c0                 xor eax, eax
// 007dadad  c3                   ret 
// 007dadae  e86d9df7ff           call 0x754b20
// 007dadb3  8bc8                 mov ecx, eax
// 007dadb5  e9169bf7ff           jmp 0x7548d0
// 007dadba  83f806               cmp eax, 6
// 007dadbd  75ee                 jne 0x7dadad
// 007dadbf  e85c9df7ff           call 0x754b20
// 007dadc4  8bc8                 mov ecx, eax
// 007dadc6  e9c597f7ff           jmp 0x754590
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCurrentSystemTheme@CXTPDockingPanePaintManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
