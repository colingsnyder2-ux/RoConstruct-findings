// roc 2012-06 00a563e0  unit: CXTPPropertyGridInplaceButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a563e0
//
// 00a563e0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 00a563e4  7503                 jne 0xa563e9
// 00a563e6  33c0                 xor eax, eax
// 00a563e8  c3                   ret 
// 00a563e9  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00a563ec  83f8ff               cmp eax, -1
// 00a563ef  74f5                 je 0xa563e6
// 00a563f1  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00a563f4  6a00                 push 0
// 00a563f6  50                   push eax
// 00a563f7  e8c47ff9ff           call 0x9ee3c0
// 00a563fc  8bc8                 mov ecx, eax
// 00a563fe  e8bd7cf4ff           call 0x99e0c0
// 00a56403  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?GetImage@CXTPPropertyGridInplaceButton@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
