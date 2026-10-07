// roc 2008-06 007115a0  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007115a0
//
// 007115a0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007115a3  85c0                 test eax, eax
// 007115a5  7503                 jne 0x7115aa
// 007115a7  33c0                 xor eax, eax
// 007115a9  c3                   ret 
// 007115aa  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 007115ad  83f9ff               cmp ecx, -1
// 007115b0  74f5                 je 0x7115a7
// 007115b2  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 007115b8  6a00                 push 0
// 007115ba  51                   push ecx
// 007115bb  8bc8                 mov ecx, eax
// 007115bd  e88e2b0000           call 0x714150
// 007115c2  8bc8                 mov ecx, eax
// 007115c4  e887effaff           call 0x6c0550
// 007115c9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetImage@CXTPPropertyGridItemConstraint@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
