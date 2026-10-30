// roc 2009-12 008782f0  unit: CXTPControlGallery  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008782f0
//
// 008782f0  83b9f8010000ff       cmp dword ptr [ecx + 0x1f8], -1
// 008782f7  7430                 je 0x878329
// 008782f9  83b92002000000       cmp dword ptr [ecx + 0x220], 0
// 00878300  7527                 jne 0x878329
// 00878302  8b442404             mov eax, dword ptr [esp + 4]
// 00878306  8b542408             mov edx, dword ptr [esp + 8]
// 0087830a  6a01                 push 1
// 0087830c  6a00                 push 0
// 0087830e  c7810002000001000000 mov dword ptr [ecx + 0x200], 1
// 00878318  898104020000         mov dword ptr [ecx + 0x204], eax
// 0087831e  899108020000         mov dword ptr [ecx + 0x208], edx
// 00878324  e8f7feffff           call 0x878220
// 00878329  c20800               ret 8
// copied from an identical function in another client (function ?PerformMouseDown@CXTPControlGallery@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp