// from server: 100% by auto
// roc 2008-06 00772fa0  unit: CXTPPropertyGridInplaceButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772fa0
//
// 00772fa0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 00772fa4  7503                 jne 0x772fa9
// 00772fa6  33c0                 xor eax, eax
// 00772fa8  c3                   ret 
// 00772fa9  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00772fac  83f8ff               cmp eax, -1
// 00772faf  74f5                 je 0x772fa6
// 00772fb1  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00772fb4  6a00                 push 0
// 00772fb6  50                   push eax
// 00772fb7  e89411faff           call 0x714150
// 00772fbc  8bc8                 mov ecx, eax
// 00772fbe  e88dd5f4ff           call 0x6c0550
// 00772fc3  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?GetImage@CXTPPropertyGridInplaceButton@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
