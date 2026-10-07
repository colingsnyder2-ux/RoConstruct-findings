// roc 2010-06 007ad0d0  unit: CRobloxControlColorSelector  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad0d0
//
// 007ad0d0  8b8158040000         mov eax, dword ptr [ecx + 0x458]
// 007ad0d6  83f807               cmp eax, 7
// 007ad0d9  751f                 jne 0x7ad0fa
// 007ad0db  e8406a0300           call 0x7e3b20
// 007ad0e0  8bc8                 mov ecx, eax
// 007ad0e2  e8197cf0ff           call 0x6b4d00
// 007ad0e7  85c0                 test eax, eax
// 007ad0e9  7403                 je 0x7ad0ee
// 007ad0eb  33c0                 xor eax, eax
// 007ad0ed  c3                   ret 
// 007ad0ee  e82d6a0300           call 0x7e3b20
// 007ad0f3  8bc8                 mov ecx, eax
// 007ad0f5  e9d6670300           jmp 0x7e38d0
// 007ad0fa  83f806               cmp eax, 6
// 007ad0fd  75ee                 jne 0x7ad0ed
// 007ad0ff  e81c6a0300           call 0x7e3b20
// 007ad104  8bc8                 mov ecx, eax
// 007ad106  e985640300           jmp 0x7e3590
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetCurrentSystemTheme@CXTPPaintManager@@QAE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
