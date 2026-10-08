// from server: 100% by auto
// roc 2008-06 00762590  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762590
//
// 00762590  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 00762596  83f807               cmp eax, 7
// 00762599  751f                 jne 0x7625ba
// 0076259b  e8a0d7f7ff           call 0x6dfd40
// 007625a0  8bc8                 mov ecx, eax
// 007625a2  e8f93fe5ff           call 0x5b65a0
// 007625a7  85c0                 test eax, eax
// 007625a9  7403                 je 0x7625ae
// 007625ab  33c0                 xor eax, eax
// 007625ad  c3                   ret 
// 007625ae  e88dd7f7ff           call 0x6dfd40
// 007625b3  8bc8                 mov ecx, eax
// 007625b5  e986d5f7ff           jmp 0x6dfb40
// 007625ba  83f806               cmp eax, 6
// 007625bd  75ee                 jne 0x7625ad
// 007625bf  e87cd7f7ff           call 0x6dfd40
// 007625c4  8bc8                 mov ecx, eax
// 007625c6  e935d2f7ff           jmp 0x6df800
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCurrentSystemTheme@CXTPDockingPanePaintManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
