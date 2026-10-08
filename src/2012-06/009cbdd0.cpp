// from server: 100% by auto
// roc 2012-06 009cbdd0  unit: CXTPPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cbdd0
//
// 009cbdd0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009cbdd3  85c0                 test eax, eax
// 009cbdd5  7411                 je 0x9cbde8
// 009cbdd7  50                   push eax
// 009cbdd8  ff153c3bb200         call dword ptr [0xb23b3c]
// 009cbdde  85c0                 test eax, eax
// 009cbde0  7406                 je 0x9cbde8
// 009cbde2  b801000000           mov eax, 1
// 009cbde7  c3                   ret 
// 009cbde8  33c0                 xor eax, eax
// 009cbdea  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPGalleryListBox.cpp (function ?IsVisible@CXTPGalleryListBox@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPGalleryListBox.cpp
