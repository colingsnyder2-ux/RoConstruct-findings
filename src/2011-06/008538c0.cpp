// roc 2011-06 008538c0  unit: CXTPPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008538c0
//
// 008538c0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008538c3  85c0                 test eax, eax
// 008538c5  7411                 je 0x8538d8
// 008538c7  50                   push eax
// 008538c8  ff15201ca400         call dword ptr [0xa41c20]
// 008538ce  85c0                 test eax, eax
// 008538d0  7406                 je 0x8538d8
// 008538d2  b801000000           mov eax, 1
// 008538d7  c3                   ret 
// 008538d8  33c0                 xor eax, eax
// 008538da  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPGalleryListBox.cpp (function ?IsVisible@CXTPGalleryListBox@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPGalleryListBox.cpp
