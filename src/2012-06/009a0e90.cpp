// roc 2012-06 009a0e90  unit: CXTPToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a0e90
//
// 009a0e90  e83f880f00           call 0xa996d4
// 009a0e95  85c0                 test eax, eax
// 009a0e97  7501                 jne 0x9a0e9a
// 009a0e99  c3                   ret 
// 009a0e9a  56                   push esi
// 009a0e9b  57                   push edi
// 009a0e9c  ff15e83bb200         call dword ptr [0xb23be8]
// 009a0ea2  50                   push eax
// 009a0ea3  e8be17feff           call 0x982666
// 009a0ea8  8bf0                 mov esi, eax
// 009a0eaa  85f6                 test esi, esi
// 009a0eac  7430                 je 0x9a0ede
// 009a0eae  8b3d143bb200         mov edi, dword ptr [0xb23b14]
// 009a0eb4  8b4620               mov eax, dword ptr [esi + 0x20]
// 009a0eb7  50                   push eax
// 009a0eb8  ffd7                 call edi
// 009a0eba  85c0                 test eax, eax
// 009a0ebc  7420                 je 0x9a0ede
// 009a0ebe  8bce                 mov ecx, esi
// 009a0ec0  e8eb15feff           call 0x9824b0
// 009a0ec5  8bf0                 mov esi, eax
// 009a0ec7  56                   push esi
// 009a0ec8  e801880f00           call 0xa996ce
// 009a0ecd  50                   push eax
// 009a0ece  e81316feff           call 0x9824e6
// 009a0ed3  83c408               add esp, 8
// 009a0ed6  85c0                 test eax, eax
// 009a0ed8  7509                 jne 0x9a0ee3
// 009a0eda  85f6                 test esi, esi
// 009a0edc  75d6                 jne 0x9a0eb4
// 009a0ede  5f                   pop edi
// 009a0edf  33c0                 xor eax, eax
// 009a0ee1  5e                   pop esi
// 009a0ee2  c3                   ret 
// 009a0ee3  5f                   pop edi
// 009a0ee4  b801000000           mov eax, 1
// 009a0ee9  5e                   pop esi
// 009a0eea  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?IsFloatingFrameFocused@CXTPToolBar@@ABEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPToolBar.cpp
