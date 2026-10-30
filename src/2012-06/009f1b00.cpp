// roc 2012-06 009f1b00  unit: CXTPPropertyGridItemConstraint  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1b00
//
// 009f1b00  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009f1b03  85c0                 test eax, eax
// 009f1b05  7503                 jne 0x9f1b0a
// 009f1b07  33c0                 xor eax, eax
// 009f1b09  c3                   ret 
// 009f1b0a  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 009f1b0d  83f9ff               cmp ecx, -1
// 009f1b10  74f5                 je 0x9f1b07
// 009f1b12  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 009f1b18  6a00                 push 0
// 009f1b1a  51                   push ecx
// 009f1b1b  8bc8                 mov ecx, eax
// 009f1b1d  e89ec8ffff           call 0x9ee3c0
// 009f1b22  8bc8                 mov ecx, eax
// 009f1b24  e897c5faff           call 0x99e0c0
// 009f1b29  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetImage@CXTPPropertyGridItemConstraint@@UBEPAVCXTPImageManagerIcon@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
