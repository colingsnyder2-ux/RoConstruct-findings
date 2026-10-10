// roc 2008-06 0079e6c0  unit: CXTPScrollBase  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e6c0
//
// 0079e6c0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 0079e6c3  85c0                 test eax, eax
// 0079e6c5  7530                 jne 0x79e6f7
// 0079e6c7  8b01                 mov eax, dword ptr [ecx]
// 0079e6c9  8b5024               mov edx, dword ptr [eax + 0x24]
// 0079e6cc  ffd2                 call edx
// 0079e6ce  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0079e6d1  8b01                 mov eax, dword ptr [ecx]
// 0079e6d3  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 0079e6d9  ffd2                 call edx
// 0079e6db  85c0                 test eax, eax
// 0079e6dd  7413                 je 0x79e6f2
// 0079e6df  83c0fb               add eax, -5
// 0079e6e2  b901000000           mov ecx, 1
// 0079e6e7  3bc8                 cmp ecx, eax
// 0079e6e9  1bc0                 sbb eax, eax
// 0079e6eb  83e0fe               and eax, 0xfffffffe
// 0079e6ee  83c005               add eax, 5
// 0079e6f1  c3                   ret 
// 0079e6f2  b802000000           mov eax, 2
// 0079e6f7  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPScrollBar.cpp (function ?GetScrollBarStyle@CXTPScrollBase@@QBE?AW4XTPScrollBarStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPScrollBar.cpp
