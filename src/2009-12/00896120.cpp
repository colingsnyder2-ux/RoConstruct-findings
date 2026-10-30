// roc 2009-12 00896120  unit: CXTPRibbonBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896120
//
// 00896120  e83bedffff           call 0x894e60
// 00896125  85c0                 test eax, eax
// 00896127  740a                 je 0x896133
// 00896129  8b01                 mov eax, dword ptr [ecx]
// 0089612b  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 00896131  ffe2                 jmp edx
// 00896133  33c0                 xor eax, eax
// 00896135  c3                   ret 
// copied from an identical function in another client (function ?GetGroupsHeight@CXTPRibbonBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp