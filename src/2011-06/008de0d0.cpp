// roc 2011-06 008de0d0  unit: CXTPPropertyGridInplaceButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de0d0
//
// 008de0d0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 008de0d4  7503                 jne 0x8de0d9
// 008de0d6  33c0                 xor eax, eax
// 008de0d8  c3                   ret 
// 008de0d9  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 008de0dc  83f8ff               cmp eax, -1
// 008de0df  74f5                 je 0x8de0d6
// 008de0e1  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008de0e4  6a00                 push 0
// 008de0e6  50                   push eax
// 008de0e7  e8347df9ff           call 0x875e20
// 008de0ec  8bc8                 mov ecx, eax
// 008de0ee  e89d79f4ff           call 0x825a90
// 008de0f3  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?GetImage@CXTPPropertyGridInplaceButton@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
