// roc 2010-06 00818d60  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818d60
//
// 00818d60  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00818d63  85c0                 test eax, eax
// 00818d65  7503                 jne 0x818d6a
// 00818d67  33c0                 xor eax, eax
// 00818d69  c3                   ret 
// 00818d6a  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00818d6d  83f9ff               cmp ecx, -1
// 00818d70  74f5                 je 0x818d67
// 00818d72  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00818d78  6a00                 push 0
// 00818d7a  51                   push ecx
// 00818d7b  8bc8                 mov ecx, eax
// 00818d7d  e88e2b0000           call 0x81b910
// 00818d82  8bc8                 mov ecx, eax
// 00818d84  e897aefaff           call 0x7c3c20
// 00818d89  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetImage@CXTPPropertyGridItemConstraint@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
