// roc 2009-06 00789d90  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789d90
//
// 00789d90  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00789d93  85c0                 test eax, eax
// 00789d95  7503                 jne 0x789d9a
// 00789d97  33c0                 xor eax, eax
// 00789d99  c3                   ret 
// 00789d9a  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00789d9d  83f9ff               cmp ecx, -1
// 00789da0  74f5                 je 0x789d97
// 00789da2  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00789da8  6a00                 push 0
// 00789daa  51                   push ecx
// 00789dab  8bc8                 mov ecx, eax
// 00789dad  e8ae2b0000           call 0x78c960
// 00789db2  8bc8                 mov ecx, eax
// 00789db4  e8d7ecfaff           call 0x738a90
// 00789db9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetImage@CXTPPropertyGridItemConstraint@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
