// roc 2007-08 006a4350  unit: CXTPShortcutManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4350
//
// 006a4350  8b4104               mov eax, dword ptr [ecx + 4]
// 006a4353  85c0                 test eax, eax
// 006a4355  7501                 jne 0x6a4358
// 006a4357  c3                   ret 
// 006a4358  8a00                 mov al, byte ptr [eax]
// 006a435a  a808                 test al, 8
// 006a435c  7406                 je 0x6a4364
// 006a435e  b803000000           mov eax, 3
// 006a4363  c3                   ret 
// 006a4364  a810                 test al, 0x10
// 006a4366  7406                 je 0x6a436e
// 006a4368  b802000000           mov eax, 2
// 006a436d  c3                   ret 
// 006a436e  2404                 and al, 4
// 006a4370  f6d8                 neg al
// 006a4372  1bc0                 sbb eax, eax
// 006a4374  83e0fd               and eax, 0xfffffffd
// 006a4377  83c004               add eax, 4
// 006a437a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
