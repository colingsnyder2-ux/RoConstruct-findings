// roc 2009-12 00804da0  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804da0
//
// 00804da0  83b9bc00000000       cmp dword ptr [ecx + 0xbc], 0
// 00804da7  7518                 jne 0x804dc1
// 00804da9  e822f7ffff           call 0x8044d0
// 00804dae  8bc8                 mov ecx, eax
// 00804db0  e8bb0d0100           call 0x815b70
// 00804db5  83780400             cmp dword ptr [eax + 4], 0
// 00804db9  7e06                 jle 0x804dc1
// 00804dbb  b801000000           mov eax, 1
// 00804dc0  c3                   ret 
// 00804dc1  33c0                 xor eax, eax
// 00804dc3  c3                   ret 
// copied from an identical function in another client (function ?IsMouseLocked@CXTPCommandBar@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp