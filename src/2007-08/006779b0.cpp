// roc 2007-08 006779b0  unit: CXTPPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006779b0
//
// 006779b0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006779b3  85c0                 test eax, eax
// 006779b5  7411                 je 0x6779c8
// 006779b7  50                   push eax
// 006779b8  ff15a0ed7700         call dword ptr [0x77eda0]
// 006779be  85c0                 test eax, eax
// 006779c0  7406                 je 0x6779c8
// 006779c2  b801000000           mov eax, 1
// 006779c7  c3                   ret 
// 006779c8  33c0                 xor eax, eax
// 006779ca  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?IsVisible@CXTPPopupBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
