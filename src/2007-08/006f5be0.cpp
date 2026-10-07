// roc 2007-08 006f5be0  unit: CXTPPropertyGridInplaceButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5be0
//
// 006f5be0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 006f5be4  7503                 jne 0x6f5be9
// 006f5be6  33c0                 xor eax, eax
// 006f5be8  c3                   ret 
// 006f5be9  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006f5bec  83f8ff               cmp eax, -1
// 006f5bef  74f5                 je 0x6f5be6
// 006f5bf1  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006f5bf4  6a00                 push 0
// 006f5bf6  50                   push eax
// 006f5bf7  e8444ffaff           call 0x69ab40
// 006f5bfc  8bc8                 mov ecx, eax
// 006f5bfe  e8ad7df5ff           call 0x64d9b0
// 006f5c03  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?GetImage@CXTPPropertyGridInplaceButton@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
