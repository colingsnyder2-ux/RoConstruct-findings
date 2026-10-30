// roc 2009-12 00864db0  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864db0
//
// 00864db0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00864db3  85c0                 test eax, eax
// 00864db5  7503                 jne 0x864dba
// 00864db7  33c0                 xor eax, eax
// 00864db9  c3                   ret 
// 00864dba  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00864dbd  83f9ff               cmp ecx, -1
// 00864dc0  74f5                 je 0x864db7
// 00864dc2  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00864dc8  6a00                 push 0
// 00864dca  51                   push ecx
// 00864dcb  8bc8                 mov ecx, eax
// 00864dcd  e88e2b0000           call 0x867960
// 00864dd2  8bc8                 mov ecx, eax
// 00864dd4  e8a7adfaff           call 0x80fb80
// 00864dd9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetImage@CXTPPropertyGridItemConstraint@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
