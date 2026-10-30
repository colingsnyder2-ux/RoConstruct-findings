// roc 2009-12 008eb1c0  unit: CXTPScrollBase  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb1c0
//
// 008eb1c0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 008eb1c3  85c0                 test eax, eax
// 008eb1c5  7530                 jne 0x8eb1f7
// 008eb1c7  8b01                 mov eax, dword ptr [ecx]
// 008eb1c9  8b5024               mov edx, dword ptr [eax + 0x24]
// 008eb1cc  ffd2                 call edx
// 008eb1ce  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 008eb1d1  8b01                 mov eax, dword ptr [ecx]
// 008eb1d3  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 008eb1d9  ffd2                 call edx
// 008eb1db  85c0                 test eax, eax
// 008eb1dd  7413                 je 0x8eb1f2
// 008eb1df  83c0fb               add eax, -5
// 008eb1e2  b901000000           mov ecx, 1
// 008eb1e7  3bc8                 cmp ecx, eax
// 008eb1e9  1bc0                 sbb eax, eax
// 008eb1eb  83e0fe               and eax, 0xfffffffe
// 008eb1ee  83c005               add eax, 5
// 008eb1f1  c3                   ret 
// 008eb1f2  b802000000           mov eax, 2
// 008eb1f7  c3                   ret 
// copied from an identical function in another client (function ?GetScrollBarStyle@CXTPScrollBase@@QBE?AW4XTPScrollBarStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPScrollBar.cpp