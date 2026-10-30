// roc 2009-12 00894e60  unit: CXTPRibbonBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894e60
//
// 00894e60  83b94002000000       cmp dword ptr [ecx + 0x240], 0
// 00894e67  7418                 je 0x894e81
// 00894e69  e872feffff           call 0x894ce0
// 00894e6e  85c0                 test eax, eax
// 00894e70  740f                 je 0x894e81
// 00894e72  83b98c02000000       cmp dword ptr [ecx + 0x28c], 0
// 00894e79  7506                 jne 0x894e81
// 00894e7b  b801000000           mov eax, 1
// 00894e80  c3                   ret 
// 00894e81  33c0                 xor eax, eax
// 00894e83  c3                   ret 
// copied from an identical function in another client (function ?IsGroupsVisible@CXTPRibbonBar@@QBEHXZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp