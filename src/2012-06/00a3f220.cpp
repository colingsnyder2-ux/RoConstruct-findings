// roc 2012-06 00a3f220  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f220
//
// 00a3f220  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 00a3f226  83f807               cmp eax, 7
// 00a3f229  751f                 jne 0xa3f24a
// 00a3f22b  e830e6f7ff           call 0x9bd860
// 00a3f230  8bc8                 mov ecx, eax
// 00a3f232  e889e0f7ff           call 0x9bd2c0
// 00a3f237  85c0                 test eax, eax
// 00a3f239  7403                 je 0xa3f23e
// 00a3f23b  33c0                 xor eax, eax
// 00a3f23d  c3                   ret 
// 00a3f23e  e81de6f7ff           call 0x9bd860
// 00a3f243  8bc8                 mov ecx, eax
// 00a3f245  e9c6e3f7ff           jmp 0x9bd610
// 00a3f24a  83f806               cmp eax, 6
// 00a3f24d  75ee                 jne 0xa3f23d
// 00a3f24f  e80ce6f7ff           call 0x9bd860
// 00a3f254  8bc8                 mov ecx, eax
// 00a3f256  e975e0f7ff           jmp 0x9bd2d0
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCurrentSystemTheme@CXTPDockingPanePaintManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
